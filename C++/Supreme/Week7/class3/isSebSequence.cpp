// LeetCode Ques : 392
// Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

// A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

 

// Example 1:

// Input: s = "abc", t = "ahbgdc"
// Output: true
// Example 2:

// Input: s = "axc", t = "ahbgdc"
// Output: false
 

// Constraints:

// 0 <= s.length <= 100
// 0 <= t.length <= 104
// s and t consist only of lowercase English letters.
 

// Follow up: Suppose there are lots of incoming s, say s1, s2, ..., sk where k >= 109, and you want to check one by one to see if t has its subsequence. In this scenario, how would you change your code?


#include<iostream>
#include<string>
using namespace std;

bool isSubSequence( string &s , string &t , int index , string &output ){

    // base condition
    if(output==s){
      return true;
    }
     
    if(index>=t.length()){
      return false;
    }

    //processing
    
     // kya toh mai add krunga
         output.push_back(t[index]);
         
         // recursive call
         bool ans1 = isSubSequence(s,t,index+1,output);
         
         // backtracking
         output.pop_back();
        

     // kya toh mai add nhi krunga
      bool ans2 = isSubSequence(s,t,index+1,output);
     
     return (ans1|ans2);
}

int main(){
      
      // create string s
      string s;
      
      cout<<"Enter the value of string s : ";
      cin>> s;

      // create string t
      string t;

      cout<<"Enter the value of string t : ";
      cin>>t;
      
      // start index
      int index =0;

      // output string
      string output;
      
      bool ans = isSubSequence(s,t,index,output);
      if(ans==true){
            cout<<"string s('"<<s<<"') is a subsequence of string t('"<<t<<"')"<<endl;
      }
      else{
           cout<<"string s('"<<s<<"') is NOT a subsequence of string t('"<<t<<"')"<<endl;
      }

 return 0;
}
 
