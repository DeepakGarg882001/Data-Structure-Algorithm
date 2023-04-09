// Leetcode Ques : 322

// You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.

// Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.

// You may assume that you have an infinite number of each kind of coin.

 

// Example 1:
// Input: coins = [1,2,5], amount = 11
// Output: 3
// Explanation: 11 = 5 + 5 + 1


// Example 2:
// Input: coins = [2], amount = 3
// Output: -1


// Example 3:
// Input: coins = [1], amount = 0
// Output: 0
 

// Constraints:

// 1 <= coins.length <= 12
// 1 <= coins[i] <= 231 - 1
// 0 <= amount <= 104


#include<iostream>
#include<vector>
using namespace std;

void findCoins( vector<int> &coins, int &target, int &minNum, int sum,int count){
       
       // base condition -> 1
        if(target==0){
            minNum = 0;
            return;
        }
        
       // base condition -> 2
        if(sum>=target){
           
           if(sum==target && count<minNum){
                minNum = count;
           }
           return;
        } 


       // processing
          
          // run a loop
          for(int index =0; index<coins.size(); index++ ){
              //recursive call
              findCoins(coins,target,minNum, sum+coins[index], count+1);
          }

}

void takeInput( vector<int> &coins ){
      
    // run a  loop
    for(int index=0; index<coins.size(); index++ ){
        cout<<"Enter the value of coin["<<index<<"] : ";
        cin>> coins[index];
    }

}

int main(){
        
        int size;
        cout<<"Enter the number of coins : ";
        cin>>size;

        // create a vector 
        vector<int> coins(size);

        // take input from user
        takeInput(coins);
        
        // target sum
        int target;
        cout<<"Enter the value of Target amount : ";
        cin>>target;
         
        // store min number of coins
        int minNum = INT_MAX;
       
        // find min number of coins
        findCoins(coins,target,minNum,0,0);
           
        // update minNum value for invalid ans
        if(minNum == INT_MAX){
            minNum =-1;
        }
        
        // print ans
        cout<<"Minimum number of Coins required to achive target("<<target<<") are : "<<minNum<<endl;

        return 0;
}
