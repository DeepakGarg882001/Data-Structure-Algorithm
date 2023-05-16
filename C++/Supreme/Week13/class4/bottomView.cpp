// GFG : Bottom View of Binary Tree

// Given a binary tree, print the bottom view from left to right.
// A node is included in bottom view if it can be seen when we look at the tree from bottom.

//                       20
//                     /    \
//                   8       22
//                 /   \        \
//               5      3       25
//                     /   \      
//                   10    14

// For the above tree, the bottom view is 5 10 3 14 25.
// If there are multiple bottom-most nodes for a horizontal distance from root, then print the later one in level traversal. For example, in the below diagram, 3 and 4 are both the bottommost nodes at horizontal distance 0, we need to print 4.

//                       20
//                     /    \
//                   8       22
//                 /   \     /   \
//               5      3 4     25
//                      /    \      
//                  10       14

// For the above tree the output should be 5 10 4 14 25.

// Note: The Input/Output format and Example given are used for the system's internal purpose, and should be used by a user for Expected Output only. As it is a function problem, hence a user should not read any input from the stdin/console. The task is to complete the function specified, and not to write the full code.
 

// Example 1:

// Input:
//        1
//      /   \
//     3     2
// Output: 3 1 2
// Explanation:
// First case represents a tree with 3 nodes
// and 2 edges where root is 1, left child of
// 1 is 3 and right child of 1 is 2.

// Thus nodes of the binary tree will be
// printed as such 3 1 2.
// Example 2:

// Input:
//          10
//        /    \
//       20    30
//      /  \
//     40   60
// Output: 40 20 60 30
// Your Task:
// This is a functional problem, you don't need to care about input, just complete the function bottomView() which takes the root node of the tree as input and returns an array containing the bottom view of the given tree.

// Expected Time Complexity: O(N*logN).
// Expected Auxiliary Space: O(N).

// Constraints:
// 1 <= Number of nodes <= 105
// 1 <= Data of a node <= 105


#include<iostream>
#include<vector>
using namespace std;

// creatin node of tree
class Node{
        
        public:
        // store data
        int data;
        // store left child 
        Node* left;
        // store right child
        Node* right;


        // data as parameter
        Node(int data){
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

         // create a new node
         Node* temp = new Node(data);

         // create its left child
         cout<<"Enter the value of left Child at Node "<<data<<" : ";
         temp->left = buildingTree();

         // create its right child
         cout <<"Enter the value of right child at Node "<<data<<" : ";
         temp->right = buildingTree();

         return temp;


}

// finding bottom view of tree
void treeBottomView(Node* &root,  vector<int> &leftColValues , vector<int> &rightColValues , int colNum){
            
            // base case
            if(root == NULL){
                return;
            }

            // add root value as bottom view
            if(colNum >=0 ){
                // add in rightCol array
                if(rightColValues.size()==colNum){
                    rightColValues.push_back(root->data);
                }
                else{
                    rightColValues[colNum] = root->data;
                }
            }
            else{
                // add in leftCol array
                if(leftColValues.size() == abs(colNum) ){
                    leftColValues.push_back(root->data);
                }
                else{
                    leftColValues[abs(colNum)] = root->data;
                }
            }

            // move in left subtree
             treeBottomView( root->left , leftColValues , rightColValues ,colNum-1);

            // move in right subTree
             treeBottomView( root->right , leftColValues , rightColValues ,colNum+1);
        
 
}

int main(){

      // take root node value
      cout <<"Enter the value of RootNode : ";

    
      // create a Empty Root Node
      Node* root = buildingTree();

      // store ans
      vector<int> ans;
      
      // store leftCol node values
      vector<int> leftColValues(1);

      // store rightCol node values
      vector<int> rightColValues;

      // find bottom view 
      treeBottomView( root , leftColValues , rightColValues ,0);
     
      
      // add data into ans vector
      int index = leftColValues.size()-1;
      while(index>0){
           
           ans.push_back(leftColValues[index]);
           index--;
      }

      // store index
       index = 0;
      while(index<rightColValues.size()){
           
           ans.push_back( rightColValues[index]);
           index++;
      }
    
      // print bottom view
      cout<<"Printing the bottom view of tree"<<endl;
      for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<"  ";
      } 

      cout<<endl;
      
      return 0;
}