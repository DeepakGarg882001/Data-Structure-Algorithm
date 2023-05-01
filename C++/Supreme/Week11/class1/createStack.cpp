// Create a Stack without using STL

// Approch 1: using array


#include<iostream>
using namespace std;

// create a stack
class Stack{
        
      
        // store top index
        int top;
        // store size
        int size;
 
        // create arr
        int* arr;
        
       public:

        // default constructor
        Stack(){
           
            this->top = -1;
            this->size = 0;
            this->arr = new int[size];
        }

        // size as parameter
        Stack(int size){
           
            this->top = -1;
            this->size = size;
            this->arr = new int[size];
        }


        // functions

        void push(int data){
             // step A:  check is memory avalilabe
             if(size-(top+1) <0){
                cout<<"Stack Overflow, can't add more elements"<<endl;
                return;
             }

             //stepB : if free-> insert element
             arr[++top] = data;

        }


        void pop(){
            // stepA : check is element persent
            if(top==-1){
                cout<<"Stack Underflow, can't remove any element"<<endl;
                return;
            }
            // else remove element
            arr[top--] = 0;
        }

        int getTop(){
            return arr[top];
        }

        bool empty(){
            if(top==-1){
                return true;
            }
            else{
                return false;
            }
        }

        int getSize(){
            return this->size;
        }

};


void printStack(Stack* &s){
       
       while(s->empty()!=true){
        int value = s->getTop();
         cout<< value <<"  ";
         s->pop();
       }
       
     cout<<endl;
}


void  takeInput( Stack* &s ){

  for(int index=0; index<s->getSize(); index++){
        // take data
        int data;
        cout<<"Enter the value : ";
        cin>>data;

        s->push(data);
    }
}

int main(){
     
     // store size;
     int size;
     cout<<"Enter the size of Stack : ";
     cin>>size;

     // create a New Stack
     Stack* s = new Stack(size);

     // take input
     takeInput(s);

     // print Stack data
     printStack(s);

     return 0;
}