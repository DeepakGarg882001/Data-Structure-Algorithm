// Create a DataType of Circular Single Linked list


#include<iostream>
using namespace std;

// create a Node
class Node{
       
       public:

       // store data
       int data;
     
       // next node
       Node* next;
       
       // defalut constructor
       Node(){
        this->data= 0;
        this->next = NULL;
       }

       // data as parameter
        Node( int data ){
        this->data= data;
        this->next = NULL;
       }
};

int main(){
     
     // create a circular Single linked list
     Node* head = new Node();

     // update data
     head->data = 5;
     
     // update next Pointer 
     head->next = head;

     // print
     cout<< head->data<<endl;

     return 0;
}