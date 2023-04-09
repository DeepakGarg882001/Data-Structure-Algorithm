// write a Algorithm by which we can reverse an Integer digits

#include<iostream>
using namespace std;

int convertIntoReverse(int num){

    int reverseValue=0;
     
     while(num!=0){
        int digit = num%10;
        reverseValue = (reverseValue*10) + digit;
        num = num/10;
     }

     return reverseValue;


}

int main(){
  
  int num;
  cout <<"Enter the value of a Number : ";
  cin>>num;

  int reverseValueIs = convertIntoReverse(num);
  cout<<"Reverse value of "<<num<<" is : "<<reverseValueIs<<endl;

}