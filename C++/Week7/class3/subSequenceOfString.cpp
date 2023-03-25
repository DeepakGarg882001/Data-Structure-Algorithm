// You are given a String (s) , Find out the number of SubSequence that can be formed by the string s
//A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).
// eg: s = "abc"
// output: "" , a , b , c , ab , ac , bc , abc
//          8 subSequence can be formed



#include<iostream>
#include<string>
using namespace std;

void subSequence( string &s , int &count , int index , string &ans){
          
          //  base condition
          if(s[index]=='\0'){
             count++;
             cout<<ans<<" ";
            return;
          }

          // processing
          
          // kya toh mai add krunga 
             ans.push_back(s[index]);
             subSequence(s,count,index+1,ans);
             
          // kya toh mai add nhi krunga
             ans.pop_back();
             subSequence(s,count,index+1,ans);

} 

int main(){
     
     string s;
     cout<<"Enter the value of String : ";
     cin >>s;

     // make a count to calculate SubSequenc
     int count = 0 ;
      
      // ans
      string ans;

     // findSubSequence
     subSequence(s,count,0,ans);

      cout<<endl<<"Number of subSequence are : "<<count<<endl;

return 0;
}