#include <iostream>
#include <cstring>
#include "node.h"

using namespace std; 

int main()
{
  bool stillPlaying = true;
  int mannum;
  int numcounter = 0;
  node* root = NULL;
  int search;
  int n;

  
  while(stillPlaying == true) {
    cout << "Enter ADD, PRINT, DELETE, SEARCH, or QUIT" << endl;
    cin >> input; 
    
    if(strcmp(input, "ADD")==0) {
      char input2[20]; 
      cout << "input from file or manual?";
      cout << "Enter 'FILE' or 'MANUAL'" << endl;
      cin >> input;
      
      if(strcmp(input, "FILE")==0){
	cout << "what is the file name and include .txt at end" << endl;
	char fileName[30];
	cin >> fileName;

	ifstream fin;
	fin.open(fileName);
	int input1;
	while(fin >> input1) {
	  add(root, root, root, input1);
	}

      }
      if(strcmp(input, "MANUAL")==0) {
	    cout << "Type a number between 1 and 999" << endl;
        cin >> mannum;
        add(root, root, root, mannum);
      }

    }

    if(strcmp(input, "PRINT")==0) {
        print(root, count);

    }
    
    if(strcmp(input, "DELETE")==0) {
        cout << "what number would you like to delete?" << endl; 
        cin >> n; 
        remove();
    }
    if(strcmp(input, "SEARCH")==0) {
        
      cout << "what number are you searching for?" << endl;
      cin >> search;
      search(search, root);
    }
    if(strcmp(input, "QUIT")==0) {
      stillPlaying = false; 
    }
  }
  
   
}

//adds a node to the tree
void add(node* &root, node* &current, node* &previous, int data) {
    //if tree doesn't exist yet
    if(root == NULL) {
        root = new node(data); 
        return;
    }
    //if current doesnt exist
    if(current == NULL) {
        current = new node(data);
        //if current is greater than parent
       if(current->getValue() > previous->getValue()) {
           previous->setRight(current);
       }
       //if current is less than parent
       else {
           previous->setLeft(current); 
       }
        return;
    }
    //if 
    if(data > current->getValue()) {
        add(root, current->getRight(), current, data);
    }
    else{
        add(root, current->getLeft(), current, data); 
    }
    
}

//prints out tree
void print(node* root, int count)  {
    if(root == NULL) {
        return;
    }
    //if left child exists
    if(root->getLeft != NULL) {
        //calls print function but passes in left child
        print(root->getLeft(), count+1)
    }
    for(int a = 0; a < count; a++) {
        cout << "\t";
    }
    cout << root->getValue() << endl; 
    //if right child exists
    if(root->getRight != NULL) {
        //calls print function but passes in right child
        print(root->getRight(), count+1); 
    }
    
} 

void remove(node* root, ) {
   
    
}

//checks if number is in tree
bool search(int search, node* root) {
    //if root doesnt exist
    if(root == NULL) {
        return false; 
    }
    //if root equals the value searched
    if(root->getValue == search) {
        return true; 
    }
    //if root value is less than search value
    if(root->getValue < search) {
        //call search again but pass in left child
        return(search(search, node->getLeft()));
    }
    //if root value is greater than search value
    if(root->getValue > search) {
        //call search again but pass in right child
        return(search(search, node->getRight())); 
    }
    
}