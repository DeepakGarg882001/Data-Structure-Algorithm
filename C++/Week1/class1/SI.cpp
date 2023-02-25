// write a program to calculate Simple Interest

#include<iostream>
using namespace std;

int main(){
  
  int SI,p,r,t;

  cout << "Enter the amount of rupees which you want : ";
  cin >>p;

  cout << "Enter the value of Interest Rate : ";
  cin >> r;

  cout <<"Enter the Number of Months for this loan : ";
  cin >>t;

  cout << "Your final Price will be "<< ((p*r*t)/(100*12))<<endl;
 

}