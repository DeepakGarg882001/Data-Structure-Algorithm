// Leetcode Ques : 121
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

int findMaxProfit( vector<int>& arr){

    //minimun element
    int min= INT_MAX;

    // maximum element
    int max = INT_MIN;

    // maxProfit
    int maxProfit =0;


    // run a loop
    for(int index=0; index<arr.size(); index++ ){
         
         if(arr[index]<min){
            min= arr[index];
            max=INT_MIN;
         }
         else if(arr[index]>max){
             
             if(arr[index]-min>maxProfit){
                maxProfit = arr[index]-min;
                max= arr[index];
             }

         }

    }
    

    return maxProfit;
}

void takeInput( vector<int> &arr ){

     // run a loop
     for(int i =0; i<arr.size(); i++){
        cout<<"Enter the value of arr[ "<<i<<" ] : ";
        cin>>arr[i];
     }

}

int main(){
    
    int size;
    cout<<"Enter the size of Array : ";
    cin>>size;
    
    //create a vector of this size
    vector<int> arr(size);

    //take input from user
    takeInput(arr);


    int maxProfit = findMaxProfit(arr);

    cout <<"<Max Profit is : "<<maxProfit<<endl;

    return 0;

}