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
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

void printList(Node* head)
{
    Node* currNode = head->next;
    while(currNode->next != NULL)
    {
        cout << setw(WIDTH) << currNode->value;
        currNode = currNode->next;
    }
}

int main()
{
    Node* sortedList = createEmptyList();

    int numValues;
    cout << "Enter the number of values to sort : ";
    cin >> numValues;
    
    // generate random values and insert them into the unsorted list
    srand (time(NULL));
    for(int i = 1; i<=numValues; i++)
    {
        // create a new node with a random value and insert it into the sorted list
        int newValue = rand();
        Node* newNode = createNewNode(newValue);
        insertToSortedList(sortedList, newNode);
    }

    // print the sorted list of the values
    cout << "Sorted list of the values: " << endl;
    printList(sortedList);
    cout<<endl;

    system("pause");
    return 0;
}    





