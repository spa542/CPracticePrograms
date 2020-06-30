#ifndef _LIST_H_
#define _LIST_H_
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// Referential Structure of node list
typedef struct node {
    int value;
    struct node *next;
} node_t;

typedef node_t *ListNodePtr;

void insertFirst(ListNodePtr*, int);
void insertLast(ListNodePtr*, int);
void insertPos(ListNodePtr*, int, int);
void deletePos(ListNodePtr*, int);
void updatePos(ListNodePtr*, int, int);
bool searchNode(ListNodePtr*, int);
void printList(ListNodePtr*);
void clean(ListNodePtr*);

#endif
