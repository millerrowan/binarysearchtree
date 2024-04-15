#include <iostream>
#include <cstring>
#include "node.h"

using namespace std; 

node::node(int data) {
    node* left = NULL;
    node* right = NULL;
    data = value;    
}
node::~node() {
    delete node;
    
}

void node::setRight(node* newnext) {
    right = newnext;
    
}

node* node::getRight(){
    return right;
    
}
void node::setLeft(node* newnext) {
    left = newnext;
    
}

node* node::getLeft(){
    return left;
    
}

void node::setValue(int valuetwo) {
    value = valuetwo; 
}

node* node::getValue() {
    return value; 
    
}