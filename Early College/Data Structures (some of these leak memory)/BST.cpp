//BST CLASS FUNCTIONS
//COLE RADETICH

#include <iostream>
#include "BST.hpp"
using namespace std;


BST::BST()
{
    root = NULL;
}

Node* BST::createNode(int data)
{
    Node* newNode = new Node;
    newNode->key = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

Node* BST::addHelp(Node* currNode, int data)
{
    if(currNode == NULL)
        return createNode(data);

    else if(currNode->key < data)
        currNode->right = addHelp(currNode->right,data);

    else if(currNode->key > data)
        currNode->left = addHelp(currNode->left,data);

    return currNode;

}


void BST::addNode(int data)
{
    root = addHelp(root, data);
}


void BST::printTreeHelper(Node* currNode)
{
    if(currNode)
    {
        printTreeHelper(currNode -> left);
        cout << "   " << currNode->key;
        printTreeHelper(currNode -> right);
    }
}


void BST::printTree()
{
     printTreeHelper(root);
     cout << endl << endl;
}



Node* BST::searchKeyHelper(Node* currNode, int data)
{
    if(currNode == NULL)
        return NULL;

    if(currNode->key == data)
        return currNode;

    if(currNode->key > data)
        return searchKeyHelper(currNode->left, data);

    return searchKeyHelper(currNode->right, data);
}


Node* BST::searchKey(int key)
{
    Node* tree = searchKeyHelper(root, key);
    
    if(tree != NULL)
        return tree;

    return NULL;
}