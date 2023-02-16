//LINKED LIST CLASS FUNC
//COLE RADETICH

#include "LL.hpp"

using namespace std;

//CONS DONE
LL::LL()
{
    root = NULL;
}

void LL::addNode(int newKey) 
{
    //CASE root is null
    if (root == NULL)
    {
        root = new Node;
        root->key = newKey;
        root->next = NULL;
    }
    
    //standard insert
    else
    {
        Node *newNode = new Node;
        newNode->key = newKey;
        newNode->next = root;
        root = newNode;
    }

}


void LL::deleteNode(int delKey) 
{

    Node *temp = root;

    //initial pointer check
    if(temp && temp -> key == delKey) 
    {
        root = root->next;
        return;
    }

    //changes pointer for comparison
    while(temp->next != NULL && temp -> next -> key != delKey) 
    {
        temp = temp -> next;
    }


    if(temp->next != NULL) 
    {
        Node *temp2 = temp->next;

        temp->next = temp2->next;
        delete temp2;
        return;
    } 
    
    else 
    {
        cout << "ERROR! NODE NOT FOUND." << endl;
    }
}


Node* LL::searchNetwork(int searchKey)
{
    Node* ptr = root;

    //loop until find searchKey
    while (ptr != NULL && ptr -> key != searchKey)
        ptr = ptr -> next;

    //return pointer, set to correct node
    return ptr;
}

void LL::printLL() 
{
    cout << "CURRENT PATH:" << endl;
    // If the head is NULL
    Node* ptr = root;
    if (ptr == NULL)
        cout << "NULL path" << endl;

    // Otherwise print each node
    else
    {
        while (ptr -> next != NULL)
        {
            cout << ptr -> key << " -> ";
            ptr = ptr -> next;
        }
        cout << ptr -> key << " -> ";
        cout << "NULL" << endl;
    }

    cout << "===" << endl;
}
