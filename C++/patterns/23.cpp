#include<iostream>
using namespace std;

int main(){
   cout << "Please Enter the value of N,\n of which you want to make Pattern :  " ;
   int N;
   cin >> N;

   int i=1;
   char a='*';
   char b=' ';

   while(i<=N){
       int k = 1;
       while(k<i){
         cout <<b;
         k=k+1;
       }

       int j=i;
       while(j<=N){
         cout << a;
         j=j+1;
     }
     
    
    cout<<endl;
    i=i+1;

   }
}