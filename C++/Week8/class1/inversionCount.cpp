
// solve using recursion

// Inversion Count for an array indicates – how far (or close) the array is from being sorted. If the array is already sorted, then the inversion count is 0, but if the array is sorted in reverse order, the inversion count is the maximum. 

// Given an array a[]. The task is to find the inversion count of a[]. Where two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.

// Examples: 

// Input: arr[] = {8, 4, 2, 1}
// Output: 6
// Explanation: Given array has six inversions: (8, 4), (4, 2), (8, 2), (8, 1), (4, 1), (2, 1).

// Input: arr[] = {1, 20, 6, 4, 5}
// Output: 5
// Explanation: Given array has five inversions: (20, 6), (20, 4), (20, 5), (6, 4), (6, 5). 


#include<iostream>
#include<vector>
using namespace std;
 
void countInversion( vector<int> &arr, int &count , int start , int index ){
           
      // base case
      if(index==arr.size()){
        return;
      }

      // processing
      if(arr[start]>arr[index]){
        count++;
      }

      // recursive call
      countInversion(arr,count, start, index+1);
}

void findInversion( vector<int> &arr , int index ,int &count){
      
      // base condition
      if(index<0){
        return;
      }

      // recursive call
      findInversion(arr,index-1,count);

      // count Inversion
      countInversion(arr,count,index,index);
}

void takeInput( vector<int> &arr , int index){
     
     // base condition
     if(index<0){
        return;
     }
      
     // recursive call
     takeInput(arr,index-1);

     // processing
     cout<<"Enter the value of Arr["<<index<<"] : ";
     cin >> arr[index];

}
int main(){
      
      int size;
      cout<<"Enter the size of Array : ";
      cin >> size;

      // create a vector
      vector<int> arr(size);

      // takeInput from user
      takeInput(arr,size-1);

      // store count of inversion
      int count=0;

      // find inversion count
      findInversion( arr ,size-1 ,count);
      
      cout<<"Inversion count are : "<<count<<endl;
      return 0;
}