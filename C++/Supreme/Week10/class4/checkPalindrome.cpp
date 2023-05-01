// You have given a Linked List
// Check that given Linked List is Palindrome or Not
// eg:  LL = 10  20  30  20  10
// output : Yes, it is a Palindrome


#include<iostream>
using namespace std;

// create a Node
class Node{
    public:

    int data;    // store the data
    Node* next;  // store next node data
       
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

// reversing the Linked List
Node* reverseNodes( Node* head){
         
         // store prevNode
         Node* prevNode = NULL;
         // store currNode
         Node* currNode = head;
         // store next node
         Node* nextNode = currNode->next;
         

         while(currNode!=NULL){
             
             currNode->next = prevNode;
             prevNode = currNode;

             currNode = nextNode;

             if(nextNode!=NULL){
                nextNode = nextNode->next;
             }

         }

         return prevNode;


}

// finding the mid node
Node* getMiddeNode( Node* head ){
     
      // make two pointers slow and fast
      Node* slow = head;
      Node* fast = head;

      while( fast!= NULL)
      {
         fast = fast->next;

         if(fast!=NULL){
            fast = fast->next;
         }

         if(fast!=NULL){
            slow = slow->next;
         }
      }
      
  return slow;
}

// checking for palindrome
bool isPalindrome( Node* head ){

    // stepA: find mid node
       
    Node* midNode = getMiddeNode(head);

    // step B:  reverse the Linked List from next node of mid
    Node* nextOfMid =   reverseNodes( midNode->next);
     
    // joining
    midNode->next = nextOfMid;
     
    // step C:  start compairing

    Node* temp1= head;
    Node* temp2 = nextOfMid;

    while(temp2!=NULL){
        
        if(temp1->data != temp2->data){
            return false;
        }

        temp1 = temp1->next;
        temp2= temp2->next;

    }

    return true;
    

}

// taking input from user
void takeInput( Node* currNode, int &length){
      
      for(int index=1; index<=length; index++ ){
        // take input from user
        int data;
        cout<<"Enter the value of Node "<<index<<" : ";
        cin >> data;

        // if this is first node
        if(index==1){
            currNode->data = data;
        }
        else{
            // create a new Node
            Node* temp = new Node(data);

            currNode->next = temp;
            currNode = temp;
        }
      }
}

int main(){
     
     // store length
     int length;

     cout<<"Enter the length of Linked list : ";
     cin>> length;

     // create a Empty Node
     Node* head =  new Node();

     // take input from user
     takeInput(head, length);

     // check for palindrome
     if(isPalindrome(head)){
        cout<<"Linked List is Palindrome"<<endl;
     }else{
        cout<<"Linked List is not a Palindrome"<<endl;
     }
    
    return 0;
}