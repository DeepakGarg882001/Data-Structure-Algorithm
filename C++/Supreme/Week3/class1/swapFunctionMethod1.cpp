// Swap Function Implementation by Method 1
// eg using a Temp variable


#include<iostream>
using namespace std;


int main(){

 int num1,num2;
     cout<<"Enter the value of Num 1 : ";
     cin>>num1;

     cout << "Enter the value of Num 2 : ";
     cin >> num2;

     cout<<"After swaping Num1 and Num2"<<endl;
     
     //step 1 -> create temp var
     int temp = num1;

     //step 2
     num1 = num2;

     //step 3
     num2 = temp;


     cout<<"Value of Num 1 is : "<<num1<<endl;
     cout<<"Value of Num 2 is : "<<num2<<endl;

 return 0;
   

}