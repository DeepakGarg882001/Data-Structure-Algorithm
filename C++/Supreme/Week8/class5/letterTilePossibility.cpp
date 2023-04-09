// LeetCode Ques : 1079

// You have n  tiles, where each tile has one letter tiles[i] printed on it.

// Return the number of possible non-empty sequences of letters you can make using the letters printed on those tiles.

 

// Example 1:

// Input: tiles = "AAB"
// Output: 8
// Explanation: The possible sequences are "A", "B", "AA", "AB", "BA", "AAB", "ABA", "BAA".
// Example 2:

// Input: tiles = "AAABBC"
// Output: 188
// Example 3:

// Input: tiles = "V"
// Output: 1
 

// Constraints:

// 1 <= tiles.length <= 7
// tiles consists of uppercase English letters.


#include<iostream>
#include<vector>
#include<string>
using namespace std;

void printSequence( vector<string> &ans ){
      // run a loop
          for(int index=0; index<ans.size(); index++){
              cout<<ans[index]<<"  ";
          }

          cout<<endl;

}


bool isSolution( vector<string> &ans, string &output){
          
          // check is output empty or not
          if(output==""){
            return false;
          }

          // run a loop
          for(int index=0; index<ans.size(); index++){
              if(ans[index]==output){
                return false;
              }
          }

          return true; 
}

void findSequence( string tiles, vector<string> &ans, string output){
         
     
      // procesing 

        // kya ye output string possible solution hai?
        if(isSolution(ans,output)){
            ans.push_back(output);
        }
        
        // ab output mai ek char add krr do
        for(int i= 0; i<tiles.length(); i++){

              // store tiles as temp
              string temp = tiles;
              temp.erase(i,1);
              
              // recursive call
              findSequence(temp,ans,output+tiles[i]);

        }

}


int main(){
     
     // create a string to store tiles
     string tiles;

     cout<<"Enter the letters for tiles : ";
     cin>>tiles;

     // create a vector of string type to  store ans
     vector<string> ans;

     // find possible sequence
     findSequence(tiles,ans,"");
     
     // print sequence
     printSequence(ans);

     // print ans count
     cout<<ans.size()<<endl;

return 0;
}

