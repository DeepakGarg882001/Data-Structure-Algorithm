// Create a N-Ary Tree
// You have to create a tree which can have atmost N childs at each node

#include<iostream>
#include<queue>
#include<vector>
using namespace std;

// create a Node of Tree
class Node{
      
      public:

      // store data
      int data;

      // store address of children in array
      vector<Node*> child;


      // data as Parameter
      Node( int data ){
        this->data = data;
      }

      // functions
      void joinChild( Node* childNode ){
        child.push_back(childNode);
      }

      // get number of childs
      int totalChild(){
        return child.size();
      }

      // get particular child
      Node* getChild(int index){
        return child[index];
      }

};


// building tree
Node* buildingTree(){
       
       // take data 
       int data;
       cin>> data;

       // create new node
       Node* temp = new Node(data);


       // create child nodes
       int isChildRequired;
       cout<<"Do you want to add childNode at Node "<<data<<"  : ";
       cin >>isChildRequired;

          while( isChildRequired != -1){
             // toh child create kro
             cout<<"Enter the value of child at Node "<<data<<" : ";
             temp->joinChild( buildingTree() ) ;

             // ask again
             cout<<"Do you want to add childNode at Node "<<data<<"  : ";
             cin >>isChildRequired;
           }
       
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
               
               for(int i=0; i<temp->totalChild(); i++){
                q.push(temp->getChild(i));
               }
             
          }
          else{
              if(q.empty()!=true){
                q.push(NULL);
              }
          }

     }


}

int main(){
     
     cout<< "Enter the value of RootNode : ";
     

     Node* root = buildingTree();

      // print data
      printLevelOrdered(root);

     return 0;
}