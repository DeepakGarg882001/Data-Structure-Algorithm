// You are given a Circular Double Linked list of any length
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
        // store prev node address
        Node* prev;

        // default constructor
        Node(){
            this->data = 0;
            this->next = NULL;
            this->prev = NULL;
        }

        // data as Parameter
        Node( int data ){
            this->data = data;
            this->next = NULL;
            this->prev = NULL;
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

void deleteNode( Node* &head, int &length, int &position){
        
        // store ending Node
        Node* endNode = head->prev;

        // store currNode 
        Node* currNode = head;


        for(int index=1; index<=length; index++){
           
            // agar first position ho toh
            if(position<=1){
                 head = head->next;
                 endNode->next = head;
                 head->prev = endNode;

                 currNode->prev= NULL;
                 currNode->next = NULL;

                 delete currNode;
                
                return;
            }
              
            // agar last node ho toh
            if(position>=length){
                head->prev = endNode->prev;
                endNode->prev->next = head;

                endNode->prev = NULL;
                endNode->next = NULL;

                delete endNode;

                return;
            }

            // agar middle node hai toh
            if(position == index){
                 
                 currNode->prev->next = currNode->next;
                 currNode->next->prev = currNode->prev;
                 
                 currNode->prev = NULL;
                 currNode->next = NULL;

                 delete currNode;

                 return;
            }
              
             // default case
             currNode = currNode->next;
        }

}

void takeInput( Node* currNode,int length){
     
     // store starting node
     Node* startNode = currNode;

     for(int index=1; index<=length; index++){
          // take data from user
          int data;
          cout<<"Enter the value of Node "<<index<<" : ";
          cin>> data;

          // agar first node hai toh
          if(index==1){
             currNode->data = data;
             currNode->next = currNode;
             currNode->prev = currNode;
          }
          else{
            // create a new node
            Node* temp = new Node(data);
                
            // join this with currNode
            currNode->next = temp;
            temp->prev = currNode;
            temp->next = startNode;

            startNode->prev = temp;

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
       
      // store position which node you want to delet
      int position;
      cout<<"Enter the position of Node which you want to delete : ";
      cin>> position;

      // delete the node
      deleteNode(head, length, position);

      //print linked List
      printLinkedList(head);

      return 0;
}