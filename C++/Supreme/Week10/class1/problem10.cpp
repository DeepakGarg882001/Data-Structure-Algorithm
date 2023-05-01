// You are given a Circular Single Linked list of any length
// Delete a given position Node from it

//eg: LL = 1 2 3 4 5
// position  = 2
// output = 1 3 4 5


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
            this->next= NULL;
        }

        // data as Parameter
        Node( int data ){
            this->data = data;
            this->next= NULL;
        }

};
void printLinkedList(Node* head){
    //store currNode
    Node* currNode = head;
    // store count of first node
    bool isFirst = false;

    while(currNode!=head || isFirst==false){
       // validation for first node
       if(currNode == head){
        isFirst = true;
       }

       // print data
       cout<< currNode->data <<"  ";

       // update cuurNode
       currNode = currNode->next;

    }
       cout<< endl;
}

void deleteNode( Node* &head, int &length, int &position ){
    
    // validation for position 
    if(position<1 || position>length){
        cout<<"Invalide Node Position"<<endl;
        return;
    }

   // store Prevnode
   Node* prevNode = NULL;
   // store curr Node
   Node* currNode = head;
   // store first node
   Node* firstNode = NULL;
  
   for(int index=1; index<=length; index++){
     // agar first node hai toh
     if(index==1 && position==1){
         firstNode = head;
         head = head->next;
     }

     // agar last position ho toh
     if(position>=length && index==length){
          prevNode->next = head;
          currNode->next = NULL;
          delete currNode;

          return;
     } 
      
     // agar position middle hai toh
     if(index==position && index!=1){
         prevNode->next = currNode->next;
         currNode->next = NULL;
         delete currNode;

         return;
     }
     
     // default case
     prevNode = currNode;
     currNode = currNode->next;

   }   
   
   // agar first node NUll nhi hai toh
   if(firstNode!=NULL){
    firstNode->next = NULL;
    delete  firstNode;
     prevNode->next= head;
   }

}

void takeInput( Node* currNode,int length){
     
     // store staring node
     Node* startNode = currNode;
    
     // run a loop
     for(int index=1; index<=length; index++ ){
            // take data from user
            int data;
            cout<<"Enter the value of Node "<<index<<" : ";
            cin >> data;

            // agar first node hai toh
            if(index==1){
                currNode->data = data;
                currNode->next = currNode;
                
            }
            else{

                // create a new node
                Node* temp = new Node(data);

                currNode->next = temp;
                temp->next = startNode;
                currNode = temp;
            }
     }



}

int main(){
      
      // store length
      int length;
      cout<<"Enter the Lenght of Linked List : ";
      cin>> length;

      // create a Empty Node
      Node* head = new Node();

      // take input from user
      takeInput(head,length);
      
      // store position of Node
      int position ;
      cout<<"Enter the Position of Node whic you want to Delete : ";
      cin>>position;

      // delete the Node which user want
      deleteNode(head, length,position);

      // print Linked list
      printLinkedList(head);

      return 0;
}