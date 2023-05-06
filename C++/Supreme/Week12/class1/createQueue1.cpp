// create a Queue using Array 
// do not use STL



#include<iostream>
using namespace std;

// create a Queue
class Queue{
     
     public:

     // store data
     int data;
     // store size
     int size;
     // create new array
     int *arr ;
     // store front index
     int front;
     // store rear index
     int rear;


     // default constructor
     Queue(){
        this->data = 0;
        this->front = 0;
        this->rear = 0;
        this->size = 0;
     }     

     // size as parameter
     Queue( int size ){
        this->data = 0;
        this->size = size;
        this->arr = new int[size];
        this->front = 0;
        this->rear = 0;
     }

      
      // functions
      

      // insert element into queue
      void push( int data ){
          
          // stepA : is space available or not
         if( rear>= size ){
            cout<<"Queue is overflow"<<endl;
            return;
         }
         else{
             // stepB : update rear and insert
             this->arr[rear++] = data;
         }          
      }


      // remove element from queue
      void pop(){
         // stepA: is element persent or not
         if(front == rear){
               cout<<"Queue is Underflow"<<endl;
               // update front and rear
               this->front = 0;
               this->rear = 0;

               return;               
         }else{
            // stepB: update front and remove
            
            this->arr[front] = -1;

            front++;
         }
      }
      
      // check is queue Empty or not
      bool isEmpty(){
          if(front==rear){
            return true;
          }
          else{
            return false;
          }
      }

      // get front element
      int getFront(){
          return arr[front];
      } 

      // get size of queue
      int getSize(){
        return rear-front;
      }


};

// printing the queue
void printQueue(Queue* &q){
      
      while (q->isEmpty()!=true){
         cout<< q->getFront() <<"  ";
         q->pop();
      }

      cout<<endl;
      
}

// taking input form user
 void takeInput(Queue* &q, int &size){
       
       for(int index=1; index<=size; index++){
         int data;
         cout<<"Enter the value of Node "<<index<<" : ";
         cin>>data;

         q->push(data);
       }

}


int main(){
     
     // take size of Queue
     int size;
     cout<<"Enter the size of Queue : ";
     cin >> size;


     // create a Empty Queue
    Queue* q = new Queue(size);

    // take input from user
    takeInput(q, size);
    
     cout<< " Now, Size of Queue is : "<< q->getSize()<<endl;
     
     // before printing
     if(q->isEmpty()){
        cout<<"Queue is Empty "<<endl;
     } 
     else{
        cout<< "Queue is Not Empty"<<endl;
     }

    // printing queue
    printQueue(q);

    // after printing
     if(q->isEmpty()){
        cout<<"Queue is Empty "<<endl;
     } 
     else{
        cout<< "Queue is Not Empty"<<endl;
     }
   
    cout<< " Now, Size of Queue is : "<< q->getSize()<<endl;
     
     return 0;
}