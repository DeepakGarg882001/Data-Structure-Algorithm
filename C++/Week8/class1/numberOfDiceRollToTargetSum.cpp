// Leetcode Ques : 1155

// solve using recursion

// You have n dice, and each die has k faces numbered from 1 to k.

// Given three integers n, k, and target, return the number of possible ways (out of the kn total ways) to roll the dice, so the sum of the face-up numbers equals target. Since the answer may be too large, return it modulo 109 + 7.

 

// Example 1:

// Input: n = 1, k = 6, target = 3
// Output: 1
// Explanation: You throw one die with 6 faces.
// There is only one way to get a sum of 3.



// Example 2:

// Input: n = 2, k = 6, target = 7
// Output: 6
// Explanation: You throw two dice, each with 6 faces.
// There are 6 ways to get a sum of 7: 1+6, 2+5, 3+4, 4+3, 5+2, 6+1.


// Example 3:

// Input: n = 30, k = 30, target = 500
// Output: 222616187
// Explanation: The answer must be returned modulo 109 + 7.
 

// Constraints:

// 1 <= n, k <= 30
// 1 <= target <= 1000


#include<iostream>
using namespace std;

void findTotalWays( int n , int &face, int &target , int &count, int sum){

    // base case
      if(n<=0){
           
           if(sum==target){
            count++;
           }
         
         return;

      }

    // processing
      
      for(int index=1; index<=face; index++){
          
          // recursive call
          findTotalWays(n-1, face , target, count, sum+index);

      }


}

int main(){
        
        // number of dices
        int n;
        cout<<"Enter the value of Number of Dices : ";
        cin>>n;

        // number of face
        int face;
        cout<<"Enter the Number of faces at each dice : ";
        cin>>face;

        // target sum
        int target;
        cout<<"Enter the value of target sum : ";
        cin>>target;

        // calculate number way to through
        int ways = 0;

        findTotalWays(n, face, target,ways,0);

        cout<<"Total Number of ways to achive target("<<target<<") are : "<<ways<<endl;

        return 0;
}