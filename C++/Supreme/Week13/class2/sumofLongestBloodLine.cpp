// GFG : Sum of the Longest Bloodline of a Tree (Sum of nodes on the longest path from root to leaf node)

// Given a binary tree of size N.
// Your task is to complete the function sumOfLongRootToLeafPath(), that find the sum of all nodes on the longest path from root to leaf node.
// If two or more paths compete for the longest path, then the path having maximum sum of nodes is being considered.

// Example 1:

// Input:
//         4
//        / \       
//       2   5
//      / \ / \     
//     7  1 2  3
//       /
//      6
// Output: 13
// Explanation:
//         4
//        / \       
//       2   5
//      / \ / \     
//     7  1 2  3
//       /
//      6

// The highlighted nodes (4, 2, 1, 6) above are
// part of the longest root to leaf path having
// sum = (4 + 2 + 1 + 6) = 13
// Example 2:

// Input:
//           1
//         /   \
//        2     3
//       / \   / \
//      4   5 6   7
// Output: 11
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function sumOfLongRootToLeafPath() which takes root node of the tree as input parameter and returns an integer denoting the sum of the longest root to leaf path of the tree. If the tree is empty, return 0.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)

// Constraints:
// 1 <= Number of nodes <= 104
// 1 <= Data of a node <= 104





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

// find max Depth of tree
int maxDepth( Node* &root){
       
       // base case
       if(root==NULL){
        return 0;
       }

       // find left height
       int leftHeight = maxDepth(root->left);

       // find rigth height
       int rightHeight = maxDepth(root->right);

       // fint max
       int count = max(leftHeight,rightHeight);

       return count+1;

}

// finding max sum
void findMaxPathSum(Node* &root, int height, int &ans, int sum){
      
      // base case
      if(root == NULL){
        return;
      }

      // include curr node
      sum += root->data;

      // update height value
      height--;

      // check height
      if(height==0 && sum >ans){
          ans = sum;
          return;
      }

      // check in left
      findMaxPathSum(root->left,height,ans,sum);

      // check in right
      findMaxPathSum(root->right,height,ans,sum);

}

int main(){
     
     // create a tree
       cout<<"Enter the value of Root Node : ";

       Node* root = buildingTree();

       // find height of tree
       int height = maxDepth(root);

       // store maxSum
       int ans = 0 ;

       // find max path sum
       findMaxPathSum(root, height, ans, 0);
         
       // print ans
       cout<<"Longest path max sum is : "<<ans<<endl;
       
    return 0;
}