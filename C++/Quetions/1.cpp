// Given an integer n ,return the difference between the product of its digits and sum of its digits.
#include<iostream>
using namespace std;

int main(){
   cout <<"Please Enter the value of N : ";
   int N;
   cin >>N;

   int sum =0;
   int product =1;
   
   while(N!= 0){
       int digit = N%10 ;
       sum = sum + digit;
       product= product * digit;
       N = N/10;

   }
   int sub = product - sum;
 cout<< "The sum of its digit is : "<<sum<<endl;
 cout << "The Product of its digits is : "<<product <<endl;
 cout << "The difference between  product & sum  is : "<<sub <<endl;


}