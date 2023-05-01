// You have a Circular Single Linked List of any length
// Insert A Element at any position in between given Linked List

// eg:  LL = 1 2 3 4 5, 
// insert element = 8, position= 2

// output: LL = 1 8 2 3 4 5


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

void printLinkedList(Node *head){
      
      // store current Node
      Node* currNode = head;

      bool isFirstPrinted = false;

      // run a loop
      while( currNode !=head || isFirstPrinted ==false){
        // validation
        if(currNode==head){
            isFirstPrinted = true;
        }
        // print data
        cout<< currNode->data << "  ";
        // update current data
        currNode = currNode->next;
      }
       
        cout<< endl;
}


void insertElement( Node* &head, int &position, int &value , int &length ){
          
          // store prevNode
          Node* prevNode = NULL;
           
          // store currnode
          Node* currNode = head;          
          // is inserted element
          bool isInserted = false;

          // run a loop
          for(int index=1; index<=length; index++ ){
            
             // agar postion first ho toh
             if(position<=1 && isInserted ==false){
                 // create a new Node
                 Node* temp = new Node(value);

                 // join this in the left
                 temp->next = head;

                 // update prevNode
                 prevNode = head;
                 
                 // update head
                 head = temp;
                 
                 isInserted = true;
                 continue;
             }

             // agar position last mai ho toh
             if(position>length && index==length){
                
                // create a new node
                Node* temp =new Node(value);

                // join in circular way
                temp->next = head;

                // join with currNode
                currNode->next = temp;
                 
                 return;
             }
             
             // agar middle mai ho toh
              if(position == index){

                // create a New Node
                Node* temp = new Node(value);
                 
                // join this with prevNode
                prevNode->next = temp;

                // join this with currNode
                temp->next = currNode;

                return;                 
              }
               

             // if nothing
             prevNode = currNode;
             currNode = currNode->next;
             
          }
      
       // agar position <=1 hai toh isko circular bi kro
      
       currNode->next = head;
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
      int length;
      cout<<"Enter the length of Linked List : ";
      cin>> length;

      // create a new Empty node
      Node* head = new Node();
      
      // take input from user
      takeInput(head, length);
      
      // store position of new node
      int position;
      cout<<"Enter the value of Position at which you want to insert Element : ";
      cin>> position;

      // store the value of new node
      int value;
      cout<<"Enter the value of New Element : ";
      cin>> value;

      // insert new element in linked list
      insertElement(head, position,value,length);
       
      // print Linked List
      printLinkedList(head);

      return 0;
}