// Given an array a[] of length N. You have to make the array stable

// Definition of the Stable Array:  A array is called stable when, there exists a number X , such that every number from the array occurs only X times or zero times.

// The task is to find the minimum number that needs to be removed to make the array stable.

// Example 1:

// Input : a[] = {4,3,1,3,1,2}
// Output :  2
// Explanation : If we remove 1st and last element from
// the given array, then the array will be stable
// resultant array: 3 1 3 1 (every element occure only 2 times)
// Example 2:

// Input : a[] = {1,1,2,4,1,2,2}
// Output : 1
// Explanation : If we remove 4th element i.e. 4, 
// then the array will be stable 
// resultant array: 1 1 2 1 2 2 (every element occure only 3 times)
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function stableArray() which takes the array of integers arr, n as parameters and returns an integer, the minimum number of elements needs to be removed to make the given array stable

// Constraints
// 1 < = N  <= 100000
// 1 <= arr[I] <= 109


// The custom test case should contain 2 lines. The first line should contain one integers N .
// Then next line contains N integers denoting array A.

// Example: 

// 6
// 4 3 1 3 1 2

 

//  Possibly your code doesn't work correctly for multiple test-cases (TCs).

// The first test case where your code failed:

// Input:

// 66
// 1 6 20 9 11 12 20 18 2 19 18 15 3 2 16 16 11 10 20 14 12 19 2 9 9 2 15 12 1 4 16 8 5 19 17 6 5 14 15 4 10 1 16 2 13 14 18 5 2 1 19 13 13 19 16 16 12 5 4 10 19 19 6 14 5 20

// And Your Code's output is:

// 7