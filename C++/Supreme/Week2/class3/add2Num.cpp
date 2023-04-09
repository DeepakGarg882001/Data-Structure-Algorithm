// create a function which takes two input and return there sum

#include<iostream>
using namespace std;

int addNum(){
        int a,b;
        cout << "Enter The value of a : ";
        cin>> a;

        cout <<"Enter the value of b : ";
        cin >>b;

        return a+b;

}

int main(){

   int sum =addNum();
   cout <<"sum is : "<<sum;

}
