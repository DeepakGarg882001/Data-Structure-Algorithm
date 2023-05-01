// You are Given a Single Linked List of any length.
// Find length of Single Linked List

#include<iostream>
using namespace std;

// create a Node
class Node{
       
       public:

       // data
       int data;
       // store next node address
       Node* next;

       // default constructor
       Node(){
        this->data= 0;
        this->next=NULL;
       }

       // data as parameter
       Node( int data ){
        this->data = data;
        this->next = NULL;
       }

};

void printLinkedList( Node* currNode){
       
       while(currNode!=NULL){
         //print
         cout<<currNode->data<<"  ";

         // update currNode
         currNode = currNode->next;
       }

}

void findLength( Node* currNode, int &len ){
      
      // run a loop
      while(currNode!=NULL){
        len++;
        // update currNode
        currNode = currNode->next;
      }

}

void takeInput(Node* currNode, int size){
       
       // store prevNode address
       Node* prevNode = NULL;

       for(int index=0; index<size; index++){
           
           // take data from user
           int data;
           cout<<"Enter the value of Node "<<index+1<<" : ";
           cin >> data;

           // agar first node hai toh
           if(index==0){
             currNode->data = data;

             // update prevNode
             prevNode = currNode;

           }
           else{
               
               // create new node
               Node* temp = new Node(data);
              
               // link to prevNode
               prevNode->next = temp;

               // update prevNode
               prevNode = temp;

               

           }

           

       }

}

int main(){
    
     // store n
     int n;
     cout<<"Enter the size of Linked List : ";
     cin>>n;

     // create a Empty linked list
     Node* head = new Node();

     // take Input from user
     takeInput(head, n);

     // store length
     int len=0;

     // find length of Linked list
     findLength(head,len);
     
     // print linked list
     printLinkedList(head);

     // print length
     cout<< "Length of Linked List is : "<<len<<endl;

return 0;
}