// You have given two Binay trees
// Now check that, is these two trees are Mirror of each other or not


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
    
      // create second Node
      cout<<"Enter the value of RootNode2 : ";

      Node* root2 = buildingTree();
    
     
      // check is these trees are Mirror or not
      if(isMirror(root1,root2)){
        cout << "Yes, these are Mirror"<<endl;
      }
      else{
        cout <<"NO, These are Not Mirror"<<endl;
      }


      return 0;

}