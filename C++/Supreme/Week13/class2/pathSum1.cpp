// Leetcode Ques : 112

// Given the root of a binary tree and an integer targetSum,
// return true if the tree has a root-to-leaf path such that adding up all the values along the path equals targetSum.

// A leaf is a node with no children.

// Example 1:

// Input: root = [5,4,8,11,null,13,4,7,2,null,null,null,1], targetSum = 22
// Output: true
// Explanation: The root-to-leaf path with the target sum is shown.


// Example 2:

// Input: root = [1,2,3], targetSum = 5
// Output: false
// Explanation: There two root-to-leaf paths in the tree:
// (1 --> 2): The sum is 3.
// (1 --> 3): The sum is 4.
// There is no root-to-leaf path with sum = 5.
// Example 3:

// Input: root = [], targetSum = 0
// Output: false
// Explanation: Since the tree is empty, there are no root-to-leaf paths.

// Constraints:

// The number of nodes in the tree is in the range [0, 5000].
// -1000 <= Node.val <= 1000
// -1000 <= targetSum <= 1000



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

// checking target sum with path sum
bool isTargetSumEqual( Node* &root, int &target){
    
    
    // decrease target value
    target = target - root->data;

    // check target value
    if(target <0){
        // back track
        target = target + root->data;
        return false;
    }

    // check ans
    if( root->left == NULL && root->right == NULL && target == 0 ){
        // back track
        target = target + root->data;
        return true;
    }

    // check in left part
    bool leftAns = false;
    if(root->left != NULL ){
     leftAns = isTargetSumEqual(root->left, target);
    }

    // check in right part
    bool rightAns = false;
    if(root->right !=NULL ){
      rightAns = isTargetSumEqual(root->right, target);
    }

    // back track
    target = target + root->data;

    return leftAns | rightAns;
}


int main(){

      // create a tree
       cout<<"Enter the value of Root Node : ";

       Node* root = buildingTree();

      // store target
      int target;
      cout<<"Enter the value of Target : ";
      cin >> target;
      
      // store ans
      bool ans;

      // special case
      if(root == NULL){
        ans = false;
      }
      // check is path equal to target sum
      else{
        ans = isTargetSumEqual(root, target);
      }

      // print sum
      if(ans){
        cout<<"Yes, there exist a path whose sum is equal to target sum"<<endl;
      }
      else{
        cout<<"No, there does Not exist a path whose sum is equal to target sum"<<endl;
      }
   
   return 0;
}