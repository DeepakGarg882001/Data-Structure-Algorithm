// You are Given a Circular Single Linked List of any length.
// Find length of Circular Single Linked List


#include<iostream>
using namespace std;

// create a Node
class Node{
         public:

         // store data
         int data;
         // store next node pointer
         Node* next;

         // defalut constructor
         Node(){
            this->data =0;
            this->next = NULL;
         }
         
         // data as parameter
         Node( int data ){
            this->data = data;
            this->next = NULL;
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

void takeInput( Node* head, int &size){
     // store prevNode
     Node* prevNode = NULL;
   
     // run a loop
     for( int index=1; index<=size; index++){
          // take data from user
          int data;
          cout<<"Enter the value of Node"<<index<<" : ";
          cin>>data;

          // agar first node h toh
          if(index==1){
              head->data = data;
              head->next = head;
              prevNode = head;
          }
          else{
             // create a new node
             Node* temp = new Node(data);
            
             prevNode->next = temp;  // joining with prev node
             temp->next = head;      // making it circular
             prevNode = temp;        // updating prevNode
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