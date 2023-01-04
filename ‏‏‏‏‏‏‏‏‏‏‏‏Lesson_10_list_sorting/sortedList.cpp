#include <iostream>
#include <iomanip>      // setw(), setpricision()
#include <stdlib.h>     // for srand(), rand(), RAND_MAX
#include <time.h>       // for time()
#include <limits.h>     // for INT_MAX

#define WIDTH 10
using namespace std; 

struct Node
{
    int value;
    Node* next;
};

Node* createNewNode(int val)
{
    Node* newNode = new Node;
    newNode->next = NULL;
    newNode->value = val;
    return newNode;
}

Node* createEmptyList()
{
    Node* firstSentinel = createNewNode(INT_MIN);

    Node* lastSentinel = createNewNode(INT_MAX);
    firstSentinel->next = lastSentinel;
    return firstSentinel;
}

void insertToSortedList(Node* head, Node* newNode)
{
    Node* prevNode = head; 
    while(prevNode->next->value < newNode->value)
    {
        prevNode = prevNode->next;
    }
    
}



