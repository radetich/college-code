//HASH LP FUNCTION
//CJRAD

#include "hashLP.hpp"

using namespace std;



//CNS
hashLP::hashLP(int bsize)
{
    tableSize = bsize;
    table = new node*[bsize];
    for (int i = 0; i < bsize; i++)
        table[i] = NULL;
}


void hashLP::insertItem(int currKey) 
{
    int index = hashFunction(currKey);
    node *newNode = new node();
    newNode -> key = currKey;


    while(table[index] != NULL && table[index]->key != currKey)
    {
        if(index == (tableSize - 1))
        {
            index = -1;
        }
        index++;
        numOfCollision++;
        index %= tableSize;
    }

    table[index] = newNode; 
}


unsigned int hashLP::hashFunction(int currKey)
{
    return currKey % tableSize;
}

void hashLP::printTable() 
{
    //test
}

int hashLP::getNumOfCollision() 
{
    return numOfCollision;
}
 
node* hashLP::searchItem(int currKey)
{
    int index = hashFunction(currKey);
      
    while(table[index] != NULL) 
    {    
        int count = 0; 
        //check for bounds error
        if(count++ > tableSize)
            return NULL;
    
        if(table[index] -> key == currKey) 
            return table[index]; 

        index++; 
        index %= tableSize; 
    } 
          
    //case not found
    return NULL; 

}