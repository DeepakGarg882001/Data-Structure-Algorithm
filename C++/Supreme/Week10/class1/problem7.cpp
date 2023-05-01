// create a Circular single Linked List for size n.
// take data from user and insert it into nodes.
// You have to insert in this a way, take the first Input from user and put it into last Empty Node

// eg: n=4, 
// input: 1  2  3  4
// output : 4  3  2  1
// explanation: i.e each new node added in left side


#include<iostream>
using namespace std;

// create a circular single Liked list node
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

void takeInput( Node* &head, int &length){
        
        // store ending node
        Node* ending = head;

        // run a loop
        for(int index=1; index<=length; index++ ){
            // take data value from user
            int data;
            cout<<"Enter the value of Node"<<index<<" : ";
            cin>>data;

            // agar first node h toh
            if(index==1){
                head->data = data; // updating data
                head->next = head; // updating next pointer value
            }
            else{
                  
                  // create a new Node
                  Node* temp = new Node(data);

                  // join this node in left side
                  temp->next = head;

                  // join in circular way
                  ending->next = temp;

                  // update prevNode
                  head = temp;
            }
        }


}


int main(){
       
       // store length
       int length;
       cout<<"Enter the length of Linked List : ";
       cin>> length;


       // create a new Empty Node
       Node* head = new Node();
      
       // take Input from user
       takeInput(head, length);
       
       // print linked list
       printLinkedList(head);

       return 0;
}