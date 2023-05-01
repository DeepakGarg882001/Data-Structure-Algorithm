// You have a Single Linked List of any length
// Insert A Element at any position in between given Linked List

// eg:  LL = 1 2 3 4 5, 
// insert element = 8, position= 2

// output: LL = 1 8 2 3 4 5


 #include<iostream>
 using namespace std;

 // create a Node
 class Node{
      
      public:

      // store data
      int data;
      // store next node address
      Node* next ;

      // default constructure
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

 void printLinkdList( Node* currNode){
             
             while(currNode!=NULL){
               //print
               cout<< currNode->data << "  ";

               // update currNode
               currNode = currNode->next;
             }

            cout<<endl;         

 }

 void insertElement( Node* currNode, int &size, int &position, int &value){
           
           // store prevNode address
           Node* prevNode = NULL;
           
           // run a loop
           for(int index=1; index<=size; index++){
                  
                  // agar position <=0 ho toh
                  if(position<=1){
                     
                     // create a new node
                     Node* temp = new Node(currNode->data);

                     // update currNode data
                     currNode->data = value;

                     // now put temp before currNode
                     temp->next = currNode->next;
                     
                     // update currNode
                     currNode->next = temp;

                     return;

                  }
                  
                  // agar position >=size ho toh
                  if(position>size && index==size){
                        
                        // create a new node
                        Node* temp = new Node(value);

                        // link this node to last node in the last
                        currNode->next = temp;

                        return;
                  }
                
                  // sayad middle mai insert krna hai
                  if(position==index){
                      // create a new node
                        Node* temp = new Node(value);

                        // link this node to last node
                        temp->next = currNode;

                        // now link this node to prevNode
                        prevNode->next= temp;

                        return;
                  }

                  // agar khuch bi nahi hai toh
                  prevNode = currNode;
                  currNode = currNode->next;

           }
    
 }
 
 void takeInput( Node* currNode, int size){
        
        // store prevNode address
        Node* prevNode = NULL;

        // run loop
        for(int index=0; index<size; index++){
              
              // take input 
              int data;
              cout<<"Enter the value of Node"<< index+1<<" : ";
              cin>>data;

              // agar first node hai toh
              if(index==0){
                     currNode->data = data;
                     //update prevNode
                     prevNode = currNode;
              }
              else{
                  
                  // create a new node
                  Node* temp = new Node(data);

                  prevNode->next = temp;

                  prevNode = temp;

              }

        }

 }

 int main(){
        
        // store n
        int n;
        cout<<"Enter the length of Linked List : ";
        cin>>n;
         
        // create a empty node
        Node* head = new Node();

        // take input from user
        takeInput(head,n);

        // print linked list  inserting
        printLinkdList(head);

        // take position from user
        int position;
        cout<<"Enter the position at which you want to insert Element : ";
        cin>>position;

        // take value of new element
        int value;
        cout<<"Enter the value of New Element : ";
        cin>> value;
        
        // insertElement
        insertElement(head,n,position,value);

        // print linked list after inserting
        printLinkdList(head);

        return 0;
 }