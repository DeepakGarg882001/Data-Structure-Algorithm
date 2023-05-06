// Implement a Binary Tree
// Take input from user and print the tree


#include<iostream>
using namespace std;

// create a Node of Tree
class Node{
          
          public:

          //store data
          int data;
          // Store left Child Address
          Node* left;
          // store Right Child Address
          Node* right;


          // default constructor
          Node(){
            this->data =0;
            this->left = NULL;
            this->right = NULL;
          }

          // data as parameter 
          Node( int data ){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
          }

};

// printing the tree
void printTree( Node* &root){

    // base case
    if(root==NULL){
        return;
    }

    // processing
    cout<<root->data<<"  ";

    // recursive call
      
      // printing left child
      printTree(root->left);
      // printing right child
      printTree(root->right);

}

// building the tree
Node* buildTree( int data){
      
      // base condition
      if(data==-1){
        return NULL;
      }
     
     // processing

     // create a new node of tree
     Node* temp = new Node(data);

     // take left child value
     int leftNode;
     cout<<"Enter the value of leftChild of Node "<<data<<" : ";
     cin>>leftNode;

     // take right child value
     int rightNode;
     cout<<"Enter the value of rightChild of Node "<<data<<" : ";
     cin>> rightNode;

     // recursive call

     // bulid left childs
     temp->left = buildTree(leftNode);

     // build right childs
     temp->right = buildTree(rightNode);


     // return node
     return temp;
}

int main(){
     
     // store root node value
     int data;
     cout<<"Enter the value of Root Node : ";
     cin >> data;

     // create a Tree
     Node* root = buildTree(data);
     

     // print the tree
     printTree(root);
    
     cout<<endl;
     
   return 0;
}