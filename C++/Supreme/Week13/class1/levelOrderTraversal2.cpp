// Create a Binary tree and take input from user
// Now you have to print the tree data like Level order Traversal. 
// but print different level into deifferent lines


// Leetcode Ques : 102

// Given the root of a binary tree, 
// return the level order traversal of its nodes' values. (i.e., from left to right, level by level).

 

// Example 1:


// Input: root = [3,9,20,null,null,15,7]
// Output: [[3],[9,20],[15,7]]
// Example 2:

// Input: root = [1]
// Output: [[1]]
// Example 3:

// Input: root = []
// Output: []
 

// Constraints:

// The number of nodes in the tree is in the range [0, 2000].
// -1000 <= Node.val <= 1000





#include<iostream>
#include<queue>
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

// building the tree
Node* buildingTree(){
     
     // take data
     int data ;
     cin >> data;

     // check data
     if(data== -1){
        return NULL;
     }

     // create a New Node
     Node* temp = new Node(data);

     // build left child
     cout<<"Enter the value of Left Child of Node "<<data<<" : ";
     temp->left = buildingTree();

      // build right child
     cout<<"Enter the value of right Child of Node "<<data<<" : ";
     temp->right = buildingTree();

     return temp;

}

// printing
void printLevelOrdered(Node* &root){
     
     // track level element in queue
     queue<Node*> q;
     if(root==NULL){
        return ;
     }
     // insert intp q
     q.push(root);
     q.push(NULL);

     while(q.empty()!=true){
          
          // step A : extract front element
          Node* temp = q.front();

          // step B : print data
          if(temp!=NULL){
            cout<< temp->data <<"  ";
          }
          else{
            cout << endl;
          }
          
          // step c: remove front element
          q.pop();

          // step D : insert its child
          if(temp!=NULL){
               
               if(temp->left!= NULL){
                q.push(temp->left);
               }

               if(temp->right!=NULL){
                q.push(temp->right);
               }

          }
          else{
              if(q.empty()!=true){
                q.push(NULL);
              }
          }

     }


}


int main(){
      
      cout<<"Enter the value of Root Node : ";

      Node* root = buildingTree();

      // print as Level Ordered Traversal
      printLevelOrdered(root);

      return 0;

}