#include <stdlib.h>
#include <stdio.h>

#include "list.h"

typedef struct Node {
        int data;
        struct Node* next;
} Node;

List newNode(int x)
{
        List xs = malloc(sizeof(*xs));

        xs->data = x;
        xs->next = NULL;

        return xs;
}

List makeList(int n)
{
        List xs = newNode(0), next;

        next = xs;

        for (int i = 1; i < n; i++) {
                next->next = newNode(i);
                next = next->next;
        }

        return xs;
}

void printList(List xs)
{
        for (List next = xs; next; next = next->next) {
                printf("%d\n", next->data);
        }       
}

void freeList(List xs)
{
        List next;

        while (xs) {
                next = xs->next;
                free(xs);
                xs = next;
        }

}
