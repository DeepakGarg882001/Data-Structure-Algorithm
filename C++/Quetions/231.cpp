// Given an integer n, return true if it is a power of two. Otherwise, return false.

// An integer n is a power of two, if there exists an integer x such that n == pow(2,x)


#include<iostream>
#include<math.h>
using namespace std;

int main(){
  cout <<"Please Enter a Integer : ";
  int N;
  cin>> N;
  bool k= 0;
 for(int i=0;i<31;i++){
     int powers = pow(2,i);
     if(N==powers){
        k=1;
        
     }
 }
 cout<<k;
 return k;
}