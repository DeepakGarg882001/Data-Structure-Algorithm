// A[][] is a (R x C) boolean matrix  such that each of its element is either 0 or 1. Each row of the matrix is sorted. Find the index of the row which has the maximum number of ones. If there are multiple such rows then return the smallest index.
// An array B[] of size R is used to construct matrix A such that B[i] denotes the number of zeroes in the ith row.


// Example 1: 

// Input:
// R=3, C=3
// B[]={1, 0, 2} 

// Output: 1

// Explanation:
// A[][] =[[0,1,1],
//         [1,1,1],
//         [0,0,1]]
// Row with index 1 has maximum number of 1s. 
 

// Your Task: 
// You don't need to read input or print anything. Your task is to complete the function solve() which takes R and C as input parameters and returns the index of the row which has maximum number of 1s. If there are multiple such rows then return the smallest index. The returned index must be according to 0 based indexing. 
// The matrix A or the array B are not directly accessible. You are provided a helper function get(i,j) which will fetch the value of A[i][j]. 


// Expected Time Complexity: O(R+C)
// Expected Auxiliary Space: O(1)


// Constraints:
// 1 <= R,C <= 105



// Custom test case should contain 2 lines. First line contains R and C. Second line contains R space separated elements where ith element shows number of zeroes in the ith row .


// Example:

// 3 3
// 1 0 2


// 3 3
// 3 3 2



// Runtime Error 
// Input:
// 3 3
// 3 3 2



// Your Output:
// Abort signal from abort(3) (SIGABRT)



// Its Correct output is : 
// 2

