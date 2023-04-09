// Generating subarrays using recursion

// solve using recursion

// Given an array, generate all the possible subarrays of the given array using recursion.

// A subarray is a contiguous part of any given array. Basically speaking, an array that is present inside another array or a part of that array, but in a continuous manner.

// Examples: 

// Input : [1, 2, 3]
// Output : [1], [1, 2], [2], [1, 2, 3], [2, 3], [3]

// Input : [1, 2]
// Output : [1], [1, 2], [2]



#include<iostream>
#include<vector>
using namespace std;

void printSubArray( vector<int> &arr , int start , int end ){
         
         // run a loop
         cout<<"[ ";
         for(;start<=end;start++){
            cout<<arr[start]<<" ";
         }
        cout<<"]    ";

}

void subArrays( vector<int> &arr, int start ,int index , int size ){
       
       // base case
       if(index==size){
            // toh bhai sub array print karwa de
            printSubArray(arr,start,index);
            return;
       }

       // processing 

       // kya toh mai next element lunga
           subArrays(arr,start, index+1, size);

       // kya toh mai next element nhi lunga
           subArrays(arr,start, index, index);

}

void findSubArray( vector<int> &arr ){
       
       // run a loop
       for(int index=0; index<arr.size(); index++ ){
            // find subArray of all element after this index 
            subArrays(arr,index, index,arr.size() -1);
       }

}

void takeInput( vector<int> &arr , int index){

    // base case
    if(index<0){
        return;
    }

    // recursive call
    takeInput(arr, index-1);

    // processing
    cout<<"Enter the value of Arr["<<index<<"] : ";
    cin>> arr[index];
}

int main(){
   
   int size;
   cout<<"Enter the size of Array : ";
   cin>> size;

   // create a vector
   vector<int> arr(size);

   // takeInput from user
   takeInput(arr,size-1);

   //find sub Arrays
   findSubArray(arr);

   return 0;
}