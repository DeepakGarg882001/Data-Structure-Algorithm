// Create a Stack without using STL

// Approch 1: using Linked List


#include<iostream>
using namespace std;

// create a Node of Linked list
class Node{
     public:

     // store data;
     int data;
     // store next node address
     Node* next;
     // store prev node address
     Node* prev;

     // default constructor
     Node(){
        this->data = 0;
        this->next = NULL;
        this->prev = NULL;
     }

     // data as parameter
     Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
     }


};

//create a stack
class Stack{
     
     public:

     
     int size;
     // store top
     Node* top;

     // default constructor
     Stack(){
        this->size = 0;
        this->top = NULL;
     }


     // functions

     void push( int data ){
          
          // create a new node
          Node* temp = new Node(data);

          // join next and prev pointer
          if(top!=NULL){
             
             top->next = temp;
             temp->prev = top;
          }

          top = temp;
          size++;

     }


     void pop(){
        
         // check is element present or not
         if(top==NULL){
            cout<<"Stack underflow, can't delete"<<endl;
            return;
         }

         // store in temp pointer
         Node* temp = top;

         top= top->prev;
         if(top!=NULL){
         top->next = NULL;
         }

         // delete node
         temp->prev = NULL;
         
         delete temp;
         size--;

     }

     int getTop(){
             
             if(top!=NULL){
                return top->data;
             }
             else{
                cout<<"Stack is Empty"<<endl;
                return -1;
             }
        

     }

     int getSize(){
        return size;
     }
    
     bool isEmpty(){
        if(top==NULL){
            return true;
        }else{
            return false;
        }
     }

};

// printing the stack data
void printStack( Stack* &s ){
     
     while( s->isEmpty()==false){

        cout<< s->getTop()<<"   ";
        s->pop();
     }

     cout << endl;
     

}

// taking input from user
void takeInput(Stack* &s, int &length){
      
      for(int index=1; index<=length; index++){
        // take data
        int data;
        cout<<"Enter the value of Node" <<index<<" : ";
        cin>> data;

        // insert this data
        s->push(data);
      }
    
    cout<<endl;
}

int main(){
     
     // create a stack
     Stack* s = new Stack();

     // store length
     int length;
     cout<<"Enter the length of stack : ";
     cin>> length;

     // take input from user
     takeInput(s,length);

     // print stack
     printStack(s);

     return 0;
}