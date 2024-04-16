#include <iostream>
#include <cstring>
#include "node.h"

using namespace std; 

void add(node* &root, int data);
void print(node* root, int count);
void remove(node* root, int n);
bool search(int search, node* root);


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
	  add(root, input1);
	}

      }
      if(strcmp(input, "MANUAL")==0) {
	    cout << "Type a number between 1 and 999" << endl;
        cin >> mannum;
        add(root, mannum);
      }

    }

    if(strcmp(input, "PRINT")==0) {
        print(root, count);

    }
    
    if(strcmp(input, "DELETE")==0) {
        cout << "what number would you like to delete?" << endl; 
        cin >> n; 
        remove(root, n);
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
void add(node* &root, int data) {
    //if tree doesn't exist yet
    if(root == NULL) {
        root = new node(data); 
        root->setLeft(NULL);
        root->setRight(NULL;
        return;
    }
    if(root->getValue() > data) {
        root->setLeft(add(root->getLeft(), data))
    }
    else{
        root->setRight(add(root->getRight(), data)); 
    }
    return;  
    
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

void remove(node* root, int n) {
    if(root == NULL) {
        cout << "tree is empty" << endl;
        return;
    }
    if(search(n, root) == false) {
        cout << "this number is not in the tree" << endl;
        return;
    }
    if(current->getValue == n) {
        
        //case 1: if the node is a leaf
        if(current->getRight()==NULL && current->getLeft() == NULL) {
            //now you need to check where the node is located
            
            //if the node is a root
            if(root->getValue()==n){
                root = NULL;
            }
            //if node is a right child
            if(current->getValue() > parent->getValue()) {
                parent->setRight(NULL); 
                return;
            }
            //if node is a left child
            if(current->getValue() < parent->getValue()) {
                parent->setLeft(NULL);
                return; 
            }
            return;
        }
        //case 2: if the node has one child
        //if node has a right child
        if(current->getRight() != NULL && current->getLeft() == NULL) {
            node* temp = current;
            delete current;
            current = temp; 
            return;
        }
        //if node has a left child
        if(current->getRight() == NULL && current->getLeft() != NULL) {
            //if current is a left child 
            if(current->getValue() < parent->getValue()) {
                node* temp = current->getLeft();
                 parent->setLeft(current->getLeft());
                 delete current; 
            }
            //if current is a right child
            if(current->getValue() > parent->getValue()) {
                node* temp = current->getLeft();
                parent->setRight(current->getLeft());
                delete current;
            }
    

            return; 
        }
         //if node has a right child
        if(current->getRight() != NULL && current->getLeft() == NULL) {
            //if current is a left child 
            if(current->getValue() < parent->getValue()) {
                node* temp = current->getRight(); 
                 parent->setLeft(temp);
                 delete current; 
            }
            //if current is a right child
            if(current->getValue() > parent->getValue()) {
                node* temp = current->getRight();
                parent->setRight(temp);
                delete current;
            }
    

            return; 
        }
            
        return;
        }
        //case 3: if the node has two children
        if(current->getRight() != NULL && current->getLeft() != NULL) {
            node* temp = current->getLeft();
            node* temptwo = current;
            while(temp->getLeft() != NULL) {
                temptwo = temp;
                temp = temp->getLeft(); 
            }
            if(temptwo != current) {
                temptwo->setLeft(temp->getRight());
            }
            else{
                temptwo->setRight(temp->getRight());
                
            }
            current->setValue(s->getValue());
            delete s;
            return;
            
        }
        
    }
   
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