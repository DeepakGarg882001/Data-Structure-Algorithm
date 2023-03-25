// Given an array arr[] of length, N. One has to partition the array into multiple beautiful array. 
// Definition of a Beautiful Array: If we sort the array, no two neighbor elements have a difference of more than K.
// The task is to find the minimum number of beautiful arrays one can create from the given array

// Note: To minimize the number of beautiful arrays, one can add X numbers of elements in the original array

// Example 1:

// Input: arr[] = {1,1,3,1,1,6,1,1,8,10}
// X = 3, K = 1
// Output: 2
// Explanation: You can add atmost 3 elements in the original array
// to make the array beautiful from the given array.
// So lets say you add 2, 7 and 9 in the original array.
// Now we can make two beautiful array from it.
// arr1[] = {1,1,1,1,1,1,2,3}
// arr2[] = {6,7,8,9,10}
// So the output will be 2.
// Example 2:

// Input: arr[] = {1,7,10}
// X = 3, K = 2
// Output: 1
// Explanation: You can add 3, 5 and 8 to the original array
// to make it itself a beautiful array.
// new arr[] = {1,3,5,7,8,10}
// Here no two neighboring elements difference greater than X.

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function beautifulArray() which takes the array of integers arr, x and k as parameters and returns an integer, the minimum number of beautifull array.

// Constraints:
// 1 ≤ N ≤ 105
// 1 ≤ Arr[i] ≤ 109
// 1 ≤ k ≤ 109
// 0 ≤ x ≤ 109