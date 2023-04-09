// Leetcode Ques : 784

// Given a string s, you can transform every letter individually to be lowercase or uppercase to create another string.

// Return a list of all possible strings we could create. Return the output in any order.

 

// Example 1:

// Input: s = "a1b2"
// Output: ["a1b2","a1B2","A1b2","A1B2"]
// Example 2:

// Input: s = "3z4"
// Output: ["3z4","3Z4"]
 

// Constraints:

// 1 <= s.length <= 12
// s consists of lowercase English letters, uppercase English letters, and digits.


#include<iostream>
#include<vector>
#include<string>
using namespace std;

void printAns( vector<string> &ans ){
    
    // run a loop
    for(int index =0 ; index<ans.size(); index++){
        cout<<ans[index]<<"   ";
    }
    
    cout<<endl;
}

char checkChar( char ch ){
      
      int diff;
       
      // agar ye Number hai toh
      diff =  ch - '0';
      if( 0<=diff && diff<=9 ){
        return 'N';
      }

      // agar ye lower case hai toh
      diff =  ch - 'a';
      if( 0<=diff && diff<=25 ){
        return 'L';
      }
      
      diff = ch - 'A';
      // agar ye Upper case hai toh
      if( 0<=diff && diff<=25 ){
        return 'U';
      }

      return ' ';
}

void findString( string &s, vector<string> &ans , int index , string output ){
           
           // base case
              if(index>=s.length()){
                 // toh ek solution  mil gya
                 ans.push_back(output);

                 return;
              }


           //processing

             // check current char type
             char currentChar = checkChar(s[index]);
             
             //agar number ho toh
             if( currentChar=='N'){
                 
                 // recursive call
                 findString(s,ans,index+1,output+s[index]);

             }
             else if( currentChar =='L' ){
                 
                 // recursive call -> for lower case
                  findString(s,ans,index+1,output+s[index]);
                  
                  
                  char ch = 'A'- 'a' + s[index];
                 // lower ko Upper mai convert kr do
                  findString(s,ans,index+1,output+ch);
             }
             else if( currentChar =='U' ){
                 
                 // recursive call -> for Upper case
                  findString(s,ans,index+1,output+s[index]);
                  
                  
                  char ch = 'a'- 'A' + s[index];
                 // upper ko lower mai convert kr do
                  findString(s,ans,index+1,output+ch);
             }


}


int main(){
      
      // create a string
      string s;
      cout<<"Enter the value of string s : ";
      cin>>s;

      // create a vector of string type to store ans
      vector<string> ans;

      // find possible string
      findString(s,ans,0,"");

      // print ans
      printAns(ans);

      return 0;
}