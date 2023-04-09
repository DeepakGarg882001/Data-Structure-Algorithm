// Leetcode Ques : 415

// solve using recursion

// Given two non-negative integers, num1 and num2 represented as string, return the sum of num1 and num2 as a string.

// You must solve the problem without using any built-in library for handling large integers (such as BigInteger). You must also not convert the inputs to integers directly.

 

// Example 1:

// Input: num1 = "11", num2 = "123"
// Output: "134"
// Example 2:

// Input: num1 = "456", num2 = "77"
// Output: "533"
// Example 3:

// Input: num1 = "0", num2 = "0"
// Output: "0"
 

// Constraints:

// 1 <= num1.length, num2.length <= 104
// num1 and num2 consist of only digits.
// num1 and num2 don't have any leading zeros except for the zero itself.


#include<iostream>
#include<string>
using namespace std;

void addStrings( string &num1 , int &index1 , string &num2 , int &index2 , int &carry , string &ans ){

          // base condition
          if( index1<0 && index2 <0 && carry ==0){
            return;
          }


        // processing
           int digit1 = index1<0? 0 : num1[index1]-'0';

           int digit2 = index2<0? 0 : num2[index2]-'0';

           // add these two digits
           int sum = carry + digit1 + digit2;

           // extract last digit of sum
           int lastDigit = sum%10;

           // update carry
           carry = sum/10;

           // update index1 and index2
           index1--;
           index2--;


        // recursive call
            addStrings( num1 , index1 , num2 , index2 , carry , ans );
        
        // update ans
          ans.push_back(lastDigit+'0');
}



int main(){

      // create string one
      string num1;

      // take input in string one
      cout<<"Enter the value of Num1 : ";
      cin>>num1;

      // create string 2nd
      string num2;

      // take input in string 2nd
      cout<<"Enter the value of Num2 : ";
      cin>>num2;

      // last index of num1
      int index1 = num1.size()-1;

      // last index of num2
      int index2 = num2.size()-1;
       
      // initial value of carry
      int carry = 0;

      // store ans;
      string ans;

      // call fn and these string
      addStrings( num1 , index1 , num2 , index2 , carry , ans );
       
     cout<<"ans is : "<<ans<<endl;

     return 0;
}