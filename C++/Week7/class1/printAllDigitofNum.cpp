// You are given a Integer number (N), Print all its digits
// eg: N = 6938
// output: 6 9 3 8


#include<iostream>
using namespace std;

void printDigit( int &num ){
   
     // base Condition
     if(num==0){
        return;
     }

     // processing
     int digit = num%10;

     num = num/10;

     // recursive call
     printDigit(num);

     // Printing digit
      cout << digit<<" ";


}

int main(){
     
     int num;
     cout <<" Enter the value of Number : ";
     cin >> num;

     printDigit(num);

return 0;
}