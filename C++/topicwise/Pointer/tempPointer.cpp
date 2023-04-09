#include<iostream>
using namespace std;

int main(){

    int x=5;
    int *y=&x;
    int **ptr2=&y;


    cout <<"Variable Data is : "<<x<<endl;
    cout <<"Pointer one Cantain Address : "<<y<<endl;
    cout <<"Pointer 2 contain Address : "<<ptr2<<endl;main

}