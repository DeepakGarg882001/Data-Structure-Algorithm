#include<iostream>
using namespace std;

int main(){
   cout << "Please Enter the value of N,\n of which you want to make Pattern :  " ;
   int N;
   cin >> N;

   int i=1;
   char a=' ';

   while(i<=N){
       int j=i;
       while(j<N){
         cout<<a<<" ";
         j=j+1;
       }
       int k=1;
       int l=i;
       while(k<=i){
       cout <<l<<" ";
       k=k+1;
       l=l+1;
       }
       cout << endl;
       i=i+1;
   }


}