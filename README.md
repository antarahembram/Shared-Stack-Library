# Shared-Stack-Library

It is a generic stack library where stacks are shared between different users. Any user can give a key to a stack and using that key he can do push, pop or remove operation on that stack. If a key is already given by any user and another user gives the same key to a stack then that stack will be shared among the two users and both can push, pop or remove that stack.

How to run the libary :

	- At first compile sharedstacklib.c and make an object file
		gcc -c sharedstacklib.c

	- sharedstacklib.o will be created

	- Now compile main.c with sharedstacklib.o
		gcc main.c sharedstacklib.o

	- To run ./a.out


