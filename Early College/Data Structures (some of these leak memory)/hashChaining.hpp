#ifndef HASH_HPP
#define HASH_HPP

#include <string>


using namespace std;

struct node
{
    int key;
    struct node* next;
};

class hashChaining
{
    int tableSize;
    node* *table;
    int numOfCollision = 0;

    
public:
    hashChaining(int bsize); 
    void insertItem(int key);
    unsigned int hashFunction(int key);
    int getNumOfCollision();
    node* searchItem(int key);
};

#endif
