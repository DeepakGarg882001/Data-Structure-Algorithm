// Leetcode Ques : 101

// Given the root of a binary tree, 
// check whether it is a mirror of itself (i.e., symmetric around its center).

 

// Example 1:


// Input: root = [1,2,2,3,4,4,3]
// Output: true
// Example 2:


// Input: root = [1,2,2,null,3,null,3]
// Output: false
 

// Constraints:

// The number of nodes in the tree is in the range [1, 1000].
// -100 <= Node.val <= 100
 

// Follow up: Could you solve it both recursively and iteratively?




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

bool isMirror(Node* &root1, Node* &root2){

    // base case
    if(root1==NULL && root2 ==NULL){
        return true;
    }

    if( root1==NULL || root2 ==NULL ){
        return false;
    }


    // step A: compair curr Node
    if(root1->data != root2->data){
       return false;
    }
   
    // step B : check in Left
    bool ans1 = isMirror(root1->left, root2->right);

    // step C : check in right
    bool ans2 = isMirror(root1->right, root2->left);

    return ans1 & ans2;
}



int main(){
      
      // create first Node
      cout<<"Enter the value of RootNode1 : ";

      Node* root1 = buildingTree();
    
     
      // check is these trees are identical or not
      if(isMirror(root1,root1)){
        cout << "Yes, these are Mirror"<<endl;
      }
      else{
        cout <<"NO, These are Not Mirror"<<endl;
      }


      return 0;

}