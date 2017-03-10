#include <stdlib.h>
#include <stdio.h>

#define LIMIT 10

typedef struct Node {
        int data;
        struct Node* next;
} Node;

typedef Node* List; 

List newNode(int x)
{
        List xs = malloc(sizeof(*xs));

        xs->data = x;
        xs->next = NULL;

        return xs;
}

List makeList()
{
        List xs = newNode(0), next;

        next = xs;

        for (int i = 1; i < LIMIT; i++) {
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

int main()
{
        List xs = makeList();

        printList(xs);

        freeList(xs);

        return 0;
}
