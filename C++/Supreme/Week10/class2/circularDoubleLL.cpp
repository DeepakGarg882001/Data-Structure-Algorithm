// Create a DataType of Circular Double Linked list


#include<iostream>
using namespace std;

// create a Node
class Node{
       
       public:

       // store data
       int data;
       // prevNode
       Node* prev;
       // next node
       Node* next;
       
       // defalut constructor
       Node(){
        this->data= 0;
        this->prev = NULL;
        this->next = NULL;
       }

       // data as parameter
        Node( int data ){
        this->data= data;
        this->prev = NULL;
        this->next = NULL;
       }
};

int main(){
     
     // create a circular Double linked list
     Node* head = new Node();

     // update data
     head->data = 5;
     // update prev Pointer
     head->prev = head;
     // update next Pointer 
     head->next = head;

     // print
     cout<< head->data<<endl;

     return 0;
}