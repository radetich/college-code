//LINEAR PROBING HASH HEADER
//COLE RAD (yes these names are inconsistant thats just my flow)

#ifndef HASHLP_HPP
#define HASHLP_HPP

#include <string>


using namespace std;


//kept node just for ease of transfer
struct node
{
    int key;
};

class hashLP
{
    int tableSize;
    node* *table;
    int numOfCollision = 0;

    
public:
    hashLP(int bsize); 


    void insertItem(int key);


    unsigned int hashFunction(int key);

    void printTable();
    int getNumOfCollision();

    node* searchItem(int key);
};

#endif
