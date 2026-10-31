#ifndef LINKEDLIST_H
#define LINKEDLIST_H


/* a queue contains positive integer values. */
typedef struct Node
{
    unsigned int value;
    Node* next;
} Node;

Node* addNode(Node* head, unsigned int value);
Node* addNodeBeforeHead(Node* head, unsigned int value);
Node* removeNode(Node* head);
Node* removeHead(Node* head);
Node* freeList(Node* head);

#endif /* QUEUE_H */