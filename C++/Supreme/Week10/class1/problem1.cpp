// create a Single Linked list of given Length N,
// take all the data of Linked List from user and print the Linked List.

#include<iostream>
using namespace std;


// create LL DataType
class Node{
     
     public:

     // data
     int data;
     Node *next;

     // default constructure
     Node(){
        this->data=0;
        this->next=NULL;
     }

     // data as parameter
     Node( int data ){
        this->data = data;
        this->next = NULL;
     }


};

void printLinkedList( Node* currNode ){
      
       while(currNode!=NULL){
        cout<<currNode->data<<"   ";

        // update current node
        currNode = currNode->next;
      }

}

void takeInput(Node* currNode, int n){
          
          // store prevNode address
          Node* prevNode = NULL;

          for(int index=0; index<n; index++){
               
               // take data from user
               int data;
               cout<<"Enter the value of Node "<<index+1<<" : ";
               cin>>data;

               // agar fist node hai toh
               if(index==0){
                currNode->data = data;
                // update prevNode
                prevNode = currNode;
               }else{
                  
                  //create new Node
                  Node* temp = new Node(data);
                  
                  prevNode->next = temp;

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