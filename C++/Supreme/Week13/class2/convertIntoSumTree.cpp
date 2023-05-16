// GFG : Transform to Sum Tree

// Given a Binary Tree of size N , where each node can have positive or negative values.
// Convert this to a tree where value of each node will be the sum of the values of all the nodes in left and right sub trees of the original tree.
// The values of leaf nodes are changed to 0.
// Note: You have to modify the given tree in-place.


// Example 1:

// Input:
//              10
//           /      \
//         -2        6
//        /   \     /  \
//       8    -4   7    5
// Output:
//             20
//           /     \
//         4        12
//        /  \     /  \
//      0     0   0    0
// Explanation:
//            (4-2+12+6)
//           /           \
//       (8-4)          (7+5)
//        /   \         /  \
//       0     0       0    0
// Example 2:

// Input:
//             10
//         /        \
//       -2           6
//      /   \        /  \
//     8    -4      7     5
//     / \   / \    / \   / \
//   2  -2 3  -5  9  -8 2   8
// Output:
//             29
//         /        \
//        2          23
//      /  \        /  \
//     0   -2      1    10
//    / \  / \    / \   / \
//    0  0 0   0  0   0 0   0
// Explanation:
//                  (-2+6+8-4+7+5+2-2+3-5+9-8+2+8)
//                /                                \
//           (8-4+2-2+3-5)                    (7+5+9-8+2+8)
//           /      \                            /      \       
//        (2-2)   (3-5)                        (9-8)    (2+8)
//         /     \  /    \                      /     \   /     \
//        0      0 0      0                   0        0 0       0

// Your Task: 
// You dont need to read input or print anything.
// Complete the function toSumTree() which takes root node as input parameter and modifies the given tree in-place.

// Note: If you click on Compile and Test the output will be the in-order traversal of the modified tree.


// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(height of tree)
 

// Constraints:
// 1 ≤ N ≤ 104



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


// transform into sum tree
int transformSumTree(Node* &root){

    // base case
    if(root == NULL){
        return 0;
    }

    // processing

    // step A : transform its left part
    int ans1 = transformSumTree(root->left);

    // step B : transform its right part
    int ans2 = transformSumTree(root->right);

    // store curr node data
    int currNodeValue = root->data;

    // update curr node data
    root->data = ans1 + ans2;

    // return answer
    return currNodeValue + root->data;




}



int main(){
      
      cout<<"Enter the value of Root Node : ";

      Node* root = buildingTree();

      // print tree before transform
      cout<<"Before transform "<<endl;

      printLevelOrdered(root);    
    
      // transform to sum tree
      int temp = transformSumTree(root);
       
      // print after transform
      cout<<"After transform"<<endl;

      printLevelOrdered(root);

    return 0;
}