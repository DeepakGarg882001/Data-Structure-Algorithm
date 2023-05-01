// You are Given a Circular Double Linked List of any length.
// Find length of Circular Double Linked List


#include<iostream>
using namespace std;

// create a Node
class Node{
         public:

         // store data
         int data;
         // store next node pointer
         Node* next;
         // store prev node address
         Node* prev;

         // defalut constructor
         Node(){
            this->data = 0;
            this->next = NULL;
            this->prev = NULL;
         }
         
         // data as parameter
         Node( int data ){
            this->data = data;
            this->next = NULL;
            this->prev = NULL;
         }
};

void findLen(Node* head,int &length){
      // store current Node
      Node* currNode = head;
       
      //  is first node iterated
      bool isFirst = false;

      // run a loop
      while( currNode!=head || isFirst == false){
         // validation
         if(currNode == head){
            isFirst = true;
         }
         // update length
         length++;
         // upate currNode
         currNode = currNode->next;
      }
      


}

void takeInput( Node* currNode, int &size){
      
      // store staring node
      Node* startNode = currNode;
   
     // run a loop
     for( int index=1; index<=size; index++){
          // take data from user
          int data;
          cout<<"Enter the value of Node"<<index<<" : ";
          cin>>data;

          // agar first node h toh
          if(index==1){
              currNode->data = data;
              currNode->next = currNode;
              currNode->prev = currNode;
              
          }
          else{
             // create a new node
             Node* temp = new Node(data);
            
             currNode->next = temp;     // joining with curr node
             temp->next = startNode;    // making it circular
             temp->prev = currNode;     // joining with prev node
            
             startNode->prev = temp;
             
             // update currNode
             currNode = temp;
          }
     }
}

int main(){
      
      // store size
      int size;
      cout<<"Enter the size of Linked List : ";
      cin>> size;

      // create a new Empty node
      Node* head = new Node();
      
      // take input from user
      takeInput(head, size);

      // store length of linked list
      int length = 0;

      // find length of linked list
      findLen(head,length);
      
      // print ans
      cout<<"length of Linked List is : "<<length<<endl;

      return 0;
} 