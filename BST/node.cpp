#include <iostream>
#include <cstring>
#include "node.h"

using namespace std; 

node::node(int value) {
    left = NULL;
    right = NULL;
    data = value;    
}
node::~node() {
    
}

void node::setRight(node* newright) {
    right = newright;
    
}

node* node::getRight(){
    return right;
    
}
void node::setLeft(node* newleft) {
    left = newleft;
    
}

node* node::getLeft(){
    return left;
    
}

void node::setValue(int value) {
    data = value; 
}

int node::getValue() {
    return data; 
    
}