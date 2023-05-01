// You have given a Sorted Linked List
// It may occurs Duplicate elements
// Remove Duplicate nodes
// eg:  LL = 10 20 20 30 40 50 50 60
// output: 10 20 30 40 50 60

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

// removing Duplicate Nodes
void removeDuplicates( Node* currNode){
       
       while(currNode!=NULL){
         
          if( (currNode->next !=NULL) && (currNode->data == currNode->next->data) ){
              
              // store next node
              Node* temp = currNode->next;

              // disjoint the link
              currNode->next = temp->next;

              temp->next = NULL;

              delete temp;


          }else{
            currNode= currNode->next;
          }
              
          

       }

}

// print linked List
void printLinkedList( Node* currNode){
     
   while(currNode!=NULL){
     cout<< currNode->data <<"   " ;
     currNode = currNode->next;
   }
   cout<<endl;

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

      cout<<"Linked List with Duplicates: "<<endl;
     // print linked list
     printLinkedList(head);

     // remove duplicates
     removeDuplicates(head);
      
     // print linked list after removing
     printLinkedList(head);

     return 0;
}