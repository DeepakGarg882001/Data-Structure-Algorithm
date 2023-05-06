// Create a Queue using Linked List
// do not use STL


#include<iostream>
using namespace std;

// create a Noe
class Node{
      
      public:

      // store data
      int data;
      // store next node address
      Node* next;

      // default constructor
      Node(){
        this->data = 0;
        this->next = NULL;
      }

      // data as parameter
      Node( int data ){
        this->data = data;
        this->next = NULL;
      }

};

// create queue
class Queue{
       
       public:

       // store size
       int size;
       // store front 
       Node* front;
       // store back
       Node* back;
       // count node
       int nodeCount=0;

       // default constructor
       Queue(){
            this->size = 0;
            this->front = NULL;
            this->back = NULL;
       }
       
       // size as parameter
       Queue( int size){
        this->size = size;
        this->front = NULL;
        this->back = NULL;
       }

       // functions
      
       // insert element
       void push( int data ){
         // step A : is space available
         if(nodeCount>=size){
            cout<< "Queue overflow"<<endl;
            return ;
         }
         else{
            // insert the element
            Node* temp = new Node(data);
   
            // agar ye first element hai toh
            if(back==NULL){
                this->front = temp;
                this->back = temp;
            }
            else{
               this->back->next = temp;
               this->back = temp;
            }
             
             nodeCount++;
         }
       }

       // remove element
       void pop(){
            // stepA : is element available or not
            if(front==NULL){
                cout<< "Queue underflow"<<endl;
                return;
            }
            else{
                Node *temp = front;
                front = front->next;

                temp->next = NULL;
                delete temp;

                nodeCount--;
            }

       }


       // check is queue empty or not
       bool empty(){
         if(front==NULL){
            return true;
         }else{
            return false;
         }
       }     
   
       // get front element
       int getFront(){
          // step A: is element available or not
          if(front==NULL){
            cout<< "Queue is Empty"<<endl;
            return -1;
          }else{
            return front->data;
          }
       }

       // get size of queue
       int getSize(){
        return nodeCount;
       }

};

// printing the queue
void printQueue(Queue* &q){

    while(q->empty()!=true){
         cout<< q->getFront()<<"  ";
         q->pop();
    }

    cout<< endl;
}  

// taking input from user
void takeInput(Queue* &q, int &size){
    for( int index=1; index<=size; index++){
        int data;
        cout<<"Enter the value of Node "<<index<<" : ";
        cin >> data;

        q->push(data);
    }
}


int main(){
     
     // store size of queue
     int size;
     cout<<"Enter the size of Queue : ";
     cin >> size;
    
     // create a Empty Queue
     Queue* q = new Queue(size);

     // take input from user
     takeInput( q, size);

     // print queue
     printQueue(q);
      
     return 0;
}