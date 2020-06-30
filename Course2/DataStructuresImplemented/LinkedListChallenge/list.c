#include "list.h"

/*
 * insertFirst Function:
 * Inserts given integer into a node and inserts into front
 * of the list that is passed through
 */
void insertFirst(ListNodePtr *head, int insertMe) {
    ListNodePtr new_node = malloc(sizeof(node_t));
    new_node->value = insertMe;
    new_node->next = NULL;
    if (*head == NULL) {
        *head = new_node;
        return;
    }
    new_node->next = *head;
    *head = new_node;
}

/*
 * insertLast Function:
 * Inserts a given integer into a node and inserts into end
 * of the list that is passed through
 */
void insertLast(ListNodePtr *head, int insertMe) {
    ListNodePtr new_node = malloc(sizeof(node_t));
    new_node->value = insertMe;
    new_node->next = NULL;
    if (*head == NULL) {
        *head = new_node;
        return;
    }
    ListNodePtr cursor = *head;
    while(cursor->next) {
        cursor = cursor->next;
    }
    cursor->next = new_node;
}

/*
 * insertPos Function:
 * ListNodePtr - value to insert - position to insert at
 * Inserts a given value node into a position given into 
 * the list passed
 */
void insertPos(ListNodePtr *head, int insertMe, int atPos) {
    if (atPos < 1) {
        printf("Subscript starts at 1 going forward...\n");
        return;
    }
    if (atPos == 1) {
        insertFirst(head, insertMe); 
        return;
    }
    ListNodePtr cursor = *head;
    ListNodePtr prev = cursor;
    for (int i = 0; i < atPos; i++) {
       if (cursor == NULL) {
            printf("Position doesn't exist, insert aborted\n");
            return;
       }
       prev = cursor;
       cursor = cursor->next;
    }
    ListNodePtr new_node = malloc(sizeof(node_t));
    new_node->value = insertMe;
    new_node->next = NULL;

    // Insert new node at position
    new_node->next = cursor;
    prev->next = new_node;
}

/*
 * deletePos Function:
 * Takes a list and deletes one node at the specified position
 * if the position exists in the current list
 */
void deletePos(ListNodePtr *head, int atPos) {
    if (atPos < 1) {
        printf("Subscript starts at 1 going forward...\n");
        return;
    }
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }
    if (atPos == 1) {
        ListNodePtr deleteMe = *head;
        *head = (*head)->next;
        free(deleteMe);
        return;
    }
    ListNodePtr cursor = *head;
    ListNodePtr prev = cursor;
    for (int i = 0; i < atPos; i++) {
        if (cursor == NULL) {
            printf("Position doesn't exist, deletion aborted\n");
            return;
        }
        prev = cursor;
        cursor = cursor->next;
    }
    prev->next = cursor->next;
    free(cursor);
}

/*
 * updatePos Function:
 * ListNodePtr - updateValue - Position to update
 * Takes a list and updates a value of a node at a specified position
 * if the position exists in the list
 */
void updatePos(ListNodePtr *head, int newValue, int atPos) {
    if (atPos < 1) {
        printf("Subscript starts at 1 going forward...\n");
        return;
    }
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }
    if (atPos == 1) {
        (*head)->value = newValue;
        return;
    }
    ListNodePtr cursor = *head;
    for (int i = 0; i < atPos; i++) {
        if (cursor == NULL) {
            printf("Position doesn't exist, update aborted\n");
            return;
        }
        cursor = cursor->next;
    }
    cursor->value = newValue;
}

/*
 * searchNode Function:
 * Takes a list argument and searches for a given value in the list, 
 * and returns a bool if it is in the list or not
 */
bool searchNode(ListNodePtr *head, int searchValue) {
    if (*head == NULL) {
        printf("List is empty\n");
        return false;
    }
    ListNodePtr cursor = *head;
    while(cursor) {
        if (cursor->value == searchValue) {
            return true;
        }
        cursor = cursor->next;
    }
    return false;
}

/*
 * printList Function:
 * Takes a list as an argument and prints its contents
 */
void printList(ListNodePtr *head) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }
    ListNodePtr cursor = *head;
    while(cursor) {
        printf("%d, ", cursor->value);
        cursor = cursor->next;
    }
    printf("\n");
}

/*
 * clean Function:
 * Cleans up the list and deallocates so there is no
 * memory leakage
 */
void clean(ListNodePtr *head) {
    if (*head == NULL) {
        return;
    }
    if ((*head)->next == NULL) {
        free(*head);
        return;
    }
    ListNodePtr cursor = *head;
    ListNodePtr hold = cursor;
    while(cursor) {
        cursor = cursor->next;
        free(hold);
        hold = cursor;
    }
}
