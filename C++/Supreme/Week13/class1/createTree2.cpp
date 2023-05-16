// You have to create a Tree using Level order Traversal concept
// You have given inputs in the from of array, now you have to create its tree


#include<iostream>
#include<vector>
using namespace std;

// creating node of tree
class Node{
       
       public:

       // store data
       int data;
       // store left child
       Node* left;
       // store right child
       Node* right;

       // data as parameter
       Node( int data ){
         this->data = data;
         this->left = NULL;
         this->right = NULL;
       }

};

// taking input from user
void takeInput( vector<int> &arr){
         
         for(int index=0; index<arr.size(); index++){
            cin>> arr[index];
         }

}

// building the tree
Node* buildingLevelTree( vector<int> &arr, int  index){


}

int main(){
    
    // store size 
    int size;
    cout<<"Enter the size of Array : ";
    cin >> size;

    // create a array
    vector<int> arr(size);
     
    // takeInput
    takeInput(arr);
    
    // build tree as level wise
    Node* root = buildingLevelTree(arr,0);

    return 0;
}
