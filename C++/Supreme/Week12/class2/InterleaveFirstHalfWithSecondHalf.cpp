// You have given a UnSorted Queue of any size N.
// Now divide the whole Queue into Two Parts and Then Merge them InterLeave.

// eg :  Input :  1 2 3 4
//      Output : 1 3 2 4

// eg:   Input : 11 12 13 14 15 16 17 18 19 20
//      Output : 11 16 12 17 13 18 14 19 15 20

// eg:   Input : 1 5 9 4 7 2 8
//      Output : 1 7 5 2 9 8 4


#include<iostream>
using namespace std;

// create a node
class Node{
      
      public:

      // store data
      int data;
      // store next node address
      Node* next;


      // data as parameter
      Node(int data){
        this->data = data;
        this->next = NULL;
      }


};

// create a queue
class Queue{
     
     public:

     // store front
     Node* front;
     // store back
     Node* back;
     // store size
     int size;
     

     // default constructor
     Queue(){
        this->front = NULL;
        this->back = NULL;
        this->size = 0;
     }

    
    // functions

    // insert element
    void push(int data){
          
          // create a new node
          Node* temp = new Node(data);
          
          // check front and back
          if(front == NULL && back == NULL){
            front = temp;
            back = temp;
          }
          else{
          // join this with back
           back->next = temp;
          }
         
         size++;
    }
    

    // remove element
    void pop(){
          
          // check is element persent or not
          if(front == NULL && back==NULL){
            cout<<"Queue Underflow"<<endl;
            return;
          }

         // store front
         Node* temp = front;
         
          front= front->next;

         temp->next = NULL;
          
          size--;

         delete temp;

    }

    // get front element
    int getFront(){
         if(front == NULL){
            cout << "Queue is empty"<<endl;
            return -1;
         }
         else{
            return front->data;
         }

    }

    //get size
    int getSize(){
        return size;
    }
    
    // isEmpty
    bool isEmpty(){
        if(size == 0){
            return true;
        }
        else{
            return false;
        }
    }
 
};

// taking input from user
void takeInput(Queue* &q, int &size){
       
       for(int index =1; index<=size; index++){
             // take data
             int data;
             cout<<"Enter the value of Node "<<index<<" : ";
             cin >> data;

             q->push(data);

       }

       cout<<endl;
   

}

int main(){
      
      // create a Empty Queue
      Queue* q = new Queue();
     
     // length of queue
     int size;
     cout<<"Enter the size of Queue : ";
     cin >> size;

     // takeInput from user
     takeInput(q,size);
     
     
}