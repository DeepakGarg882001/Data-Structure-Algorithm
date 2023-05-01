// create a Double Linked List for size n.
// take data from user and insert it into nodes.
// You have to insert in this a way, take the first Input from user and put it into last Empty Node

// eg: n=4, 
// input: 1  2  3  4
// output : 4  3  2  1
// explanation: i.e each new node added in left side


#include<iostream>
using namespace std;

// create a Node class
class Node{
     
     public:

     // Node data
     int data;
     // next node pointer
     Node* next;
     // store prev node address
     Node* prev;

     // default constructor
     Node(){
        this->data= 0;
        this->next = NULL;
        this->prev = NULL;
     }

     // data as parameter
     Node( int data ){
        this->data= data;
        this->next = NULL;
        this->prev = NULL;
     }
      
       
};

void printLinkedList( Node* currNode){
       
       while(currNode!=NULL){
           cout<< currNode->data <<"   ";
           // update current node
           currNode = currNode->next;
       }

       cout<<endl;

}

void takeInput( Node* &currNode, int size){
          
          for(int index=0; index<size; index++){
                
                // take data from user
                int data;
                cout<<"Enter the value of Node"<<index+1<<" : ";
                cin>>data;
                 
                 
                // agar first node hai toh
                if(index==0){
                    currNode->data = data;
                }
                else{
                    
                    // create a new Node
                    Node* temp = new Node(data);

                    // temp ko left side mai kr do
                    temp->next = currNode;
                    // currNode ko right mai krr do
                    currNode->prev = temp;
                    // update currNode
                    currNode = temp;

                }

          }
 
}

int main(){

        // store n
        int n;
        cout<<"Enter the length of Linked List : ";
        cin>>n;
        
         // create empty Node
         Node* head = new Node();
       
        //take input from user   
         takeInput(head, n); 

         // print Linked List
         printLinkedList(head);


return 0;
}