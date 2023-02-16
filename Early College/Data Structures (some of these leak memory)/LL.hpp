//LINKED LIST HEADER FUNC
//COLE RADETICH

#pragma once
#include <iostream>


struct Node
{
    int key;
    Node *next;
};


class LL 
{
    private:
        Node* root;
    public:
        LL();
        void addNode(int newKey);
        void deleteNode(int delKey);
        Node* searchNetwork(int searchKey);
        void printLL();
};
