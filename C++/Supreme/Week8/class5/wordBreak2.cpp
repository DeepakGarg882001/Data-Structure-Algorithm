// Leetcode Ques : 140


// Given a string s and a dictionary of strings wordDict, add spaces in s to construct a sentence where each word is a valid dictionary word. Return all such possible sentences in any order.

// Note that the same word in the dictionary may be reused multiple times in the segmentation.

 

// Example 1:

// Input: s = "catsanddog", wordDict = ["cat","cats","and","sand","dog"]
// Output: ["cats and dog","cat sand dog"]
// Example 2:

// Input: s = "pineapplepenapple", wordDict = ["apple","pen","applepen","pine","pineapple"]
// Output: ["pine apple pen apple","pineapple pen apple","pine applepen apple"]
// Explanation: Note that you are allowed to reuse a dictionary word.
// Example 3:

// Input: s = "catsandog", wordDict = ["cats","dog","sand","and","cat"]
// Output: []
 

// Constraints:

// 1 <= s.length <= 20
// 1 <= wordDict.length <= 1000
// 1 <= wordDict[i].length <= 10
// s and wordDict[i] consist of only lowercase English letters.
// All the strings of wordDict are unique.


#include<iostream>
#include<vector>
#include<string>
using namespace std;

void printArray( vector<string> &ans ){
      
      // run a loop
      for(int index=0; index<ans.size(); index++ ){
       cout<<ans[index]<<"        ";
      } 
      cout<<endl;

}

 void findSegmentation( string &s, vector<string> &wordDict, vector<string> &ans, string output, string sentence){
          
          // base case
          if(output==s){
            ans.push_back(sentence);
          }
          
          // condition
          if(output.length()>=s.length()){
            return;
          }

          // processing
          for(int index=0; index<wordDict.size(); index++ ){
                
                string temp = sentence==""? wordDict[index] : " "+wordDict[index];

              // recursive call
              findSegmentation(s,wordDict,ans,output+wordDict[index], sentence+temp);

          }

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

    cout<<"Enter the value of stirng s : ";
    cin>>s;
    
    // store size
    int size;
    cout<<"Enter the size of Dictionary : ";
    cin>>size;

    // create a vector of string type 
    vector<string> wordDict(size);

    // take input from user
    takeInput(wordDict);   
    
    // create a vector of string type to store ans
    vector<string> ans;

    // find segmentation
    findSegmentation(s,wordDict,ans, "","");
      
    // print ans
    printArray(ans);

    return 0;
}