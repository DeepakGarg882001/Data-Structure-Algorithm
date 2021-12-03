#include<iostream>
using namespace std;

int main(){
   cout << " Please Enter the value of N, upto which you Require the sum of all Numbers : ";
   int N;
   cin >>N;
   int sum = 0;
   int i=1;
   while(i<=N){
       sum = sum + i;
       i=i+1;
   }
   cout << "The total Sum of these numbers is : "<< sum<<endl;

}