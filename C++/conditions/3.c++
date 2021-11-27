#include<iostream>
using namespace std;

int main(){
 
 cout << " Do you want to find the Average of few numbers " << endl;
 cout << " Please Enter the total Number of values which you have : ";
 int N;
 cin >> N ;
 float sum = 0;
 int number = 1;
 
 do{
     cout << "Please Enter The value of Number : ";
     float input;
     cin >> input;
     sum = sum + input;
     number = number + 1;
 }
 while(number <= N);

     float avg;
     avg = sum/N ;
     cout << " The average of "<< N << " digits is :" << avg << endl;
 


}