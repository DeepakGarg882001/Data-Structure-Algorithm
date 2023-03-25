// LeetCode Ques : 1910

// solve using recursion

// Given two strings s and part, perform the following operation on s until all occurrences of the substring part are removed:

// Find the leftmost occurrence of the substring part and remove it from s.
// Return s after removing all occurrences of part.

// A substring is a contiguous sequence of characters in a string.

 

// Example 1:

// Input: s = "daabcbaabcbc", part = "abc"
// Output: "dab"
// Explanation: The following operations are done:
// - s = "daabcbaabcbc", remove "abc" starting at index 2, so s = "dabaabcbc".
// - s = "dabaabcbc", remove "abc" starting at index 4, so s = "dababc".
// - s = "dababc", remove "abc" starting at index 3, so s = "dab".
// Now s has no occurrences of "abc".
// Example 2:

// Input: s = "axxxxyyyyb", part = "xy"
// Output: "ab"
// Explanation: The following operations are done:
// - s = "axxxxyyyyb", remove "xy" starting at index 4 so s = "axxxyyyb".
// - s = "axxxyyyb", remove "xy" starting at index 3 so s = "axxyyb".
// - s = "axxyyb", remove "xy" starting at index 2 so s = "axyb".
// - s = "axyb", remove "xy" starting at index 1 so s = "ab".
// Now s has no occurrences of "xy".
 

// Constraints:

// 1 <= s.length <= 1000
// 1 <= part.length <= 1000
// s​​​​​​ and part consists of lowercase English letters.



#include<iostream>
#include<string>
using namespace std;

void removeSubString( string &s , string &part ){
     
     // part find at index?
     int index = s.find(part);

     // base condition
      if(index==-1){
        return;
      }
        
     // size of part string
     int length = part.size();

     // processing 
      s.erase(index,length);

     // recursive call
       removeSubString(s,part);

}

int main(){
      
      // create main string s
      string s;

      cout <<"Enter the value of string s : ";
      cin>> s;

      // create a part string
      string part;

      cout <<"Enter the value of substring part : ";
      cin >> part;

      // remove subString
      removeSubString(s,part);

      // print string after removing
      cout<<"After removing the string is : "<<s<<endl;

      return 0;
}