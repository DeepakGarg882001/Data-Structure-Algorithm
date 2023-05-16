// Leetcode Ques : 543


// Given the root of a binary tree, return the length of the diameter of the tree.

// The diameter of a binary tree is the length of the longest path between any two nodes in a tree. 
// This path may or may not pass through the root.

// The length of a path between two nodes is represented by the number of edges between them.

 

// Example 1:


// Input: root = [1,2,3,4,5]
// Output: 3
// Explanation: 3 is the length of the path [4,2,1,3] or [5,2,1,3].
// Example 2:

// Input: root = [1,2]
// Output: 1
 

// Constraints:

// The number of nodes in the tree is in the range [1, 104].
// -100 <= Node.val <= 100





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

// finding maximum depth
int maxDepth( Node* &root ){

      // base case
      if(root==NULL){
            return 0;
      }

      //processing

      // step A : move in left part
      int ans1 = maxDepth(root->left);

      // step B : move in right part
      int ans2 = maxDepth(root->right);

      // step C : find max of ans1 and ans2
      int count = max(ans1, ans2);

      // return ans
      return count+1;

}

// finding diameter
int findDiameter(Node* &root){
      
      // base case
         if(root==NULL){
            return 0;
         }

      // processing

        // step A : kya toh left part mai hai
            int leftCount = findDiameter(root->left);

        // step B : kya toh right part mai hai
            int rightCount = findDiameter(root->right);

        // step c : Kya toh curr Node include hai
            // ->   ans = maxDepth(left) + maxDepth(right) 
            int countCurrNode =  maxDepth(root->left)  + maxDepth(root->right);

       // step D : return max
       return max(countCurrNode, max(rightCount, leftCount));
}



int main(){
      
      // create first Node
      cout<<"Enter the value of RootNode : ";

      Node* root = buildingTree();
    
      // find diameter of tree
      int diameter = findDiameter(root);
      
      cout<<"diameter is : "<< diameter <<endl;

      return 0;

}