// Create a Binary tree and take input from user
// Now you have to print the tree data like Pre-Order Traversal

#include<iostream>
using namespace std;

// create a Node of tree
class Node{

    public:
     
     // store data
     int data;
     // store left child
     Node* left;
     // store right child
     Node* right;


     // data as parameter
     Node( int data){
         this->data = data;
         this->left = NULL;
         this->right = NULL;
     }
    
};


// building the tree
Node* buildingTree( ){
       
       // take data 
       int data;
       cin >> data;


       // check data
       if(data == -1){
        return NULL;
       }

       // create a New Node
       Node* temp  = new Node(data);

       // build left child
       cout<<"Enter the value of Left child of Node "<<data<<" : ";
       temp->left = buildingTree();

       // build right child
       cout<<"Enter the value of right child of Node "<<data<<" : ";
       temp->right = buildingTree();
      
       return temp;
}

// printing Pre Ordered Traversal wise
void printPreOrdered( Node* &root){
      
      // base conditon
      if(root == NULL){
        return ;
      }

      // step A : print current node
      cout << root->data <<"  ";

      // step B : move to left part
      printPreOrdered(root->left);

      // step C : move to right part
      printPreOrdered(root->right);

}

int main(){
      
      cout <<"Enter the value of RootNode : ";

      // create a Empty Tree
      Node* root = buildingTree();

      // print Pre-Ordered Wise
      printPreOrdered(root);

      cout << endl;

      return 0;
}