//BST HEADER FUNC
//COLE RADETICH

#ifndef BST_HPP
#define BST_HPP

using namespace std;

struct Node
{
    int key;
    Node* left;
    Node* right;
};

class BST
{
    private:
        Node* root;
        Node* createNode(int data);
        Node* addHelp(Node *currNode, int data);
        void printTreeHelper(Node *currNode);
        Node* searchKeyHelper(Node *currNode, int data);


    public:
        BST();
        void addNode(int data);
        Node* searchKey(int data);
        void printTree();

};
#endif
