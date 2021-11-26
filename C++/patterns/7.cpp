#include<iostream>
using namespace std;

int main(){
   cout << "Please Enter the value of N,\n of which you want to make Pattern :  " ;
   int N;
   cin >> N;

   int i=1;
   while(i<=N/2){
       int j=1;
       while(j<=i){
           cout << " * ";
           j=j+1;
       }
       cout << endl;
       i=i+1;
   }

   int k=N/2;
   while(k<=N){
       int l=1;
       while(l<=N-k){
           cout << " * ";
           l=l+1;
       }
       cout << endl;
       k=k+1;
   }

}