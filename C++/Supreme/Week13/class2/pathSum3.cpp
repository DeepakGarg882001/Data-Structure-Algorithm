// Leetcode Ques : 437

// Given the root of a binary tree and an integer targetSum,
// return the number of paths where the sum of the values along the path equals targetSum.

// The path does not need to start or end at the root or a leaf,
// but it must go downwards (i.e., traveling only from parent nodes to child nodes).

// Example 1:

// Input: root = [10,5,-3,3,2,null,11,3,-2,null,1], targetSum = 8
// Output: 3
// Explanation: The paths that sum to 8 are shown.


// Example 2:

// Input: root = [5,4,8,11,null,13,4,7,2,null,null,5,1], targetSum = 22
// Output: 3

// Example 3:

// Input: root = [1,null,2,null,3,null,4,null,5], targetSum = 3
// Output: 2


// Constraints:

// The number of nodes in the tree is in the range [0, 1000].
// -109 <= Node.val <= 109
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

// finding maximum sum of whole path
    void  maxPathSum(Node* &root, int &target, int &ans, long long sum){
      
       // base case
       if(root == NULL){
           return;
       }
       
       // include curr node
       sum += root->data;

       // check cum
       if(sum == target){
           ans++;
       }
       
      
       // join with left
       maxPathSum(root->left, target, ans,sum);

       // join with right
       maxPathSum(root->right,target,ans,sum);


    }

    // finding totoal number of paths that exist
    void findPathSum(Node* &root, int &target, int &ans){
            
            // base case
            if(root == NULL){
                return;
            }

            // step A : include curr Node
            long long sum = root->data;

            // step B : check curr Node
            if(sum == target){
                ans++;
            }
             
            // step C: join sum with left tree
            maxPathSum(root->left, target,ans,sum);

            // step D : join sum with right tree
            maxPathSum(root->right, target,ans,sum);
           
           // step E : may be path exist in left side
           findPathSum(root->left, target,ans);

           // step F : may be path exist in right side
           findPathSum(root->right, target,ans);
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
      int ans =0;
        
      // find total number of paths
        findPathSum(root,target,ans);

      cout<<"Total number of path exist are : "<< ans<<endl;

    return 0;
}