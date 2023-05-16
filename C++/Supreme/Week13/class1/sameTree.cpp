// Leetcode Ques : 100

// Given the roots of two binary trees p and q, 
// write a function to check if they are the same or not.

// Two binary trees are considered the same if they are structurally identical,
//  and the nodes have the same value.

 

// Example 1:


// Input: p = [1,2,3], q = [1,2,3]
// Output: true
// Example 2:


// Input: p = [1,2], q = [1,null,2]
// Output: false
// Example 3:


// Input: p = [1,2,1], q = [1,1,2]
// Output: false
 

// Constraints:

// The number of nodes in both trees is in the range [0, 100].
// -104 <= Node.val <= 104


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
      Node( int data ){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
      }

};

// creatin a tree
Node* buildingTree(){
        
        // take data
        int data;
        cin >> data;


        // check data
        if(data == -1){
            return NULL;
        }

        // create a New Node
        Node* temp = new Node(data);

        // create left child
        cout<<"Enter the value of leftChild at Node "<<data<<" : ";
        temp->left = buildingTree();

        // create right child
        cout<<"Enter the value of rightChild at Node "<< data <<" : ";
        temp->right = buildingTree();

        return temp;

}

// check identical
bool isIdentical( Node* &root1, Node* &root2){
            
           // base case
           if(root1 == NULL && root2 == NULL){
            return true;
           } 

           if(root1==NULL || root2==NULL){
            return false;
           }

           // compair value
           if(root1->data != root2->data ){
            return false;
           }

           // check in left
           bool ans1 = isIdentical(root1->left, root2->left);

           // check in right
           bool ans2 = isIdentical(root1->right, root2->right);

           return ans1 & ans2;

}

int main(){
       
       // create first tree
       cout <<"Enter the value of root1 : ";
       Node* root1 = buildingTree();

       // create second tree
       cout<<"Enter the value of root2 : ";
       Node* root2 = buildingTree();


       // check is they are identical or not
       if( isIdentical(root1, root2) ){
        cout <<"Yes , these are identical"<<endl;
       }
       else{
        cout<<"No, these are not identical"<<endl;
       }

}