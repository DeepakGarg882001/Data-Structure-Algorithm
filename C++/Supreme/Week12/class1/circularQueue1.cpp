// create a Circular Queue using Array

#include <iostream>
using namespace std;

// create a Circular Queue
class Queue
{

public:
    // store front
    int front;
    // store back
    int back;
    // store size
    int size;
    // store array
    int *arr;

    // default constructor
    Queue()
    {
        this->front = -1;
        this->back = -1;
        this->size = 0;
    }

    // size as parameter
    Queue(int size)
    {
        this->front = -1;
        this->back = -1;
        this->size = size;
        this->arr = new int[size];
    }

    // functions

    // insert element
    void push(int data)
    {

        // stepA: is space available or not
        if ((front == 0 && back == size - 1) || (back + 1 == front))
        {
            cout << "Queue is OverFlow" << endl;
            return;
        }
        // special case
        else if(back == -1){

            back++;
            front++;

            arr[back] = data;

            return;
        }
        else {
            // there is space

            // check back range
            if (back + 1 == size)
            {
                back = 0;
            }
            else{
                back++;
            }

            arr[back] = data;
        }
    }

    // remove element
    void pop()
    {

        // step B: is element persent or not
         
         if(front==-1){
            cout<<"Queue is Underflow"<<endl;
            return;
         }
         else{
             
             if(front == back){
                arr[front]==-1;
                front=-1;
                back=-1;

                return;
             }

            if(front+1==size){
                arr[front]=-1;
                front=0;

                return;
            }
            
            arr[front++] = -1;

         }
    }


    // is queue empty
    bool isEmpty(){
        if(front==-1 && back==-1){
            return true;
        }
        else{
            return false;
        }
    }

    // get size of queue
    int getSize(){
        if(front==-1 && back ==-1){
            return 0;
        }
        else if(front<back){
            return back-front+1;
        }else{
            return size-front+back+1;
        }
    }
};

int main()
{

    // store size of queue
    // int size;
    // cout << "Enter the size of Queue : ";
    // cin >> size;

    Queue* q = new Queue(5);

    q->push(1);
    q->push(2);
    q->push(3);
    q->push(4);
    q->push(5);
    // q->push(6);

    q->pop();
     
    q->push(6);

    q->pop();
    q->pop();
    q->pop();
    q->pop();
    q->pop();
    q->pop();


     cout<< q->back<< endl;
     cout<< q->front <<endl;

    return 0;
}