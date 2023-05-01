// You have given a Linked List of any type
// Check this given linked list is Circular or Not


#include<iostream>
using namespace std;

// create a Node
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

bool checkIsCircular( Node* head ){

    // edge case
    if(head==NULL){
        cout<<"Linked List is Empty"<<endl;
        return false;
    }
    // if first node is circular
    if(head->next == head){
        return true;
    }
     
    // store next node
    Node* forwardNode = head->next;

    while(forwardNode!=NULL){
        
        if(forwardNode==head){
            return true;
        }

        forwardNode = forwardNode->next;
    }

    return false;

}

int main(){
    
  // create first node
  Node* head = new Node(10);
  Node* second = new Node(20);
  Node* third = new Node(30);
  Node* fourth = new Node(40);
  Node* fifth = new Node(50);
  Node* sixth = new Node(60);
  Node* seventh = new Node(70);
  Node* eight = new Node(80);
   
  // joinin nodes with each other
  head->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next = fifth;
  fifth->next = sixth;
  sixth->next = seventh;
  seventh->next = eight;

  bool isCircular = checkIsCircular(head);

  if(isCircular){
    cout<<"Given node is Circular"<<endl;
  }
  else{
    cout<<"Given node is Not Circular"<<endl;
  }
 
 return 0;
}