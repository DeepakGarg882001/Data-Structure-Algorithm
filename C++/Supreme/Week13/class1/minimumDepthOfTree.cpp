// Leetcode Ques : 111

// Given a binary tree, find its minimum depth.

// The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

// Note: A leaf is a node with no children.

 

// Example 1:


// Input: root = [3,9,20,null,null,15,7]
// Output: 2
// Example 2:

// Input: root = [2,null,3,null,4,null,5,null,6]
// Output: 5
 

// Constraints:

// The number of nodes in the tree is in the range [0, 105].
// -1000 <= Node.val <= 1000



#include<iostream>
#include<queue>
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


// printing
void printLevelOrdered(Node* &root){
     
     // track level element in queue
     queue<Node*> q;
     if(root==NULL){
        return ;
     }
     // insert intp q
     q.push(root);
     q.push(NULL);

     while(q.empty()!=true){
          
          // step A : extract front element
          Node* temp = q.front();

          // step B : print data
          if(temp!=NULL){
            cout<< temp->data <<"  ";
          }
          else{
            cout << endl;
          }
          
          // step c: remove front element
          q.pop();

          // step D : insert its child
          if(temp!=NULL){
               
               if(temp->left!= NULL){
                q.push(temp->left);
               }

               if(temp->right!=NULL){
                q.push(temp->right);
               }

          }
          else{
              if(q.empty()!=true){
                q.push(NULL);
              }
          }

     }


}

// finding min height of tree
int findMinHeight(Node* &root){
    
    // base case
    if(root==NULL){
      return 0;
    }

    // processing

         //step A : kya toh min Depth left mai hai
         int leftCount = findMinHeight(root->left);

         //step B : kya toh min Depth right mai Hai
         int rightCount = findMinHeight(root->right);

         // step C : store depth count
         int count = 0;
          
         // step D: find MIN or MAX
         if( leftCount!=0 && rightCount!=0 ){
             // find min of these
             count = min(leftCount, rightCount);
         } 
         else{
             // find max of these
             count = max(leftCount, rightCount);
         }

    // step E : include curr Node
    return count +1 ;

}


int main(){
      
      cout<<"Enter the value of Root Node : ";

      Node* root = buildingTree();

      // print as Level Ordered Traversal
      printLevelOrdered(root);
      

      // find min height
      int minHeight = findMinHeight(root);

      cout <<"Min Height is : "<<minHeight<<endl;

      return 0;

}

