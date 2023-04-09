//  Leetcode Ques : 567

// 
// Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

// In other words, return true if one of s1's permutations is the substring of s2.

 

// Example 1:

// Input: s1 = "ab", s2 = "eidbaooo"
// Output: true
// Explanation: s2 contains one permutation of s1 ("ba").
// Example 2:

// Input: s1 = "ab", s2 = "eidboaoo"
// Output: false
 

// Constraints:

// 1 <= s1.length, s2.length <= 104
// s1 and s2 consist of lowercase English letters.


#include<iostream>
#include<string>
using namespace std;

bool isPermPart( string &s1, string &s2, int index){
       
       // base condition
         if(index>=s1.length()){
             // toh ek permutation mil gai
              int position = s2.find(s1);
              
              if(position==-1){
                return false;
              }

              return true;
         }

       // processing
             
            // store ans
            bool ans = false;
              
           // run a loop
           for(int i =index; i<s1.length(); i++){
                  
                  // swap s1[i] with s1[index]
                  swap(s1[i], s1[index]);

                  // recursive call
                  ans = ans | isPermPart(s1, s2, index+1);

                  // backtrack
                  swap(s1[i], s1[index]);

           }

     return ans;
}

int main(){
     
     // create a string s1
     string s1;

     cout<<"Enter the value of string s1 : ";
     cin>>s1;

     // create a string s2
     string s2;

     cout<<"Enter the value of string s2 : ";
     cin>>s2;
      
     if( isPermPart(s1,s2,0) ){
        cout<<"Yes, s1 Permutation is a substring of s2"<<endl;
     }else{
        cout<<"No, s1 is not a part of s2 substring"<<endl;
     }

     return 0;
}