#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *nextAddress;

    node(int val){
        data=val;
        nextAddress=NULL;
    }
};


int main(){

    // int x=45;
    // int * P_forX;
    // P_forX=&x;
    // cout <<P_forX<<endl;
    // cout <<&x<<endl;
    // cout<<*P_forX<<endl;
    // *P_forX=3;
    // cout<<*P_forX<<endl;
    // cout<<x<<endl;
    // int **pp=&P_forX;
    // cout<<pp<<endl;

    node *Head=NULL;
    //Make the first node and join it with Head pointer

    node * x1=new node(345);
    Head =x1;

    cout<<"Node Data : " <<Head->data<<endl; 
    cout <<"Next Node Address : "<<Head->nextAddress<<endl; 

}