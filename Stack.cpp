#include "Stack.h"
#define NULL 0

/*
pushes a value into a stack
input: stack and the value
output: -
*/
void push(Stack* s, unsigned int element)
{
	s->last = addNodeBeforeHead(s->last, element);
	s->count++;
}

/*
pops a value from a stack
input: stack
output: the value
*/
int pop(Stack* s) // Return -1 if stack is empty
{
	unsigned int out; 
	if (isEmpty(s)) return -1;
	out = s->last->value;
	s->last = removeHead(s->last);
	s->count--;
	return out;
}

/*
initiates the stack
input: stack 
output: -
*/
void initStack(Stack* s)
{
	s->count = 0;
	s->last = NULL;
}

/*
cleans the stack
input: stack
output: -
*/
void cleanStack(Stack* s)
{
	s->last = freeList(s->last);
	s->count = 0;
}

/*
checks if the stack is empty
input: stack
output: true/false
*/
bool isEmpty(Stack* s)
{
	return s->last == NULL;
}