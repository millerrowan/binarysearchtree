#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <cstring>

using namespace std; 

class node {
    public: 
    node(int data);
    ~node();
    void setNext(node* newnext);
    node* getNext();
    void setValue(int valuetwo);
    node* getValue();
    
    private:
    int data;
    node* newnext;
    
};

#endif