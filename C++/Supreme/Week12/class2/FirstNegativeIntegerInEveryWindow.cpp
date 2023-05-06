// GFG : First negative integer in every window of size k

// Given an array A[] of size N and a positive integer K,
// find the first negative integer for each and every window(contiguous subarray) of size K.

// Example 1:

// Input :
// N = 5
// A[] = {-8, 2, 3, -6, 10}
// K = 2
// Output :
// -8 0 -6 -6
// Explanation :
// First negative integer for each window of size k
// {-8, 2} = -8
// {2, 3} = 0 (does not contain a negative integer)
// {3, -6} = -6
// {-6, 10} = -6

// Example 2:
// Input :
// N = 8
// A[] = {12, -1, -7, 8, -15, 30, 16, 28}
// K = 3
// Output :
// -1 -1 -7 -15 -15 0

// Your Task:
// You don't need to read input or print anything.
// Your task is to complete the function printFirstNegativeInteger() which takes the array A[],
// its size N and an integer K as inputs
// And returns the first negative number in every window of size K starting from the first till the end.
// If a window does not contain a negative integer , then return 0 for that window.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(K)

// Constraints:
// 1 <= N <= 105
// -105 <= A[i] <= 105
// 1 <= K <= N



#include<iostream>
#include<queue>
#include<vector>
using namespace std;

// findiing first negative integer of window
vector<int> firstNegativeInteger( vector<int> &arr, int &k ){
       

       // store ans
       vector<int> ans;
       
       // track first negative integer
       queue<int> q;

       // process first k elements
      for(int index=0; index<k; index++){
          
          // extract element
          int element = arr[index];

          // agar element negative hai toh
          if(element<0){
            q.push(index);
          }

          // remove out of window element
          while( !q.empty() && ( q.front() <= index-k  )){
            q.pop();
          }
         
         
      }
      
      // find answer of first window
            if(q.empty()){
                ans.push_back(0);
            }else{
                ans.push_back(arr[q.front()]);
            }


      // find ans of each window
      for(int index=k; index<arr.size(); index++){
            
            // extract element
            int element = arr[index];

            // agar element negative hai toh
            if(element<0){
              q.push(index);
            }

            // remove out of window elements
            while( (!q.empty())  &&  ( q.front() <= index-k  ) ){
              q.pop();
            }
         
            if(q.empty()){
                ans.push_back(0);
            }else{
                 ans.push_back(arr[q.front()]);
            }

      }
       
       return ans;


}


// taking input from user
void takeInput( vector<int> &arr){
      
      for(int index=0; index<arr.size(); index++ ){
          cout<<"Enter the value of arr["<<index<<"] : ";
          cin >> arr[index];
      }
}

int main(){
     
     
      // store size of vector
      int size;
      cout<<" Enter the size of Array : ";
      cin >> size;

      // create input vector
      vector<int> arr(size);

      // take input from user
      takeInput(arr);
      
      // store value of k
      int k;
      cout<<"Enter the value of K : ";
      cin >>k;


      // store ans in a vector
      vector<int> ans =  firstNegativeInteger(arr,k);
    
     // print ans
     for(int index=0; index<ans.size(); index++){
        cout<<ans[index]<<"  ";
     }
     cout<<endl;

     return 0;
}
