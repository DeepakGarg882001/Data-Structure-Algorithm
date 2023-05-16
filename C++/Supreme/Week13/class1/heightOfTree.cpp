// Create a Binary tree and take input from user
// Now you have to find out the maximum height of tree

// Leetcode Ques : 104 

// Given the root of a binary tree, return its maximum depth.

// A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

 

// Example 1:


// Input: root = [3,9,20,null,null,15,7]
// Output: 3
// Example 2:

// Input: root = [1,null,2]
// Output: 2
 

// Constraints:

// The number of nodes in the tree is in the range [0, 104].
// -100 <= Node.val <= 100



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

// finding max height of tree
int findMaxHeight(Node* &root){
    
    // base condition
    if(root==NULL){
        return 0;
    }

    // step A : count left max
    int leftCount = findMaxHeight(root->left);

    // step B : count right max
    int rightCount = findMaxHeight(root->right);

    // find max b/w left and right
    int count = max(leftCount,rightCount);

    return count+1;

}


int main(){
      
      cout<<"Enter the value of Root Node : ";

      Node* root = buildingTree();

      // print as Level Ordered Traversal
      printLevelOrdered(root);
      

      // find max height
      int height = findMaxHeight(root);
      cout <<"Max Height is : "<<height<<endl;

      return 0;

}