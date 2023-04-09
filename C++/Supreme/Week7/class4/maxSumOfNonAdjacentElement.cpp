//  You are given an Array of size n
//  you can not take any adjacent elements for finding ans
//  return the max sum (without including adjacent element)

// Example : 
// Input : arr[] = {1,3,4,2,6,7}
// output :  
//          1+4+6 = 11      ,   3+2+7 = 12    ,    4+6=10   ,    2+7 = 9
//            1+4 = 5       ,     3+2 = 5     ,    4+7=11   ,      1 = 1
//            1+2 = 3       ,     3+6 = 9     ,             ,      2 = 2
//            1+6 = 7       ,     3+7 = 10    ,             ,      3 = 3
//            1+7 = 8       ,                               ,      4 = 4
//          1+2+7 = 10      ,                 ,   7=7       ,      6 = 6
            

// max Sum is : 12

// return the maximum sum in which no two elements are adjacent elements 



#include<iostream>
#include<vector>
using namespace std;

int robeMoney( vector<int> &arr, int index, int sum ){
       
       // base case
       if(index>=arr.size()){
        return sum;
       }

      // kya toh mai include krunga 
        int ans1 = robeMoney(arr,index+2, sum+arr[index]);

      // kya toh mai include nhi krunga
       int ans2 = robeMoney(arr,index+1, sum);  
       
      // return max value
      return max(ans1,ans2);
}  

void  takeInput( vector<int> &arr){
     
     // run a loop
     for(int index=0; index<arr.size(); index++){
         cout<<"Enter the value of Arr["<<index<<"] : ";
         cin>> arr[index];

     }

}

int main(){
     
     int size;
     cout<<"Enter the size of Array : ";
     cin>> size;

     // create a vector
     vector<int> arr(size);

     // take input from user
     takeInput(arr);
      
     // store max sum;
     int maxSum = robeMoney(arr,0,0) ;
     
     // print ans
     cout<<"Max sum of non adjacent element is : "<<maxSum<<endl;

     return 0;
}