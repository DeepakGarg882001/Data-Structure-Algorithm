// Leetcode Ques : 279

// solve using recursion

// Given an integer n, return the least number of perfect square numbers that sum to n.

// A perfect square is an integer that is the square of an integer; in other words, it is the product of some integer with itself. For example, 1, 4, 9, and 16 are perfect squares while 3 and 11 are not.

 

// Example 1:

// Input: n = 12
// Output: 3
// Explanation: 12 = 4 + 4 + 4.
// Example 2:

// Input: n = 13
// Output: 2
// Explanation: 13 = 4 + 9.
 

// Constraints:

// 1 <= n <= 104


#include<iostream>
#include<math.h>
using namespace std;

void solve( int &num, int &mini, int sum ,int count){
     
     // base condition
     if(sum>num){
        return;
     }

     // found solution
     if(sum==num && count<mini){
          mini = count;
          return;
     }
    
     //processing
     int maxNum = sqrt(num);

     // run a loop
     for(int val=1; val<=maxNum; val++){
         
         // recursive call
         solve(num, mini, sum+(val*val), count+1);

     }
}

int main(){
     
     // take n
     int num ;

     cout<<"Enter the value of Number : ";
     cin>>num;


     // store minimum count
     int mini=INT_MAX;

     // calculate counts
     solve(num, mini, 0 ,0);

     // if no solution
     if(mini==INT_MAX){
        mini = -1;
     }

     cout<<"Solution are : "<<mini<<endl;

     return 0;
}