// Write a Alorithm which prints the all digits of an integer

#include<iostream>
using namespace std;

void printDigits(int num){
      
      while(num!=0){
        int digit=num%10;
        num= num/10;
        cout<<" " <<digit<<" ";
      }
     

}

int main(){

    int num;
    cout<<"Enter the value of Number : ";
    cin>> num;

    printDigits(num);

    return 0;
}