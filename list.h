#ifndef LIST_H
#define LIST_H

typedef struct Node Node;
typedef Node* List;

List newNode(int x);

List makeList(int n);

void printList(List xs);

void freeList(List xs);

#endif /* LIST_H */