// Create a Binary tree and take input from user
// Now you have to print the tree values in Level-order traversal from left to right


#include<iostream>
#include<queue>
using namespace std;

// create a node of tree
class Node{
      
      public:
      // store data
      int data;
      // store left child address
      Node* left;
      // store right child address
      Node* right;


      // default constructor
      Node(){
          this->data = 0;
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

// printing the data as Level-Order traversal
void printAsLevelOrder( Node* &root ){
          
        // create a queue
        queue<Node*> q;

        // first case
        if(root==NULL){
            cout<<"Tree is Empty"<<endl;
            return;
        }
        
        // insert root node
        q.push(root);

        // run a loop
        while(!q.empty()){
            
            // stepA : extract front 
            Node* temp = q.front();

            // stepB: print front element
            cout<< temp->data <<"  ";
           
            // stepC : remove front data
            q.pop();

            // stepD : insert its child left or right
            
            if(temp->left !=NULL){
                q.push(temp->left);
            }

            if(temp->right!=NULL){
                q.push(temp->right);
            }

        }
     
     cout<<endl;

}

// building a Binary tree
Node* buildTree( int data ){
       
       // base case
       if(data == -1){
        return NULL;
       }

       // processing
        
        // create a new Node
        Node* temp = new Node(data);

       // take left child value
       int leftNode;
       cout<<"Enter the leftChild value of Node "<<data<<" : ";
       cin>> leftNode;

       // take right child value
       int rightNode;
       cout<<"Enter the rightChild value of Node "<<data<<" : ";
       cin>> rightNode; 
       

       // recursive call
       temp->left = buildTree(leftNode);

       // building right childs
       temp->right = buildTree(rightNode);

       return temp;
}

int main(){
    
     // store root node value
     int rootValue;
     cout<<"Enter the value of Root Node : ";
     cin >> rootValue;

     // create a tree
     Node* root = buildTree(rootValue);
    
     // print tree data as Level-order Traversal
     printAsLevelOrder(root);
   
    return 0;
}
