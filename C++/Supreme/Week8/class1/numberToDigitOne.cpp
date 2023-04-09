// Leetcode Ques : 233  

// solve using recursion

// Given an integer n, count the total number of digit 1 appearing in all non-negative integers less than or equal to n.

 

// Example 1:

// Input: n = 13
// Output: 6



// Example 2:

// Input: n = 0
// Output: 0
 

// Constraints:

// 0 <= n <= 109


#include<iostream>
using namespace std;

void countOnes( int &num , int &count , int index  ){
       
       // base case
       if(index>num){
        return;
       }
      
       // store index value
       int temp = index;

       // processing
       while(temp!=0){
           int digit = temp%10;
           temp = temp/10;

           if( digit ==1){
            count++;
           }

       }

       // recursive call
       countOnes(num,count,index+1);
 

}

int main(){
     
     int num;
     cout<<"Enter the value of Num : ";
     cin >> num;

     // store count of one
     int count =0;
    
    // count number of ones
     countOnes( num , count , 1 );
    
    // print output
    cout<<"Number of ones are : "<<count<<endl;

     return 0;
}

