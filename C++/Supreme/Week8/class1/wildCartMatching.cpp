// Leetcode Ques : 44 

// solve using recursion

// Given an input string (s) and a pattern (p), implement wildcard pattern matching with support for '?' and '*' where:

// '?' Matches any single character.
// '*' Matches any sequence of characters (including the empty sequence).
// The matching should cover the entire input string (not partial).

 

// Example 1:

// Input: s = "aa", p = "a"
// Output: false
// Explanation: "a" does not match the entire string "aa".
// Example 2:

// Input: s = "aa", p = "*"
// Output: true
// Explanation: '*' matches any sequence.
// Example 3:

// Input: s = "cb", p = "?a"
// Output: false
// Explanation: '?' matches 'c', but the second letter is 'a', which does not match 'b'.
 
// Input: s = "adceb", p =  "*a*b"
// output: true

// Constraints:

// 0 <= s.length, p.length <= 2000
// s contains only lowercase English letters.
// p contains only lowercase English letters, '?' or '*'.


#include<iostream>
#include<string>
using namespace std;
   
bool matchPattern( string &s , int index1 , string &p , int index2 ){
       
       // base condition 1
       if( index1>=s.length() && index2>=p.length() ){
        return true;
       }
       
       // base condition 2
       if( index1>=s.length() && index2 < p.length()){
              
              // check all remaining char are * or not
              while(index2<p.length()){
                    if(p[index2]!='*'){
                        return false;
                    }
                    index2++;
               
              }
              
              return true;
       }

       // base condition 3
       if( index1>=s.length() && p[index2] !='*' || index2>=p.length() ){
           return false;
       }


       // processing
        
       // condition 1
       if( ( p[index2]=='?' ) || ( index1<s.length() &&  s[index1]==p[index2] ) ){
         return matchPattern( s, index1+1, p, index2+1 );
       }

      

       // condition 2
       if(  p[index2]=='*'  ){
             
             bool ans = false;

             // kya toh * -> Null char hai
              ans = ans | matchPattern( s, index1, p, index2+1 );
            

             // kya toh * -> koi char include krega
             ans = ans | matchPattern( s, index1+1, p, index2 );

             // return ans
             return ans;
       }
       
    return false;
}
int main(){
   
   // create string s
   string s;

   cout<<"Enter the value of string s : ";
   cin>>s;

   // create string p
   string p;

   cout<<"Enter the value of string p : ";
   cin>>p;

   // check is pattern match or not
   bool isMatched = matchPattern(s,0,p,0);

   if(isMatched){
    cout<<"Pattern Matched"<<endl;
   }
   else{
    cout <<"Pattern Did Not Matched"<<endl;
   }

return 0;
}