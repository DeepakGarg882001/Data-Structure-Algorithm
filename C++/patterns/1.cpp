#include<iostream>
using namespace std;

int main(){
  cout << "Please Enter the size of pattern : ";
  int N;
  cin >> N;
  int i=1;
  while(i<=N){

       int j=1;

       while(j<=N){
           cout << j ;
           j=j+1;
       } 

       cout <<"   ";

       int m=1;
       
       while(m<=N){
           cout << N-m+1 ;
           m=m+1;
           }
       cout << endl;

       i=i+1;
  }

}