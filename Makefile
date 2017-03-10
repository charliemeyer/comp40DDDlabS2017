# Comp 40: Lab 7

CFLAGS := -g -std=c99 -Wall -Wextra -Werror -Wfatal-errors

all: linkedlist loop

%.o : %.c linkedlist.h

loop: loop.c

linkedlist: list-main.o linkedlist.o linkedlist.h

clean:
	rm loop linkedlist *.o
