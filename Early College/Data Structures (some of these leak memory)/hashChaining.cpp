//Hashing with chaining test function
//COLE RADETICH
#include "hashChaining.hpp"
#include <iostream>

using namespace std;



//CNS
hashChaining::hashChaining(int bsize)
{
    tableSize = bsize;
    table = new node*[bsize];
}


void hashChaining::insertItem(int currKey) 
{
    int index = hashFunction(currKey);

    node* prev = NULL;
    node* entry = table[index];

    while(entry != NULL)
    {
        prev = entry;
        entry = entry -> next;
        numOfCollision++;
    }

    if (entry == NULL)
    {
        entry = new node();
        entry -> key = currKey;
    
        if (prev == NULL)
            table[index] = entry;

	    else
            prev -> next = entry;
    }
    else
        entry -> key = currKey;

}


unsigned int hashChaining::hashFunction(int currKey)
{
    return currKey % tableSize;
}

int hashChaining::getNumOfCollision() 
{
    return numOfCollision;
}
 
node* hashChaining::searchItem(int currKey)
{
    int index = hashFunction(currKey);

    bool test = false;
    node* entry = table[index];
    
    while (entry != NULL)
	{
        if (entry->key == currKey)
	    {
            return entry;
            test = true;
        }

        entry = entry->next;
    }
    if (!test)
        return NULL;

}