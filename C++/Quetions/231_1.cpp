// Given an integer n, return true if it is a power of two. Otherwise, return false.

// An integer n is a power of two, if there exists an integer x such that n == pow(2,x)


#include<iostream>
#include<math.h>
using namespace std;

int main(){
  cout <<"Please Enter a Integer : ";
  int N;
  cin>> N;
  bool k =0;
  if(N<0 || N == 0){
     k=0;
  }
  else{
      int j=N-1;
      int m=N&j;
      if(m==0){
          k=1;
      }else{
          k=0;
      }
  }
 
 cout << k;
 
}