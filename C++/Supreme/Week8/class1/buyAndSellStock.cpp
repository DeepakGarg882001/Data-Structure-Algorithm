// Leetcode Ques : 121 

// solve using recursion

// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

 

// Example 1:

// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
// Example 2:

// Input: prices = [7,6,4,3,1]
// Output: 0
// Explanation: In this case, no transactions are done and the max profit = 0.
 

// Constraints:

// 1 <= prices.length <= 105
// 0 <= prices[i] <= 104



#include<iostream>
#include<vector>
using namespace std;

void findProfit( vector<int> &arr , int &maxProfit , int &buyValue, int index){

    // base case
    if(index>=arr.size()){
        return;
    }          
     

    // processing

    // step 1: agar arr[index] choti value hai buyValue se toh hum stock kharide ge
    if(arr[index]<buyValue){
         
         buyValue = arr[index];
    }

    // step 2 : sell stock
    if(arr[index]-buyValue>maxProfit){
        maxProfit = arr[index]-buyValue;
    }
   

    // recursive call
    findProfit(arr,maxProfit,buyValue,index+1);

}

void takeInput( vector<int> &arr ){

    // run a loop
    for(int index=0; index<arr.size(); index++ ){
        cout<<"Enter the value of Arr["<<index<<"] : ";
        cin >> arr[index];
    }

}

int main(){
         
      // store size
      int size;

      cout<<"Enter the size of Array : ";
      cin>>size;

      // create a vector
      vector<int> arr(size);
        
      // take input from user
      takeInput(arr);

      // store max profit
      int maxProfit = INT_MIN;

      // store min buy value
      int buyValue = INT_MAX;

      // find max Profit
      findProfit(arr,maxProfit,buyValue,0);

      // print ans
      cout<<"Max Profit is : "<<maxProfit<<endl;

      return 0;
}