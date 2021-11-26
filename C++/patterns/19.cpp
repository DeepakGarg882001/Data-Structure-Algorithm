#include<iostream>
using namespace std;

int main(){
   cout << "Please Enter the value of N,\n of which you want to make Pattern :  " ;
   int N;
   cin >> N;

   int i=1;
   char a='A'+ N-1;
   while(i<=N){
        int j=1;
        char b=a;
        while(j<=i){
            cout<<b<<" ";
            j=j+1;
            b=b+1;
            
        }
        cout <<endl;
        i=i+1;
        a=a-1;
   }
}