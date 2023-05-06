// GFG : First non-repeating character in a stream

// Given an input stream of A of n characters consisting only of lower case alphabets.
// The task is to find the first non repeating character, each time a character is inserted to the stream.
// If there is no such character then append '#' to the answer.

// Example 1:

// Input: A = "aabc"
// Output: "a#bb"

// Explanation: For every character first non repeating character is as follow-
// "a" - first non-repeating character is 'a'
// "aa" - no non-repeating character so '#'
// "aab" - first non-repeating character is 'b'
// "aabc" - first non-repeating character is 'b'

// Example 2:

// Input: A = "zz"
// Output: "z#"

// Explanation: For every character first non repeating character is as follow-
// "z" - first non-repeating character is 'z'
// "zz" - no non-repeating character so '#'

// Your Task:
// You don't need to read or print anything.
// Your task is to complete the function FirstNonRepeating() which takes A as input parameter and returns a string after processing the input stream.

// Expected Time Complexity: O(26 * n)
// Expected Space Complexity: O(26)

// Constraints:
// 1 <= n <= 105




#include<iostream>
#include<string>
#include<queue>
using namespace std;

void firstNoneRepeating( string &A, int freq[], string &ans){

    // create a queue to track characters
    queue<char> q;

    // run a loop
    for(int index=0; index<A.length(); index++){
        
         // extract character
         char ch = A[index];

         // increase frequency
         freq[ ch-'a']++;

         // now push it into queue
         q.push(ch);

         // remove duplicate characters
         while( !q.empty() && (freq[q.front()-'a'] >1 )){
            q.pop();
         }

         // update ans
         if(q.empty()){
            ans.push_back('#');
         }else{
            ans.push_back(q.front());
         }

    }

}

int main(){
     
     // take input string
     string A;
     cout<<"Enter the stream of Characters : ";
     cin>>A;

     // store ans into string
     string ans;

     // store frequency of Alphabets
     int freq[26] = {0};

     // find first non repeating char
     firstNoneRepeating(A, freq, ans);

     // print ans
     cout<<"Output : "<<ans<<endl;

     return 0;
}