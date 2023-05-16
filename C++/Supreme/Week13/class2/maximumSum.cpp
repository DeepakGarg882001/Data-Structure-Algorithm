// Leecode Ques : 124

// A path in a binary tree is a sequence of nodes where each pair of adjacent nodes in the sequence has an edge connecting them.
// A node can only appear in the sequence at most once. Note that the path does not need to pass through the root.

// The path sum of a path is the sum of the node's values in the path.

// Given the root of a binary tree, return the maximum path sum of any non-empty path.

// Example 1:

// Input: root = [1,2,3]
// Output: 6
// Explanation: The optimal path is 2 -> 1 -> 3 with a path sum of 2 + 1 + 3 = 6.
// Example 2:

// Input: root = [-10,9,20,null,null,15,7]
// Output: 42
// Explanation: The optimal path is 15 -> 20 -> 7 with a path sum of 15 + 20 + 7 = 42.

// Constraints:

// The number of nodes in the tree is in the range [1, 3 * 104].
// -1000 <= Node.val <= 1000



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

// finding max path sum
int findMaxPathSum( Node* &root){
        
        // base case
        if(root == NULL ){
            return INT_MIN;
        }

        // step A : find max Sum of left part
        int leftSum = findMaxPathSum(root->left);

        // step B : find max sum of right part
        int rightSum = findMaxPathSum(root->right);

        // step C : include curr Node data
        int nodeSum = root->data;
         
        // step D : include curr node with right only
        int nodeWithRight = root->data ;

        // step E : include curr node with left only
        int nodeWithLeft = root->data ;

        // step F : check left sum
        if(leftSum == INT_MIN){
            nodeSum += 0;
        }
        else{
            nodeSum += leftSum;
            nodeWithLeft += leftSum;
        }

        // step G : check right sum
        if(rightSum == INT_MIN){
            nodeSum += 0;
        }
        else{
            nodeSum += rightSum;
            nodeWithRight += rightSum;
        }

        

        // return max of these;
        return max(leftSum, max(rightSum, max(nodeSum, max(nodeWithLeft, nodeWithRight))));


}

int main(){

      // create a tree
       cout<<"Enter the value of Root Node : ";

       Node* root = buildingTree();

       // find max path sum
       int sum = findMaxPathSum(root);

       cout <<"Maximum Path sum of tree is : "<<sum<<endl;

       return 0;
}


  