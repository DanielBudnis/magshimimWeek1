#include "Queue.h"
#define NULL 0

/*
initiates the queue
input: a pointer to an initialized queue and the size of the queue
output: -
*/
void initQueue(Queue* q, unsigned int size)
{
	unsigned* elements = new unsigned[size];
	q->elements = elements;
	q->count = 0;
	q->maxSize = size;
}

/*
frees the memory of the elements and resets the queue
input: a pointer to an initialized queue 
output: -
*/
void cleanQueue(Queue* q)
{
	delete[](q->elements);
	q->count = 0;
	q->elements = NULL;
	q->maxSize = 0;
}

/*
adds a value to the queue
input: a pointer to an initialized queue, the value
output: -
*/
void enqueue(Queue* q, unsigned int newValue)
{
	if (!isFull(q))
	{
		q->elements[q->count++] = newValue;
	}
}

/*
removes the first element of the queue
input: a pointer to an initialized queue
output: the value that was outputted
*/
int dequeue(Queue* q) // return element in top of queue, or -1 if empty
{
	int i;
	unsigned int out;
	if (isEmpty(q)) return -1;
	out = q->elements[0];
	for (i = 0; i < q->maxSize-1; i++)
	{
		q->elements[i] = q->elements[i + 1];
	}
	q->count--;
	return out;
}

/*
checks if the queue is empty
input: a pointer to an initialized queue
output: true/false
*/
bool isEmpty(Queue* s)
{
	return s->count == 0;
}

/*
checks if the queue is full
input: a pointer to an initialized queue
output: true/false
*/
bool isFull(Queue* s)
{
	return s->count == s->maxSize;
}