// LeetCode Ques : 236

// Given a binary tree, find the lowest common ancestor (LCA) of two given nodes in the tree.

// According to the definition of LCA on Wikipedia:
// “The lowest common ancestor is defined between two nodes p and q as the lowest node in T that has both p and q as descendants (where we allow a node to be a descendant of itself).”

// Example 1:

// Input: root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 1
// Output: 3
// Explanation: The LCA of nodes 5 and 1 is 3.
// Example 2:

// Input: root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 4
// Output: 5
// Explanation: The LCA of nodes 5 and 4 is 5, since a node can be a descendant of itself according to the LCA definition.
// Example 3:

// Input: root = [1,2], p = 1, q = 2
// Output: 1

// Constraints:

// The number of nodes in the tree is in the range [2, 105].
// -109 <= Node.val <= 109
// All Node.val are unique.
// p != q
// p and q will exist in the tree.




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

// finding lowest commom ancestor of p and q
int findLCA(Node* &root, int &p, int &q){
      
      // base case
      if( root == NULL ){
        return INT_MIN;
      }

      // check curr node
      if(root->data == p || root->data == q){
        return root->data;
      }

      // search p,q in left
      int leftAns = findLCA(root->left, p, q);

      // search p,q in right
      int rightAns = findLCA(root->right, p, q);

      // Now we have diff case base on situation

      // case 1
      if( leftAns == INT_MIN || rightAns == INT_MIN ){
        return max(leftAns,rightAns);
      }

      // case 2
      return root->data;


}

int main(){

      // create a tree
       cout<<"Enter the value of Root Node : ";

       Node* root = buildingTree();

       // store p
       int p;
       cout<<"Enter the value of p node : ";
       cin >> p;

       // store q
       int q;
       cout<<"Enter the value of q node : ";
       cin>>q;

       // find there lowest common ancestor
       int LCA = findLCA(root, q , p);
        
       // print ans
       cout << "LCA of p and q is : "<< LCA<<endl;

       return 0;
}



