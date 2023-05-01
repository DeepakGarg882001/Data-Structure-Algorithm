// create a DataType of single linked list

#include<iostream>
using namespace std;

class Node{
         
         public:

        // create LL data
        int data;

        // store next Node address
        Node* next;

        // default Constructure
        Node(){
            this->data=0;
            this->next = NULL;
        }
       
        // data constructure
        Node( int data ){
            this->data= data;
            this->next=NULL;
        }
};

int main(){

    // create a Node
    Node* head = new Node();
    
    // update data
    head->data = 4;

    // print data
    cout<<head->data<<endl;
  return 0;
}