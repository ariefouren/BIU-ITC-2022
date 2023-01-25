// BST.cpp
#include "BST.h"

#include <iostream>
#include <iomanip>      // setw()

#define WIDTH 10
using namespace std; 


Node* createNewNode(int key, int data)
{
    Node* newNode = new Node;
    newNode->key = key;
    newNode->data = data;
    newNode->size = 1;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

void printNode(Node* node)
{
    cout << "key: " << setw(WIDTH) << node->key << " data: "<< setw(WIDTH) << node->data;
}

void insert(Node* &root, int key, int data)
{
    Node* node;
    if(root == NULL) 
    {
        root = createNewNode(key, data);
    }
    else if(root->key == key)
    {
        root->data = data;
    }
    else if (key < root->key)
    {
        insert(root->left, key, data);
    }
    else // key > root->key
    {
        insert(root->right, key, data);
    }

}


Node* find(Node* root, int key);
void printTree(Node* root);
