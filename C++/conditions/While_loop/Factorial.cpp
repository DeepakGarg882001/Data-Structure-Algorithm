#include<iostream>
using namespace std;
int main(){
  
  cout << "Hi, If you want to find the factorial of any number \n then Enter the value of N : ";
  int N;
  cin >>N;
  int i=1;
  int fac=1;
  string show ="";
  while(i<=N){
      fac=fac*i;
      show=show + to_string(i)+" * " ;
      i=i+1;
      

  }
  cout << N << "! = "<< show <<" = "<< fac ;

}