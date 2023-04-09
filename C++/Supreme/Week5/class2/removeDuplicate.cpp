// Leetcode Ques : 1047

// You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.

// We repeatedly make duplicate removals on s until we no longer can.

// Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.

 

// Example 1:

// Input: s = "abbaca"
// Output: "ca"
// Explanation: 
// For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".



// Example 2:

// Input: s = "azxxzy"
// Output: "ay"


// Constraints:

// 1 <= s.length <= 105
// s consists of lowercase English letters.


#include<iostream>
#include<string>
using namespace std;

string removeDuplicates( string name ){
    
    // string ki length
    int length= name.length();
      
    // iteration index
    int index = 0;

    // ek ans string bna le new wo bi empty
    string ans ="";

    while(index<length){
          
          // agar ans string empty hai toh 
          if( ans.length()==0 ){
            ans.push_back(name[index]);
          }
          // agar ans string ka last char same hai, given string ka index char se toh
          else if(ans[ans.length()-1] == name[index]){
            ans.pop_back();
          }
          // agar same nhi hai toh add krr de
          else{
            ans.push_back(name[index]);
          }
         
         // at the last index ko aage bhada de
         index++;
    }

    return ans;
    
}

int main(){
     
     string name;
     cout <<"Enter the value of string : ";
     cin>>name;
            


     string result= removeDuplicates(name);
     cout <<"Before Removing : "<<name<<endl;
     cout <<"After removing Duplicates : "<<result<<endl;
 
 return 0;

}