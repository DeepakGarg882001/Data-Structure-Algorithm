// create a DataType of Double linked list

#include<iostream>
using namespace std;

class Node{
         
         public:

        // create LL data
        int data;

        // store next Node address
        Node* next;
        // store prevNode address
        Node* prev;
        // default Constructure
        Node(){
            this->data=0;
            this->next = NULL;
            this->prev = NULL;
        }
       
        // data constructure
        Node( int data ){
            this->data = data;
            this->next = NULL;
            this->prev = NULL;
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