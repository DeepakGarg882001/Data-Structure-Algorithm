// LeetCode Ques : 996

// An array is squareful if the sum of every pair of adjacent elements is a perfect square.

// Given an integer array nums, return the number of permutations of nums that are squareful.

// Two permutations perm1 and perm2 are different if there is some index i such that perm1[i] != perm2[i].

 

// Example 1:

// Input: nums = [1,17,8]
// Output: 2
// Explanation: [1,8,17] and [17,8,1] are the valid permutations.
// Example 2:

// Input: nums = [2,2,2]
// Output: 1
 

// Constraints:

// 1 <= nums.length <= 12
// 0 <= nums[i] <= 109


#include<iostream>
#include<vector>
using namespace std;

bool isSafe( int num, int &preValue, int &index ){

    // agar index -> 0 hai chaeck mt kro
    if(index==0){
        return true;
    }

    // store sum
    int sum = num+ preValue;

    // run a loop
    for( int i=0; i*i<=sum; i++){
        if( (i*i) == sum ){
            return true;
        }
    }

    return false;


}

bool isVisited( int num , vector<int> &visited ){
        
        // run a loop
        for(int index=0; index<visited.size(); index++){
            // agar visited hai toh return false krr de
            if(visited[index]==num){
                return false;
            }
        }

        return true;

}

void findSquarefull( vector<int> &nums, int index, int preValue, int &sol ){
        
        // base condition
          if(index>=nums.size()){
             // iska mtlb ye ek solution hai
              sol++;
              return;
          }

        // processing
           
           // create a vector to store visited nums
           vector<int> visited;

          // run a loop
          for(int i = index; i<nums.size(); i++ ){
              
              // kya nums[i] correct value hai
              if( isVisited(nums[i],visited)){
                    
                    // visited nhi hai toh current num mark kr do visited
                    visited.push_back(nums[i]);
                     
                     if( isSafe( nums[i] , preValue, index ) ){
                         
                         int tempPreValue = nums[i];

                         swap(nums[i],nums[index]);

                         // recursive call
                         findSquarefull(nums, index+1, tempPreValue, sol);
                        
                         // backtrack
                         swap(nums[i],nums[index]);

                     }
              }
           

          }



}

void takeInput( vector<int> &nums ){

    // run a loop
    for(int index=0; index<nums.size(); index++ ){
        cout<<"Enter the value of Arr["<<index<<"] : ";
        cin>> nums[index];
    }

}

 
int main(){
       
       // size of vector
       int size;
       cout<<"Enter the size of Array : ";
       cin>> size;

      //  create a vector nums
      vector<int> nums(size);

      // takInput from user
         takeInput(nums);


      //store number of solutons
      int sol=0;

      // find Squarefull array
      findSquarefull(nums, 0, 0, sol);
      
      // print solution
      cout<<"Number of Permutation are : "<<sol<<endl;

      return 0;
}