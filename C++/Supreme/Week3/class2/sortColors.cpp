// Leetcode Ques : 75
// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
// You must solve this problem without using the library's sort function.

// Example 1:

// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]


// Example 2:

// Input: nums = [2,0,1]
// Output: [0,1,2]
 

// Constraints:

// n == nums.length
// 1 <= n <= 300
// nums[i] is either 0, 1, or 2.
 

// Follow up: Could you come up with a one-pass algorithm using only constant extra space?


#include<iostream>
#include<vector>
using namespace std;

void printArray( vector<int> &arr ){

       cout<<"{ ";  
      
       for(int index=0; index<arr.size(); index++){
            
            cout<<arr[index]<<"  ";

       }
       cout <<"}"<<endl;

}

void sortColor(vector<int> &arr){

    int start=0;
    int mid=0;
    int end= arr.size()-1;

    while(mid<=end){
        
        if(arr[mid]!=0){
            swap(arr[mid],arr[end]);
            end--;
        }else{
            swap(arr[start],arr[mid]);
            start++;
            mid++;
        }

    }

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
    cin>>size;

    // create a vector of this size
    vector<int> arr(size);
     
     // Note
     cout <<"You can only enter 0, 1, and 2"<<endl;

    // take input from user
    takeInput(arr);

    //sort the colors
    sortColor(arr);

    // print the array
    printArray(arr);
 
 return 0;
}

