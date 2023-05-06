// create a Queue using STL and performe all operations


#include<iostream>
#include<queue>
using namespace std;

// printing the queue data
void printQueue( queue<int> q){
     
     while(!q.empty()){
        cout<< q.front()<<"  ";
        q.pop();
     }
   cout <<endl;
}

// taking input from user
void takeInput( queue<int> &q, int &length ){
      
      for(int index =0; index<length; index++ ){
           // take input 
           int data;
           cout<<"Enter the value of Node "<<index<<" : ";
           cin >> data;

           // insert data
           q.push(data);
      }

}

int main(){

    // store length of Queue
    int length;
    cout<<"Enter the length of Queue : ";
    cin>> length;

    // create a Empty queue
    queue<int> q;

    // takeInput from user
    takeInput(q, length);
     
    // print front element
    cout<<"Front Element is : "<< q.front()<< endl;

    // print size of Queue
    cout<<"Size of Queue is : "<< q.size()<< endl;

    // check is Queue Empty or  not
    cout<<"Is Queue Empty or Not : "<< q.empty() << endl;

    // print queue data
    printQueue(q);

    return 0;
}