#include <stdlib.h>
#include <stdio.h>

#include "linkedlist.h"

int main(int argc, char* argv[])
{
        int limit = 10;

        if (argc >= 2) {
                limit = strtol(argv[1], NULL, 10);
        }

        LinkedList xs = makeList(limit);

        printList(xs);

        freeList(xs);

        return 0;
}
