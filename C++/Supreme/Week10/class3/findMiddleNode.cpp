// You have given a Linked List 
// Find its middle node
// eg:   LL = 10  20  30  40  50 
// output: 30 is middle node 


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

// find middle node
Node* getMiddleNode( Node* head ){
      
      // edge case
      if(head==NULL){
        cout<<" Linked List is Empty "<<endl;
        return head;
      }

      // make a slow pointer
      Node* slow = head;
      // make a fast pointer
      Node* fast = head;

      // run loop
      while(fast!=NULL){
          
          fast = fast->next;  // increasing fast by one step
          if(fast !=NULL){
            fast = fast->next; // increasing fast by one step
          }

          // now check fast to increase slow
          if(fast!=NULL){
            slow = slow->next;
          }


      }

      // return slow as answer
      return slow;
}

// taking the input from user
void takeInput( Node* currNode, int &length ){
     

     for(int index=1; index<=length; index++ ){
        // take node value
        int data;
        cout<<"Enter the value of Node "<<index<<" : ";
        cin >> data;
          
        // if first node
        if(index==1){
            currNode->data = data;
            
        }else{
            // create a New node
            Node* temp = new Node(data);

            currNode->next = temp;
            currNode = temp;

        }
     }

}

int main(){
  
    // store length
    int length;
    cout<<"Enter the length of Linked List : ";
    cin>> length;

    // create a Empty Node
    Node* head = new Node();

    // take input from user
    takeInput(head,length);

    // find middle node
    Node* midNode = getMiddleNode(head);

    cout<<"Middle node value is : "<<midNode->data<<endl;

    return 0;
}