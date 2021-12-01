#include<iostream>
using namespace std;

int main(){
  
  cout << "Please Choose any one of them \n Left Shift(L) , Right Shift(R) :";
  char N;
  cin >>N;
  cout << "Please Enter the value of a : ";
  int a;
  cin >>a;
  cout << "How many bits do you want to Shift : ";
  int bit;
  cin>> bit;


  cout << "So ,the result will be : "<< endl;

  if(N =='L'){
    cout<<a<<" << "<< bit <<" = " << (a<<bit) << "  Left Shifting";
  }else{
    cout<<a<<" >> "<< bit <<" = " << (a>>bit) << "  Right Shifting";
  }


}