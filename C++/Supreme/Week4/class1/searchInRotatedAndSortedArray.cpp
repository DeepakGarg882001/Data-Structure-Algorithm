// Leetcode Ques : 33

// There is an integer array nums sorted in ascending order (with distinct values).

// Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

// Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

// You must write an algorithm with O(log n) runtime complexity.

// Example 1:
// Input: nums = [4,5,6,7,0,1,2], target = 0
// Output: 4

// Example 2:
// Input: nums = [4,5,6,7,0,1,2], target = 3
// Output: -1

// Example 3:
// Input: nums = [1], target = 0
// Output: -1x

#include <iostream>
#include <vector>
using namespace std;

int findKeyIndex(vector<int> nums, int pivotIndex, int key)
{
    int start,end;
   if(pivotIndex==-1){
           start=0;
           end=nums.size()-1;
         }else if(nums[0]<=key && key<=nums[pivotIndex]){
             start=0;
             end=pivotIndex;
         }else{
              start=pivotIndex+1;
             end=nums.size()-1;
         }
    int mid = start + (end - start) / 2;

   while (start <= end)
    {
        if (nums[mid] == key)
        {
            return mid;
        }
        if(nums[mid]>key){
            end=mid-1;
        }else{
            start= mid+1;
        }

        mid = start + (end - start) / 2;
    }
    return -1;
        
    }

int findPivotIndex(vector<int> nums){
    int start=0;
    int end= nums.size()-1;
    int mid= start+(end-start)/2;
     
      while(start < end) {
        if(mid+1 < nums.size() && nums[mid] > nums[mid+1])
        return mid;
        if(mid-1 >= 0 && nums[mid-1] > nums[mid])
        return mid-1;

        if(nums[start] >= nums[mid])
        end = mid - 1;
        else
        start = mid ;
        mid = start + (end-start)/2;
    }
    return start; 

}

int takeTagetKey()
{
    int key;
    cout << "Enter the Element Value of which you want to Search: ";
    cin >> key;
    return key;
}


void takeInput(vector<int> &arr)
{

    int size = arr.capacity();

    for (int index = 0; index < size; index++)
    {
        cout << "Enter the Value of Element Arr[ " << index << " ] : ";
        cin >> arr[index];
    }
}

int main()
{

    int size;
    cout << "Enter the size of an Array : ";
    cin >> size;

    vector<int> arr(size);

    takeInput(arr);

    int key = takeTagetKey();
        int pivotIndex=-1;
        
        if(arr[0]>arr[size-1]){
         pivotIndex =findPivotIndex(arr);
        }
    int keyIndex = findKeyIndex(arr,pivotIndex, key);
    if (keyIndex == -1)
    {
        cout << "Not Found Element " << key << endl;
    }
    else
    {
        cout << "Element " << key << " is found at Index : " << keyIndex << endl;
    }
}