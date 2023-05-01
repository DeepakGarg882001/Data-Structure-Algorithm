// You have given a String s
// Now you have to reverse it
// Reverse it using stack and you can not use any other dataStructure

#include<iostream>
#include<string>
using namespace std;

// creat a stack
class Stack{
       
       public:

       // store size
       int size;
       // store top
       int top;
       // create a array
       char* arr;

       // default constructor
       Stack(){
              this->size = 0;
              this->arr = new char[size];
              this->top = -1;
       }

       // size as parameter
       Stack( int size ){
              this->size = size;
              this->arr = new char[size];
              this->top = -1;
       }
       
       
       // functions

       void push( char data){

              // step A: is space available or not
              if( top+ 1 >= size){
                 cout<<"Stack Overflow , can't add element"<<endl;
                 return;
              }

              // else insert element
              arr[++top] = data;

              size++;
       }


       void pop(){
              // step A: is any element present or not
              if(top==-1){
                     cout<<"Stack Underflow, can't delete element"<<endl;
                     return;
              }
              // else delete element
              arr[top--] = '\0';

              size--;
       }


       char getTop(){
             
             // is element present or not
             if(top==-1){
              cout<<"Stack is Empty"<<endl;
              return '\0';
             }
             else{
              return arr[top];
             }
       }

       int getSize(){
           return this->size;
       }

       bool isEmpty(){
           if(top<=-1){
              return true;
           }
           else{
              return false;
           }

        }
 

};

int main(){
       
       // create a string str
       string str;
       cout<<"Enter the value of string : ";
       cin>>str;
       
       // length of string
       int  length = str.length();

       // create a empty stack
       Stack* s = new Stack(length);

       // copy value in stack
       for(int index=0; index<length; index++){
              s->push(str[index]);
       }

       // print reverse string
       while(s->isEmpty()!=true){
              cout<< s->getTop();
              s->pop();
       }
      
       cout<<endl;

       return 0;
}