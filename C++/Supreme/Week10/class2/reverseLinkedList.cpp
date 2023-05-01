// You are given a Linked List of any length
// Reverse the given linked list
// eg:  LL = 1 2 3 4 5 6
// output:  6 5 4 3 2 1


#include<iostream>
using namespace std;

// create a node
class Node{
      
      public:

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

void printList( Node* currNode){
    
    while(currNode!=NULL){
        cout<< currNode->data << "   ";
        currNode = currNode->next;
    }

   cout<<endl;
}

void reverseList( Node* &head){
     
     // store prev Node
     Node* prevNode = NULL;

    // store next node
    Node* nextNode = head->next;

    while(head!=NULL){
          
          // change currNode next value
          head->next = prevNode;
          // update prevNode
          prevNode = head;
          
          if(nextNode==NULL){
            return;
          }
          // update head
          head = nextNode;
          
          // update nextNode
          if(head!=NULL){
          nextNode = head->next;
          }
    }
    
}

void takeInput( Node* head, int &length){
       
       // store prev Node
       Node* prevNode = NULL;

       for(int index=1; index<=length; index++ ){
            // take data from user
            int data;
            cout<<"Enter the value of Node"<<index<<" : ";
            cin>>data;

            // agar first node ho toh
            if(index==1){
              head->data = data;
              prevNode = head;
            }
            else{
                // create new node
                Node* temp = new Node(data);
                prevNode->next = temp;
                prevNode = temp;
             }

       }

 }


int main(){
        
    // store length of linked list
    int length;
    cout<<"Enter the length of Linked List : ";
    cin>> length;

    // create a Empty node
    Node* head = new Node();

    // take input from user
    takeInput(head,length);
     
    // print linked list
    printList(head);

    // reverse the Linked list
    reverseList(head);

    // print linked list
    printList(head);

    return 0;
}