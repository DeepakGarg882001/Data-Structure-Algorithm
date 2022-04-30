#include<iostream>
using namespace std;

int main(){
  
  cout<< "Upto How many digit you want the Fabiconic Series : ";
  int N;
  cin>>N;

  int a=0;
  int b=1;
  cout<<a<<" "<<b<<" ";
  int i=2;
  while(i<=N){
    int c;
    c=a+b;
    cout<< c<<" ";
    a=b;
    b=c;
    i++;
  }

  


}