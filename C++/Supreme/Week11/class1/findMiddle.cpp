// You have given a Stack of any size
// Find its middle element of stack
// Note: all elements should be present in stack.
// You can not use any other stack

#include <iostream>
using namespace std;

// create a Node of Linked List
class Node{

  public:
    // store data;
    int data;
    // store Next node address
    Node *next;
    // store prev node address
    Node *prev;

    // default constructor
    Node(){
        this->data = 0;
        this->next = NULL;
        this->prev = NULL;
    }

    // data as parameter
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};



// create a stack
class Stack{

  public:
    // store size
    int size;
    // store top
    Node *top;

    // default constructor
    Stack(){
        this->size = 0;
        this->top = NULL;
    }

    // functions
    
    // add a new element in stack at last
    void push(int data){

        //  create a new node
        Node *temp = new Node(data);

        // join with next and prev pointer
        if (top != NULL)
        {
            top->next = temp;
            temp->prev = top;
        }

        // update top
        top = temp;

        size++;
    }
      
    // remove the last element of stack
    void pop(){

        // is any element present or not
        if (top == NULL)
        {
            cout << "Stack underflow, can't  delete" << endl;
            return;
        }

        // store this node
        Node *temp = top;

        top = top->prev;
        if (top != NULL)
        {
            top->next = NULL;
        }

        temp->prev = NULL;

        delete temp;
        size--;
    }
    
    // get size of stack
    int getSize(){
        return this->size;
    }
    
    // get top element data
    int getTop(){
        if (top != NULL)
        {
            return top->data;
        }
        else
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }
    
    // check is stack empty or not
    bool isEmpty(){
        if (top != NULL)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};

// printing the whole stack data
void printStack( Stack* &s ){
       
       while (s->isEmpty()!=true)
       { 
         cout << s->getTop()<< "  ";
         s->pop();
       }

       cout<<endl;
       

}

// finding the middle node value
void getMiddle( Stack* &s, int &totalSize){
      
      // base condition
        if( (totalSize/2)+1 == s->getSize()){
            // toh ruk jao
            cout<< "Middle node value is :  "<<s->getTop()<<endl;
            return;
        }

    
      // processing
         int value = s->getTop();

         s->pop();

         // recursive relation
         getMiddle(s, totalSize);

         // backTrack
         s->push(value);


}

// taking input from user
void takeInput( Stack* &s, int &length ){
      
      for(int index=1; index<=length; index++){
         int data;
        cout<<"Enter the value of Node "<<index<< " : ";
        cin>> data;

        // insert data
        s->push(data);
      }
}

int main(){
     
     // create a empty stack
     Stack* s = new Stack();

     // store length
     int length;
     cout<<"Enter the length of stack : ";
     cin>> length;

     //take input from user
     takeInput(s,length);

     //find middle element
     getMiddle(s,length);
    
     // print whole stack
     printStack(s);

     return 0;
}