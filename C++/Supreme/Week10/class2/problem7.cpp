// create a Circular Double Linked List for size n.
// take data from user and insert it into nodes.
// You have to insert in this a way, take the first Input from user and put it into last Empty Node

// eg: n=4, 
// input: 1  2  3  4
// output : 4  3  2  1
// explanation: i.e each new node added in left side


#include<iostream>
using namespace std;

// create node 
class Node{
       
       public:

       // store data
       int data;
       // store prev node address
       Node* prev;
       // store next node address
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
         this->prev = NULL;
         this->next = NULL;
       }

};

void printLinkedList( Node* head){
        
        // store currNode
        Node* currNode = head;
        // store count
        int count = 0;

        while( currNode!=head || count==0 ){
            //cheak loop
            if(currNode==head){
                count++;
            }
            // print 
            cout<< currNode->data <<"  ";
            // update currNode
            currNode = currNode->next;
        }
         cout<<endl; 
}

void takeInput( Node* &head , int size ){
     
     // store ending node
     Node* end = head;

     for(int index=1; index<=size; index++ ){
         
         //take data from user
         int data;
         cout<<"Enter the value of Node "<<index<<" : ";
         cin>>data;
         
         // agar first Node ho toh
         if(index==1){
             // insert data
             head->data = data;
             // update prev pointer
             head->prev = head;
             // update next pointer
             head->next = head;
         }
         else{
              
              // create a new node
              Node* temp = new Node(data);
              
              // join this before prev node
              temp->next = head;
              // update prev pointer
              temp->prev = end;
              // update head prev
              head->prev = temp;

              // make circular
              end->next = temp;
              
              // update head
              head = temp;

         }

     }


}

int main(){

    // store length
    int n;
    cout<<"Enter the length of Linked List : ";
    cin>>n;

    // create a Empty Node
    Node* head = new Node();

    // take Input from user
    takeInput(head ,n );

    // print Linked list
    printLinkedList(head);

    return 0;
}