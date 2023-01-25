// BST.h
#ifndef BST
#define BST

struct Node
{
    int key;
    int data;
    int size;
    Node* left;
    Node* right;
};

Node* createNewNode(int key, int data);
void printNode(Node* node);
void insert(Node* &root, int key, int data);
Node* find(Node* root, int key);
void printTree(Node* root);

#endif