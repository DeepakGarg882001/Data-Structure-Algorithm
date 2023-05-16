// Leetcode Ques : 113

// Given the root of a binary tree and an integer targetSum,
// return all root-to-leaf paths where the sum of the node values in the path equals targetSum.
// Each path should be returned as a list of the node values, not node references.

// A root-to-leaf path is a path starting from the root and ending at any leaf node.
// A leaf is a node with no children.

// Example 1:

// Input: root = [5,4,8,11,null,13,4,7,2,null,null,5,1], targetSum = 22
// Output: [[5,4,11,2],[5,8,4,5]]
// Explanation: There are two paths whose sum equals targetSum:
// 5 + 4 + 11 + 2 = 22
// 5 + 8 + 4 + 5 = 22
// Example 2:

// Input: root = [1,2,3], targetSum = 5
// Output: []
// Example 3:

// Input: root = [1,2], targetSum = 0
// Output: []

// Constraints:

// The number of nodes in the tree is in the range [0, 5000].
// -1000 <= Node.val <= 1000
// -1000 <= targetSum <= 1000




#include<iostream>
#include<vector>
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

// checking path sum
void  pathSum( Node* &root, vector< vector<int>> &ans, vector<int> &path, int &target){
        
        // add curr node 
        path.push_back(root->data);
        
        // update target value
        target = target - root->data;

        // is curr Node last node
        if(root->left == NULL && root->right == NULL && target == 0){
            ans.push_back(path);
            // backtrack
            target = target + root->data;
            path.pop_back();
            return;
        }

        // check left node
        if(root->left !=NULL){
            pathSum(root->left,ans,path,target);
        }

        // check right node
        if(root->right !=NULL){
            pathSum(root->right, ans, path,target);
        }


        // backtrack
        path.pop_back();
        target += root->data;


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
      vector< vector<int> > ans;
      
      // store path 
      vector<int> path;

      // check path sum
      pathSum(root, ans, path, target);
       
       cout << "Printing ans"<<endl;
      //print ans
      for(int i = 0; i<ans.size(); i++){
           
           for(int j =0; j<ans[0].size(); j++){
            cout<< ans[i][j]<< "  ";
           }
           cout << endl;
      }

      return 0;
}