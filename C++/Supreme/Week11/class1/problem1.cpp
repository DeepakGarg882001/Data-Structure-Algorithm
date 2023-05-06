// Create a Stack without using STL
// You have to create Two stack in one Array

#include<iostream>
using namespace std;

// create a stack
class Stack{
       
       public:

       // store size
       int size;
       // store top1
       int top1;
       // store top2
       int top2;
       // store array 
       int* arr;
        

        // default constructor
        Stack(){
             this->size=0;
             this->top1 =-1;
             this->top2 = -1;
        }

        // size as parameter
        Stack( int size ){
             this->size=size;
             this->top1 =-1;
             this->top2 = size;
             this->arr = new int[size];
        }


 
       // functions

       // insert element of first stack
       void push1( int data ){
            
            // stepA : is space available
            if(top2-top1-1<=0){
                cout<<"Stack1 overflow"<<endl;
                return;
            }
            else{
                // space is available 
                arr[++top1] = data;
            }

       }


       // insert element in second stack
       void push2( int data ){

            // stepA : is space available 
            if(top2-top1-1<=0){
                cout<<"Stack2 overflow"<<endl;
                return;
            }
            else{
                // space is available 
                arr[--top2] = data;
            }

       }
       

       // remove element from stack1
       void pop1(){
             
             // step A : is element persent
             if(top1<=-1){
                cout<<"Cout Stack Underflow"<<endl;
                return;
             }
             else{
                // element is persent
                arr[top1--] = -1;
             }

       }
     
       
       // remove element from stack2
       void pop2(){
             
             // step A : is element persent
             if(top2>=size){
                cout<<"Cout Stack Underflow"<<endl;
                return;
             }
             else{
                // element is persent
                arr[top2++] = -1;
             }

       }


       // get top element of stack1
       int getTop1(){
           // stepA : is element persent
           if(top1<=-1){
            cout<< "Stack1 is Empty"<<endl;
            return -1;
           }
           else{
            return arr[top1];
           }

       }


       
       // get top element of stack2
       int getTop2(){
           // stepA : is element persent
           if(top2>= size){
            cout<< "Stack2 is Empty"<<endl;
            return -1;
           }
           else{
            return arr[top2];
           }

       }
         
      
      // is stack 1 empty or not
      bool isEmpty1(){
          if(top1==-1){
            return true;
          }
          else{
            return false;
          }
      }

        // is stack 2 empty or not
      bool isEmpty2(){
          if(top2==size){
            return true;
          }
          else{
            return false;
          }
      }


      // get size of stack1
      int getSize1(){
          return top1+1;
      }

      // get size of stack2
      int getSize2(){
        return size-top2;
      }
};

void printStack1( Stack* &st){
      
      cout<<"Printing stack 1 : ";
      while(st->isEmpty1()!=true){
        cout<< st->getTop1() <<"  ";
        st->pop1();
      }
      cout << endl;

}


void printStack2( Stack* &st){
      
      cout<<"Printing stack 2 : ";
      while(st->isEmpty2()!=true){
        cout<< st->getTop2() <<"  ";
        st->pop2();
      }
      cout << endl;

}

int main(){
     
     // create a Empty Stack
     Stack* st = new Stack(5);

    //  st->push1(4);
    //  st->push1(8);
    //  st->push1(2);
    //  st->push1(9);
    //  st->push1(15);


     st->push2(12);
     st->push2(10);
     st->push2(50);
     st->push2(5);
     st->push2(35);
     st->push2(37);


    // print stack 1
    printStack1(st);

    // print stack 2
    printStack2(st);

   return 0;
}