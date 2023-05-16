// Leetcode Ques : 110


// Given a binary tree, determine if it is height-balanced  .

// Balance Binary Tree :  the absolute difference between left subtree and right sub tree height at any node of tree should be less or equal to 1
 
// A height-balanced binary tree is a binary tree in which the depth of the two subtrees of every node never differs by more than one.

// Example 1:


// Input: root = [3,9,20,null,null,15,7]
// Output: true
// Example 2:


// Input: root = [1,2,2,3,3,null,null,4,4]
// Output: false
// Example 3:

// Input: root = []
// Output: true
 

// Constraints:

// The number of nodes in the tree is in the range [0, 5000].
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

// finding height of tree
int height(Node* &root){
       
       // base case
       if(root == NULL ){
        return 0;
       }

       // processing
        
        // step A : find height of left part
        int ans1 = height(root->left);

        // step B : find height of right part
        int ans2 = height(root->right);

        // return answer
        return max(ans1,ans2) +1;


}

// checking balance tree
bool isBalanceTree( Node* &root ){
      
      // base case
      if(root == NULL){
        return true;
      }

      // step A : find height of left part
      int leftHeight = height(root->left);

      // step B : find height of right part
      int rightHeight = height(root->right);

      // step C : find difference
      int diff = abs(leftHeight- rightHeight);

      // step D : store ans
      bool ans1 ;

      if(diff<=1){
          ans1 = true;
      }
      else{
        ans1 = false;
      }

     // step E : check in left part
     bool ans2 = isBalanceTree(root->left);

     // step F : check in right part
     bool ans3 = isBalanceTree(root->right);

     // return ans with and operation
     return ans1 & ans2 & ans3;

}

int main(){
      
       cout<<"Enter the value of Root Node : ";

      Node* root = buildingTree();

      // check is it balance tree or not
      if(isBalanceTree(root)){
        cout<<"Yes, this is a Balance tree"<<endl;
      }
      else{
        cout <<"No, this is Not a Balance Tree"<<endl;
      }

    return 0;
}