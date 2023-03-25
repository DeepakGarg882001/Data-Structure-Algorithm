
// Leetcode Ques : 189
// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

 

// Example 1:

// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]
// Explanation:
// rotate 1 steps to the right: [7,1,2,3,4,5,6]
// rotate 2 steps to the right: [6,7,1,2,3,4,5]
// rotate 3 steps to the right: [5,6,7,1,2,3,4]
// Example 2:

// Input: nums = [-1,-100,3,99], k = 2
// Output: [3,99,-1,-100]
// Explanation: 
// rotate 1 steps to the right: [99,-1,-100,3]
// rotate 2 steps to the right: [3,99,-1,-100]


#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> &arr){
       
       for(int index=0; index<arr.size(); index++){
        cout<<arr[index]<<" ";
       }

       cout <<endl;

}

vector<int> rotateArray(vector<int> arr, int k){
       
       int size = arr.size();
      
        if(k>=size){
            k= k%size;
        }

       // ans vector
       vector<int> ans;

       // push last k elements 
        for(int index=size-k; index<size;index++){
            ans.push_back(arr[index]);
        }

        // push remaining element
        for(int index=0; index<size-k; index++){
            ans.push_back(arr[index]);
        }
          
       return ans;
} 

int getK(){
   
   int k;
   cout<<"Enter the value of K : ";
   cin>>k;

   return k;
}

void takeInput(vector<int>&arr){

    for(int index=0; index<arr.size(); index++){
         cout<<"Enter the Value of Arr[ "<<index<<" ] : ";
         cin>>arr[index];
    }
}

int main(){
     
     int size;
     cout<<"Enter the size of Array : ";
     cin >> size;

     // create a vector of this size
     vector<int> arr(size);
     
     // takeInput from user
     takeInput(arr);
      
    // take value of k
    int k = getK();

    // rotate the Array
    arr=rotateArray(arr,k);

    // print the array after rotated 
    printArray(arr);
 
 return 0;
}