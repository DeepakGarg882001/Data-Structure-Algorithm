// Create a Binary tree and take input from user
// Now you have to print the tree data like Post-Order Traversal

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

// printing Post Ordered Traversal wise
void printPostOrdered( Node* &root){
      
      // base conditon
      if(root == NULL){
        return ;
      }

      // step A : move to left part
      printPostOrdered(root->left);

      // step B : move to right part
      printPostOrdered(root->right);

      // step C : print current node
      cout << root->data <<"  ";

}

int main(){
      
      cout <<"Enter the value of RootNode : ";

      // create a Empty Tree
      Node* root = buildingTree();

      // print Post-Ordered Wise
      printPostOrdered(root);

      cout << endl;

      return 0;
}