#include "LinkedList.h"
#define NULL 0

/*
adds a node at the end of the linked list
input: head and value
output: head
*/
Node* addNode(Node* head, unsigned int value)
{
	Node* newNode = new Node;
	Node* tmp = head;
	newNode->next = NULL;
	newNode->value = value;
	if (head == NULL) return newNode;
	while (tmp->next != NULL) tmp = tmp->next;
	tmp->next = newNode;

	return head;
}

/*
adds a node before the head
input: head and value
output: head
*/
Node* addNodeBeforeHead(Node* head, unsigned int value)
{
	Node* newNode = new Node;
	newNode->next = head;
	newNode->value = value;

	return newNode;	
}

/*
removes a node at the end of the linked list
input: head 
output: head
*/
Node* removeNode(Node* head)
{
	Node* tmp = head;
	if (head == NULL) return NULL;
	else if (head->next == NULL)
	{
		delete head;
		return NULL;
	}

	while (tmp->next->next) tmp = tmp->next;
	delete tmp->next;
	tmp->next = NULL;	

	return head;
}

/*
removes the head
input: head 
output: head
*/
Node* removeHead(Node* head)
{
	if (head == NULL) return NULL;
	Node* tmp = head;
	head = head->next;
	delete tmp;

	return head;
}

/*
frees the list
input: head
output: NULL
*/
Node* freeList(Node* head)
{
	Node* tmp = head;
	while (head)
	{
		head = head->next;
		delete tmp;
		tmp = head;
	}

	return NULL;
}