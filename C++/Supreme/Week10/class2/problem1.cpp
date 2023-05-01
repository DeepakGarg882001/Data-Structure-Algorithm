// create a Double Linked list of given Length N,
// take all the data of Linked List from user and print the Linked List.

#include<iostream>
using namespace std;


// create LL DataType
class Node{
     
     public:

     // data
     int data;
     // store next node address
     Node *next;
     // store prev node address
     Node* prev;

     // default constructure
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

void printLinkedList( Node* currNode ){
      
       while(currNode!=NULL){
        cout<<currNode->data<<"   ";

        // update current node
        currNode = currNode->next;
      }

}

void takeInput(Node* head, int n){
          
          // store prevNode address
          Node* prevNode = NULL;

          for(int index=0; index<n; index++){
               
               // take data from user
               int data;
               cout<<"Enter the value of Node "<<index+1<<" : ";
               cin>>data;

               // agar fist node hai toh
               if(index==0){
                head->data = data;
                // update prevNode
                prevNode = head;
               }else{
                  
                  //create new Node
                  Node* temp = new Node(data);
                  
                  // join prev Node with this
                  prevNode->next = temp;
                  // join this with prev Node
                  temp->prev = prevNode;

                  //update prevNode
                  prevNode = temp;


               }


          }

}

int main(){
    
    // store value of N
    int N;

    cout<<"Enter the Length of Linked List : ";
    cin>>N;
    
    // create a empty Node
    Node* head = new Node();

    // take input from user
    takeInput(head, N);

    // print Linked List
    printLinkedList(head);

return 0;
}