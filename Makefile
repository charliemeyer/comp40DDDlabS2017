# Comp 40: Lab 7

CFLAGS := -g -std=c99 -Wall -Wextra -Werror -Wfatal-errors

all: list loop

loop: loop.c

list: list-main.o list.o list.h 

clean:
	rm loop list *.o