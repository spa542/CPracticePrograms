#include<stdio.h>
#include<stdlib.h>
#include "list.h"
#include<stdbool.h>

void printDirections();
void option1();
void option2();
void option3();
void option4();
void option5();
void option6();
void option7();

ListNodePtr head = NULL;

int main() {
   
    int input;
    
    while(true) {
        do {
            printf("Enter an option: \n");
            printDirections();
            scanf("%d", &input);
        } while (input < 1 || input > 8); 

        switch(input) {
            case 1: option1(); break;
            case 2: option2(); break;
            case 3: option3(); break;
            case 4: option4(); break;
            case 5: option5(); break;
            case 6: option6(); break;
            case 7: option7(); break;
            case 8: goto Quit;
        }
    }

    Quit : clean(&head);
    printf("Bye\n");
    return 0;
}

void printDirections() {
    printf("1. Insert to the front of the list\n");
    printf("2. Insert to the back of the list\n");
    printf("3. Insert at a given position\n");
    printf("4. Delete at a specified position\n");
    printf("5. Update a specified position\n");
    printf("6. Search of a value exists int he list\n");
    printf("7. Print the current list\n");
    printf("8. Exit\n");
}

void option1() {
    int value;
    printf("Enter an integer to be stored: ");
    scanf("%d", &value);
    insertFirst(&head, value);
}

void option2() {
    int value;
    printf("Enter an integer to be stored: ");
    scanf("%d", &value);
    insertLast(&head, value);
}

void option3() {
    int value, pos;
    printf("Enter an integer to be stored: ");
    scanf("%d", &value);
    printf("Enter a position to store it: ");
    scanf("%d", &pos);
    insertPos(&head, value, pos);
}

void option4() {
    int value, pos;
    printf("Enter a position to delete: ");
    scanf("%d", &pos);
    deletePos(&head, pos);
}

void option5() {
    int value, pos;
    printf("Enter an updated integer: ");
    scanf("%d", &value);
    printf("Enter a position to update: ");
    scanf("%d", &pos);
    updatePos(&head, value, pos);
}
    
void option6() {
    int value;
    printf("Enter value to be searched for: ");
    scanf("%d", &value);
    if(searchNode(&head, value)) {
        printf("Value is in the list!\n");
    } else {
        printf("Value not found :(\n");
    }
}

void option7() {
    printList(&head);
}
