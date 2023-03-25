// Recursive function to check if a string is palindrome

// solve using recursion

// Given a string, write a recursive function that checks if the given string is a palindrome, else, not a palindrome.

// Examples: 

// Input : malayalam
// Output : Yes
// Reverse of malayalam is also
// malayalam.

// Input : max
// Output : No
// Reverse of max is not max. 


#include<iostream>
#include<string>
using namespace std;

bool checkPalindrome( string &s , int start , int end ){

    // base condition
    if(start>=end){
        return true;
    }
   
    // processing
    if(s[start]!=s[end]){
        return false;
    }
  
   // recursive call
   return checkPalindrome(s, start+1 , end-1 );
}

int main(){
     
     // create a string
     string s;

     cout<<"Enter the value of String : ";
     cin>> s;
      
     // store starting and ending index
     int start = 0;
     int end  = s.size()-1;

     //check palindrome
     bool isPalindrome = checkPalindrome(s,start,end);

     if(isPalindrome){
        cout <<"Given string "<<s<<" is a Palindrome"<<endl;
     }else{
        cout <<"Given string "<<s<<" is Not a Palindrome"<<endl;
     }
 
return 0;
}