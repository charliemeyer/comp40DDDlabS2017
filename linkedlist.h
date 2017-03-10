#ifndef LIST_H
#define LIST_H

typedef struct Node Node;
typedef Node* LinkedList;

LinkedList newNode(int x);

LinkedList makeList(int n);

void printList(LinkedList xs);

void freeList(LinkedList xs);

#endif /* LIST_H */