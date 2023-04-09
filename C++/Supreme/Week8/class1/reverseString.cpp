// Leetcode Ques : 344

// solve using recursion

// Write a function that reverses a string. The input string is given as an array of characters s.

// You must do this by modifying the input array in-place with O(1) extra memory.

 

// Example 1:

// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]
// Example 2:

// Input: s = ["H","a","n","n","a","h"]
// Output: ["h","a","n","n","a","H"]
 

// Constraints:

// 1 <= s.length <= 105
// s[i] is a printable ascii character.


#include<iostream>
#include<vector>
using namespace std;

void printString( vector<char> &str ){
    
    for(int index=0; index<str.size(); index++){
      cout<<str[index];
    } 
    cout <<endl;

}

void reverseString( vector<char> &str , int start , int end ){
     
     // base condition
     if(start>=end){
        return;
     }

     // processing
     swap(str[start],str[end]);

     // recursive call
     reverseString(str,start+1, end-1 );
}

void takeInput( vector<char> &str , int index ){
       
       // base condition
       if(index<0){
        return;
       }
       
       // recursive call
       takeInput(str, index-1);

       // processing
       cout<<"Enter the value of Char["<<index<<"] : ";
       cin>> str[index];

}

int main(){
     
     int size;
     cout<<"Enter the size of character Array : ";
     cin>> size;

     // create a char vector
     vector<char> str(size);

     // takeInput from user
     takeInput(str,size-1);
      
      // store starting and ending index
      int start =0;
      int end = size-1;

     // reverse the string
     reverseString(str,start,end);
      
      // print string
      printString(str);

return 0;
}