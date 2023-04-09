// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

#include<iostream>
#include<math.h>
using namespace std;

int main(){
  cout<< "Please enter the value of N ,\n which you want to reverse : ";
  int N;
  cin >>N;

      int reverse =0;
      int j=N;
      while(j != 0){
          int digit = j % 10;
          
      if(reverse <(INT_MIN/100) || reverse >(INT_MAX/10) ){
        cout<<"The reverse of "<<N<<" is : "<<reverse<<endl;
      return 0;
       }
       reverse = (reverse *10) +digit;
          j=j/10;
         
      
   }
       
    
      return reverse;
  
      

}
// -2143847412
// -2147483412