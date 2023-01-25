//
// BST.h 
// 
#ifndef BST         // include the header file only once
#define BST

struct Node
{
    int key;    // unique key 
    int data;
    Node* left;
    Node* right;
    int size;   // the number of nodes in the sub-tree rooted in this node
};

Node* createNewNode(int key, int data);
void printNode(Node* node);

// find a node with the given key
// in the tree rooted in root
// if the key is not found, return NULL
Node* find(Node* root, int key);

// insert the pair (key, data) into the tree rooted in root
// if there is no node with the give key, create a new one
void insert(Node* &root, int key, int data);

void printTree(Node* root);

// returns the size of the sub-tree
int size(Node* root);

int keyRank1(Node* root, int key);
int keyRank2(Node* root, int key);

// delete the node with the max key
// root         -   the root of the sub-tree. 
//                  root == NULL if the sub-tree is empty
// rootParent   -   the parent o the root. 
//                  rootParent == NULL if the root has no parent node
void deleteMax(Node* &root);

#endif
