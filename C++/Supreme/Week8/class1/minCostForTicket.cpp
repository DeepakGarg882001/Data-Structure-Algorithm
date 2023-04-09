// LeetCode Ques : 983

// solve using recursion

// You have planned some train traveling one year in advance. The days of the year in which you will travel are given as an integer array days. Each day is an integer from 1 to 365.

// Train tickets are sold in three different ways:

// a 1-day pass is sold for costs[0] dollars,
// a 7-day pass is sold for costs[1] dollars, and
// a 30-day pass is sold for costs[2] dollars.
// The passes allow that many days of consecutive travel.

// For example, if we get a 7-day pass on day 2, then we can travel for 7 days: 2, 3, 4, 5, 6, 7, and 8.
// Return the minimum number of dollars you need to travel every day in the given list of days.


// Example 1:

// Input: days = [1,4,6,7,8,20], costs = [2,7,15]
// Output: 11
// Explanation: For example, here is one way to buy passes that lets you travel your travel plan:
// On day 1, you bought a 1-day pass for costs[0] = $2, which covered day 1.
// On day 3, you bought a 7-day pass for costs[1] = $7, which covered days 3, 4, ..., 9.
// On day 20, you bought a 1-day pass for costs[0] = $2, which covered day 20.
// In total, you spent $11 and covered all the days of your travel.


// Example 2:

// Input: days = [1,2,3,4,5,6,7,8,9,10,30,31], costs = [2,7,15]
// Output: 17
// Explanation: For example, here is one way to buy passes that lets you travel your travel plan:
// On day 1, you bought a 30-day pass for costs[2] = $15 which covered days 1, 2, ..., 30.
// On day 31, you bought a 1-day pass for costs[0] = $2 which covered day 31.
// In total, you spent $17 and covered all the days of your travel.
 

// Constraints:

// 1 <= days.length <= 365
// 1 <= days[i] <= 365
// days is in strictly increasing order.
// costs.length == 3
// 1 <= costs[i] <= 1000


#include<iostream>
#include<vector>
using namespace std;


int findMinTicketCost( vector<int> &arr , int index , int cost , vector<int> &fair ){
        
        // base case
        if(index>=arr.size()){
            return cost;
        }

        // processing

        // kya toh mai 1 day ka pass lunga
        int ans1 = findMinTicketCost( arr , index+1 , cost , fair ) + fair[0];
      
        // kya toh mai 7 day pass lunga
           int tempIndex = index;

           // find last index of 7 day
           while(arr[tempIndex]<=arr[index]+6 && tempIndex<arr.size()){
               tempIndex++;
           }

           int ans2 = findMinTicketCost( arr , tempIndex , cost , fair ) + fair[1];

        // kya toh mai 30 days ka pass lunga
            tempIndex = index;

            // find last index of 30 days
             while(arr[tempIndex]<=arr[index]+29 && tempIndex<arr.size()){
               tempIndex++;
             }
            
            int ans3 = findMinTicketCost( arr , tempIndex , cost , fair ) + fair[2];
        
         
         //find minimum ans
         int minCost = min(ans1, min(ans2,ans3));

         return minCost+cost;
}

void takeInput( vector<int> &arr , int index ){
        
        // base condition
        if(index<0){
            return;
        }

        //recursive call
        takeInput(arr, index-1);

        // processing
        cout<<"Enter the value of Arr[ "<<index<<" ] : ";
        cin>>arr[index];

}

int main(){
     
     int size;
     cout<<"Enter the size of Array : ";
     cin >> size;


     // create a vector of this size
     vector<int> arr(size);
       
     cout<<"NOTE : Element Should be Increasing Order or must be 0< element < 365"<<endl;

     // takeInput from user
     takeInput(arr,size-1);

     // create a fair vector
     vector<int> fair(3);

     // takefair from user
     for(int i=0; i<fair.size(); i++){
        cout<<"Enter the Fair of day Fair["<<i<<"] : ";
        cin>>fair[i];
     }

     int minFairCost = findMinTicketCost(arr,0,0,fair);

     cout <<"Minimum Fair cost will be : "<<minFairCost<<endl;

return 0;
}