// create a  Circular Double Linked list of given Length N.
// take all the data of Linked List from user and print the Linked List.


#include<iostream>
using namespace std;

// create Linked List
class Node{
       
       public:

       // store data
       int data;
       // prev Node address
       Node* prev;
       // next node address
       Node* next;

       // default constructor
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

void takeInput( Node* head,int size ){
      
      // store strating node
      Node* startNode = head;

      // store currNode node
      Node* currNode = head;

      // store prevNode
      Node* prevNode = head;

      for(int index=1; index<=size; index++ ){
           
           // take data from user
           int data;
           cout<<"Enter the value of Node"<<index<<" : ";
           cin>> data;
           
           // agar first node ho toh
           if(index==1){
            // insert  data
            currNode->data =data;
            currNode->prev = startNode;
            currNode->next = startNode;
           }
           else{
              
              // create a new node
              Node* temp = new Node(data);

              // join this with currNode
              temp->prev = currNode;
              temp->next = startNode;

              // join currNode with this node
              currNode->next = temp;
              
              // make circular
              startNode->prev = temp;

              // update currNode
              currNode = temp;
           }



      }

}

void printLL( Node* head ){
          
          // store currNode
          Node* currNode = head;
           
           // count traverse of loop
           int count =0;

          while(currNode!=head || count==0){
              
              // print 
              cout<< currNode->data<<"  ";
              // check loop
              if(currNode == head){
                count++;
              }
              // update currNode
              currNode = currNode->next;
           }
          
          cout<<endl;



}

int main(){
     
     // store length
     int n;

     cout<<"Enter the length of Linked List : ";
     cin>>n;

     // create a Empty node
     Node* head = new Node();

     // take input from user
     takeInput(head,n);

    // print linked list
    printLL(head);

return 0;
}