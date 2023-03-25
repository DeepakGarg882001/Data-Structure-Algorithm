// Swap Function Implementation by Method 1
// eg using Bitwise Operation XOR (^)

#include<iostream>
using namespace std;

int main(){
     
     int num1,num2;
     cout<<"Enter the value of Num 1 : ";
     cin>>num1;

     cout << "Enter the value of Num 2 : ";
     cin >> num2;

     cout<<"After swaping Num1 and Num2"<<endl;

     //step1
     num1 = num1^num2;
     
     //step2
     num2 = num1^num2;

     //step3
     num1 = num1^num2;

     cout<<"Value of Num 1 is : "<<num1<<endl;
     cout<<"Value of Num 2 is : "<<num2<<endl;
  
return 0;
}