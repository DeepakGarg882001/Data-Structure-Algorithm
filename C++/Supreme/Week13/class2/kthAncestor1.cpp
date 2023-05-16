// GFG : Kth Ancestor in a Tree

// Given a binary tree of size  N, a node, and a positive integer k., 
// Your task is to complete the function kthAncestor(), the function should return the kth ancestor of the given node in the binary tree. 
// If there does not exist any such ancestor then return -1.
// Note: It is guaranteed that the node exists in the tree.


// Example 1:



// Input:
//      K = 2
//      Node = 4
// Output: 1
// Explanation:
// Since, K is 2 and node is 4, so we
// first need to locate the node and
// look k times its ancestors.
// Here in this Case node 4 has 1 as his
// 2nd Ancestor aka the Root of the tree.
 

// Example 2:

// Input:
// k=1 
// node=3
//       1
//     /   \
//     2     3

// Output:
// 1
// Explanation:
// K=1 and node=3 ,Kth ancestor of node 3 is 1.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)

 

// Constraints:
// 1<=N<=104
// 1<= K <= 100



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

// find the kth ancestor
bool kthAncestor( Node* &root, int &k, int &value, int &ans ){
      
      //base case
      if(root == NULL){
        return false;
      }

      // processing
      
      // step A : check curr Node
      if(root->data == value ){
        return true;
      }

      // step B : check in left
      bool ans1 = kthAncestor(root->left, k, value, ans);

      // step C : check in right
      bool ans2 = kthAncestor(root->right, k, value, ans);
     
      // step D : check both ans1 and ans2
      bool output = ans1 | ans2;

      if( output ){
         k--;
      }
     
      // step E : check k value
      if( k == 0 && output==true){
        ans=  root->data;
      }


      return output;


}

int  main(){
       
       // create a tree
       cout<<"Enter the value of Root Node : ";

       Node* root = buildingTree();


       // store value of k
       int k;
       cout<<"Enter the value of k : ";
       cin >> k;

       //store value of node
       int value;
       cout<<"Enter the value of Node : ";
       cin>> value;

       // store ans
       int ans = -1;

       // find kth ancestor
       bool ancestor = kthAncestor(root, k, value, ans);

       cout<<"Kth ancestor of Node "<<value<<" is : "<<ans<<endl;

       return 0;
}