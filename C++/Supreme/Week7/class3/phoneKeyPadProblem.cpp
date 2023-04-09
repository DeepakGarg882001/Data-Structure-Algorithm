// Leetcode Ques : 17

// Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

// A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.


 

// Example 1:

// Input: digits = "23"
// Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
// Example 2:

// Input: digits = ""
// Output: []
// Example 3:

// Input: digits = "2"
// Output: ["a","b","c"]
 

// Constraints:

// 0 <= digits.length <= 4
// digits[i] is a digit in the range ['2', '9'].



#include<iostream>
#include<string>
#include<vector>
using namespace std;

void printAns( vector<string> &ans){
     
     // run loop
     for(int index =0; index<ans.size(); index++){
        cout<<ans[index]<<" , ";
     }

     cout<<endl;
     
}

void findCombination( vector<string> &str , vector<string> &ans , string &digits , string &output , int index ){
     
     // base condition
     if(index>=digits.length()){
        ans.push_back(output);
        return;
     }

     // processing

     int digit = digits[index]-'0';
      
     string strValue = str[digit];
     // run a loop 
     for(int i=0;i<strValue.length(); i++){
           
           char ch = strValue[i];

           // add to output
           output.push_back(ch);
           //recursive call
           findCombination( str, ans, digits,output, index+1);
           // backtrack
           output.pop_back();
     }



}

int main(){
      
      // store input digits
      string digits;

      cout<<"Enter the value of Input Digit : ";
      cin>>digits;

      // create a vector->string to store key string
      vector<string> str(10);
      // mapping the string values
      str[2] = "abc";
      str[3] = "def";
      str[4] = "ghi";
      str[5] = "jkl";
      str[6] = "mno";
      str[7] = "pqrs";
      str[8] = "tuv";
      str[9] = "wxyz";

      // create a vector to store ans
      vector<string> ans;
      
      // starting index
      int index =0;

      // store output
      string output;

      // find all the combination with respect to input
      findCombination(str,ans,digits,output,index);
      
      // print all stored combination
      printAns(ans);

      return 0;
}