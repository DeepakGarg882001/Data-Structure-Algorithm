// You have a Circular Double Linked List of any length
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
         // store prev node address
         Node* prev;

         // defalut constructor
         Node(){
            this->data =0;
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
          
          // store ending node
          Node* endNode = head->prev;
           
          // store currnode
          Node* currNode = head;          
       

          // run a loop
          for(int index=1; index<=length; index++ ){
            
             // agar postion first ho toh
             if(position<=1 ){
                 // create a new Node
                 Node* temp = new Node(value);

                 // join this in the left
                 temp->next = head;
                 temp->prev = endNode;

                 endNode->next = temp;
                 // update prevNode
                 head->prev = temp;
                 
                 // update head
                 head = temp;
                 
                 return;
             }

             // agar position last mai ho toh
             if(position>length){
                
                // create a new node
                Node* temp =new Node(value);

                // join in circular way
                temp->next = head;
                temp->prev = endNode;

                head->prev = temp;
                endNode->next = temp;

                return;
             }
             
             // agar middle mai ho toh
              if(position == index){

                // create a New Node
                Node* temp = new Node(value);
                 
                // join this with prevNode
                temp->next = currNode;
                temp->prev = currNode->prev;

                currNode->prev->next = temp;
                currNode->prev = temp;
                return;                 
              }
               

             // if nothing
             currNode = currNode->next;
             
          }
      
      
}

void takeInput( Node* currNode, int &size){

    // store starting Node
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
            
             currNode->next = temp;  // joining with prev node
             temp->next = startNode;      // making it circular
             startNode->prev = temp;
             temp->prev = currNode;

             currNode = temp;
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