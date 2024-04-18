#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <cstring>

using namespace std; 

class node {
    public: 
    node(int data);
    ~node();
    void setRight(node* newnext);
    node* getRight();
    void setLeft(node* newnext);
    node* getLeft(); 
    void setValue(int valuetwo);
    int getValue();
    
    private:
    int data;
    node* newleft;
    node* newright;
    node* right;
    node* left;
    
};

#endif