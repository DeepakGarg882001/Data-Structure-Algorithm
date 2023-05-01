// You are given a Double Linked list of any length
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
      Node* next ;
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

 void printLinkdList( Node* currNode){
             
             while(currNode!=NULL){
               //print
               cout<< currNode->data << "  ";

               // update currNode
               currNode = currNode->next;
             }

            cout<<endl;         

 }

 void deleteNode( Node* &head, int &size, int &position){
           
           // agar invalid position ho toh
                  if(position<1 || position>size){
                    cout<<"Invalid Position of Node"<<endl;
                    return;
                  }

          
            
           // store currNode
           Node* currNode = head;

           // run a loop
           for(int index=1; index<=size; index++){
                  
                  // agar position <=0 ho toh
                  if(position==1){
                     
                     // update head
                     head = head->next;
                     head->prev = currNode->prev;

                     // disjoint current node
                     currNode->next = NULL;
                     currNode->prev = NULL;

                     // delete currNode
                     delete currNode;
                   
                     return;
                  }
                  
                  // sayad middle mai insert krna hai
                  if(position==index){
                         
                         // update prevNode
                         currNode->prev->next = currNode->next;
                         
                         if(currNode->next!=NULL){
                            currNode->next->prev = currNode->prev;
                         }
                         
                         // disjoint currNode
                         currNode->next = NULL;
                         currNode->prev = NULL;

                         //delete currNode
                         delete currNode;

                        return;
                  }

                  // agar khuch bi nahi hai toh
                  currNode = currNode->next;

           }
    
 }
 
 void takeInput( Node* currNode, int size){
        
       

        // run loop
        for(int index=0; index<size; index++){
              
              // take input 
              int data;
              cout<<"Enter the value of Node"<< index+1<<" : ";
              cin>>data;

              // agar first node hai toh
              if(index==0){
                     currNode->data = data;
                                }
              else{
                  
                  // create a new node
                  Node* temp = new Node(data);
                   
                   // join this with currNode
                  currNode->next = temp;
                  temp->prev = currNode;

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
         
        // create a empty node
        Node* head = new Node();

        // take input from user
        takeInput(head,n);

        // print linked list  inserting
        printLinkdList(head);

        // take position from user
        int position;
        cout<<"Enter the position of Node which you want to Delete : ";
        cin>>position;

        // delete Node
        deleteNode(head,n,position);

        // print linked list after inserting
        printLinkdList(head);

        return 0;
 }