// create a  Circular single Linked list of given Length N.
// take all the data of Linked List from user and print the Linked List.

#include<iostream>
using namespace std;

// create a Circular Single Linked list
class Node{
       
       public:

       // store data
       int data;
       //store next pointer
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

void printLinkedList( Node* head ){

    // store current Node
    Node* currNode = head;

    // store linked list count
    int count =0;

    // run a loop
    while( currNode!=head || count==0 ){
         // validation
         if(currNode==head){
            count++;
          }
        
        // print Node value
        cout<< currNode->data <<"  ";

        // update currnode
        currNode = currNode->next;
    }

    cout<<endl;
}

void takeInput( Node* &head, int &size ){

    // store prevNode node
    Node* pervNode = NULL;

    // run a loop 
    for( int index=1; index<=size; index++ ){
         
         // take data from user
         int data;
         cout<<"Enter the value of Node "<<index<<" : ";
         cin>> data;
          
         // agar first node ho toh
         if(index==1){
             head->data = data; // updating first Node data
             pervNode = head;   // updating prevNode
             head->next = head; // making node circular
         }
         else{
             
             // create a New node
             Node* temp = new Node(data);

             // link this node to first node in circular way
             temp->next = head;

             // join this node with prevNode
             pervNode->next = temp;
             
             // update pevNode
             pervNode = temp;
         }

    }
}


int main(){
      
      //store length
      int size;
      cout<<"Enter the lenth of Linked List : ";
      cin>> size;

      // create a new Empty Node
      Node* head = new Node();

      // take input from user
      takeInput(head,size);
     
      // print Linked List
      printLinkedList(head);

      return 0;
}