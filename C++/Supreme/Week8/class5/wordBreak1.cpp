// Leetcode Ques : 139

// Given a string s and a dictionary of strings wordDict, return true if s can be segmented into a space-separated sequence of one or more dictionary words.

// Note that the same word in the dictionary may be reused multiple times in the segmentation.

 

// Example 1:

// Input: s = "leetcode", wordDict = ["leet","code"]
// Output: true
// Explanation: Return true because "leetcode" can be segmented as "leet code".
// Example 2:

// Input: s = "applepenapple", wordDict = ["apple","pen"]
// Output: true
// Explanation: Return true because "applepenapple" can be segmented as "apple pen apple".
// Note that you are allowed to reuse a dictionary word.
// Example 3:

// Input: s = "catsandog", wordDict = ["cats","dog","sand","and","cat"]
// Output: false
 

// Constraints:

// 1 <= s.length <= 300
// 1 <= wordDict.length <= 1000
// 1 <= wordDict[i].length <= 20
// s and wordDict[i] consist of only lowercase English letters.
// All the strings of wordDict are unique.


#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool isSegmented( string &s, vector<string> &wordDict, string output){
      
      // base case
        if(output==s){
            return true;
        }

      // condition
        if(output.length()>=s.length()){
            return false;
        }

      // processing
         
         // store ans
         bool ans = false;

         for(int index=0; index<wordDict.size(); index++ ){
                
                // kya toh mai ye word include krunga 

                // recursive call
                ans = ans | isSegmented( s , wordDict , output+wordDict[index] );
         }
       
       return ans;
}

void takeInput( vector<string> &wordDict){
      
      // run a loop
      for(int index=0; index<wordDict.size(); index++ ){
         cout<<"Enter the value of Dictionary["<<index<<"] : ";
         cin>>wordDict[index];
      }

}

int main(){

        // create a string s
        string s;

        cout<<"Enter the value of string s : ";
        cin>>s;
         
        // store size of dictonary
        int size;
        cout<<"Enter the size of Dictionary : ";
        cin>>size;

        // create a vector of string type
        vector<string> wordDict(size);

        // takeinput from user
        takeInput(wordDict);

        // check is word segmented by dictionary word or not
        bool ans = isSegmented(s, wordDict, "");

        // print ans
        cout<<ans<<endl;

        return 0;    
}