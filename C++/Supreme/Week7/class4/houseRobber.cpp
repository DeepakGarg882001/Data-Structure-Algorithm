// Leetcode Ques : 198

// You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

// Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.

 

// Example 1:

// Input: nums = [1,2,3,1]
// Output: 4
// Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
// Total amount you can rob = 1 + 3 = 4.
// Example 2:

// Input: nums = [2,7,9,3,1]
// Output: 12
// Explanation: Rob house 1 (money = 2), rob house 3 (money = 9) and rob house 5 (money = 1).
// Total amount you can rob = 2 + 9 + 1 = 12.
 
// example 3
// Input nums = [2,1,4,9]
// output : 11;


// Constraints:

// 1 <= nums.length <= 100
// 0 <= nums[i] <= 400 


#include<iostream>
#include<vector>
using namespace std;

int robeMoney( vector<int> &arr, int index, int sum ){
       
       // base case
       if(index>=arr.size()){
        return sum;
       }

      // kya toh mai include krunga 
        int ans1 = robeMoney(arr,index+2, sum+arr[index]);

      // kya toh mai include nhi krunga
       int ans2 = robeMoney(arr,index+1, sum);  
       
      // return max value
      return max(ans1,ans2);
}  

void  takeInput( vector<int> &arr){
     
     // run a loop
     for(int index=0; index<arr.size(); index++){
         cout<<"Enter the value of Arr["<<index<<"] : ";
         cin>> arr[index];

     }

}

int main(){
     
     int size;
     cout<<"Enter the size of Array : ";
     cin>> size;

     // create a vector
     vector<int> arr(size);

     // take input from user
     takeInput(arr);
      
     // store max sum;
     int maxSum = robeMoney(arr,0,0) ;
     
     // print ans
     cout<<"Max money robbed tonight is : "<<maxSum<<endl;

     return 0;
}