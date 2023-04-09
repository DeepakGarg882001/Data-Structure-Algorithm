// Leetcode Ques : 169
// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

// Input: nums = [3,2,3]
// Output: 3

// Input: nums = [2,2,1,1,1,2,2]
// Output: 2

// Constraints:

// n == nums.length
// 1 <= n <= 5 * 104
// -109 <= nums[i] <= 109
 

// Follow-up: Could you solve the problem in linear time and in O(1) space?


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findMajorElement( vector<int>&arr){

    int count=1;

    //traverse each index
    for(int index=0; index<arr.size()-1; index++){
        
         if(arr[index]==arr[index+1]){
            count++;
         }else{
            count=1;
         }

          if(count>(arr.size()/2)){
            return arr[index];
         }

    }
 return arr[0];
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
  
    // sort the above array
    sort(arr.begin(), arr.end());

    // find majority element
    int majorElement = findMajorElement(arr);

    cout <<"Majority Element is : "<<majorElement<<endl;

    return 0;  

}