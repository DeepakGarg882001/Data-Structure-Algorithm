// You are Given a string s, print all its possile Permutation

// eg :  s = "abc"
// output :  "abc" , "acb" , "bac" , "bca" , "cab" , "cba"
//          total 6 comination occurs


#include<iostream>
#include<string>
#include<vector>
using namespace std;

void printAns( vector<string> &ans ){
      
      // run a loop
      for(int index=0; index<ans.size(); index++ ){
        cout<<ans[index]<<"  ,  ";
      }

      cout<<endl;

}

void findPerm( string &s, vector<string> &ans, int index){
        
        // base case
         if(index>=s.length()){
            // toh ek solution mil gya
            ans.push_back(s);

            return;
         }

        // processing
             
          // run a loop
          for( int i=index; i<s.length(); i++ ){
             
             // swap s[i] with s[index];
             swap(s[i],s[index]);

             // recursive call
             findPerm(s,ans,index+1);

             // backtrack
             swap(s[i],s[index]);

          }


}

int main(){
        
     // create a string s
     string s;

     cout<<"Enter the value of string s : ";
     cin>>s;

     // create a vector of string type to store ans
     vector<string> ans;

     //find permutation
     findPerm(s,ans,0);
      
     cout<<"Total Number of Permutation are : "<<ans.size()<<endl;

     // print ans
     printAns(ans);

     return 0;
}