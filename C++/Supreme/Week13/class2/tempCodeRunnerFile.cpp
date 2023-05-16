

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

// finding paths
void findPath( Node* &root, int &target, int sum, int &ans){
     
     // base case
     if(root == NULL ){
        return;
     }

     // step A : add curr node with sum
     sum += root->data;

     // step B: compair sum with target
     if(sum == target){
        ans++;
     }

     // step C: join sum with left node
     findPath(root->left, target,sum,ans);

     // step D : join sum with right node
     findPath(root->right, target,sum,ans);

     // step E : path exist in left
     findPath(root->left, target,0,ans);

     // step F : path exist in right
     findPath(root->right, target, 0, ans);

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
        
      // find total paths
      findPath(root, target, 0,ans);

      cout<<"Total number of path exist are : "<< ans<<endl;

    return 0;
}