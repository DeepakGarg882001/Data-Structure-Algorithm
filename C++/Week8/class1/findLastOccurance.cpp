// solve using REcursion

// Given a string S  and a character X, the task is to find the last index (0 based indexing) of X in string S. If no index found then the answer will be -1.


// Example 1:

// Input: S = "Geeks", P = 'e'
// Output: 2
// Explanation: Last index of 'e' 
// is 2.
// Example 2:

// Input: S = "okiyh", P = 'z'
// Output: -1
// Explanation: There is no character
// as 'z'.

// Your Task:  
// You don't need to read input or print anything. Your task is to complete the function LastIndex() which takes the string s and character p as inputs and returns the answer.


// Expected Time Complexity: O(|S|)
// Expected Auxiliary Space: O(1)


// Constraints:
// 1 ≤ |S| ≤ 105
// S and P contain only lower and upper case alphabets.


#include<iostream>
#include<string>
using namespace std;

int findLastOccurance( string &s , char &target , int index ){
        
        // base condition
         if(index<0){
            return -1;
         }

         // processing
         if(s[index]==target){
            return index;
         }
      
         // recursive call
         return findLastOccurance(s,target,index-1);
}

int main(){
      
      // create a string
      string s;
      cout<<"Enter the value of string S : ";
      cin>>s;

      // store target char
      char target;
      cout <<"Enter the value of Target Charcter : ";
      cin>> target;
      
      // last index of string
      int index = s.size();

      // find last occurance of target
      int indexIs = findLastOccurance(s,target,index-1);

      if(indexIs == -1){
        cout<<"Target Character('"<<target<<"') is Not Found in the string ("<<s<<")"<<endl;
      }else{
        cout<<"Target Character('"<<target<<"') is Found in the string ("<<s<<") at index : "<<indexIs<<endl;
      }
 
 return 0;
}