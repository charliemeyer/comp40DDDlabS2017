#include <stdlib.h>
#include <stdio.h>

#include "linkedlist.h"

typedef struct Node {
        int data;
        struct Node* next;
} Node;

LinkedList newNode(int x)
{
        LinkedList xs = malloc(sizeof(*xs));

        xs->data = x;
        xs->next = NULL;

        return xs;
}

LinkedList makeList(int n)
{
        LinkedList xs = newNode(0), next;

        next = xs;

        for (int i = 1; i < n; i++) {
                next->next = newNode(i);
                next = next->next;
        }

        return xs;
}

void printList(LinkedList xs)
{
        for (LinkedList next = xs; next; next = next->next) {
                printf("%d\n", next->data);
        }       
}

void freeList(LinkedList xs)
{
        LinkedList next;

        while (xs) {
                next = xs->next;
                free(xs);
                xs = next;
        }

}
