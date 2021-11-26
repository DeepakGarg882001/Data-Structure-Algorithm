#include<iostream>
using namespace std;

int main(){
   cout << "Please Enter the value of N,\n of which you want to make Pattern :  " ;
   int N;
   cin >> N;

   int i=1;
   char a='*';
   
   
   while(i<=N){
        int j=i;
        int k=1;
        while(j<=N){
            cout <<k;
            k=k+1;
            j=j+1;
        }
       
       int l=2;
       while(l<=i){
           cout<<a<<a;
           l=l+1;
           }

         int m=N-i+1;
         while(m>0){
             cout << m;
             m=m-1;
         }  

       cout <<endl;
       i=i+1;

   }

}
