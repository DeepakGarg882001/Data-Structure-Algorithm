// Create a Binary tree and take input from user
// Now you have to print the tree data like In-Order Traversal

// LeetCode Ques : 94

// Given the root of a binary tree, return the inorder traversal of its nodes' values.

// Example 1:

// Input: root = [1,null,2,3]
// Output: [1,3,2]


// Example 2:

// Input: root = []
// Output: []


// Example 3:

// Input: root = [1]
// Output: [1]
 

// Constraints:

// The number of nodes in the tree is in the range [0, 100].
// -100 <= Node.val <= 100
 

// Follow up: Recursive solution is trivial, could you do it iteratively?

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
       Node(int data){
         this->data = data;
         this->left = NULL;
         this->right = NULL;
       }

};


// build tree
Node* buildTree(){
      
      // take data from user
      int data;
      cin >> data;
      
       // check data
       if(data == -1){
        return NULL;
       }

      // create a new Node
       Node* temp = new Node(data);

       // build left child
       cout<<"Enter the value of Left child of Node "<<data <<" : ";
       temp->left = buildTree();

       // build right child
       cout << "Enter the value of Right child of Node "<<data <<" : ";
       temp->right = buildTree();

       return temp;    
}

// printing the Tree as In-Order traversal
void printInOrder( Node* &rootNode){
     
     // base condition
     if(rootNode == NULL){
        return ;
     }

     // step A : move in left part
     printInOrder(rootNode->left);

     // step B: print current Node
     cout << rootNode->data <<"  ";

     // step C : move in Right part
     printInOrder(rootNode->right);


}

int main(){
      
      // take root node value
      cout <<"Enter the value of Root Node : ";

      // create a Empty tree
      Node* rootNode = buildTree();

      // print In-Order Traversal
      printInOrder(rootNode);
     
      cout << endl;

      return 0;   
}