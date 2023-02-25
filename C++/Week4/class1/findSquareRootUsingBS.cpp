// Leetcode Ques : 69
// Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

// You must not use any built-in exponent function or operator.

// For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
 

// Example 1:

// Input: x = 4
// Output: 2
// Explanation: The square root of 4 is 2, so we return 2.
// Example 2:

// Input: x = 8
// Output: 2
// Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.

#include<iostream>
using namespace std;

double findSqrtWithDec(int num,int root){
    
    double ans = root;
    double step=0.1;
    for(int i=0;i<10;i++){
        
        for(int j=0;j<10;j++){
          
          if((ans+step)*(ans+step)>num){
           break;
          }
          ans = ans+step;
        }
        step= step/10;

    }

  return ans;

}

int findSqrt(int num){
    int start =1;
    int end = num/2;
    int mid = start+(end-start)/2;
    int ans=1;
    if(num==0){
        return 0;
    }
    while(start<=end){
         if(mid==num/mid){
            return mid;
         }
         if(mid>num/mid){
            end=mid-1;
         }else{
            ans=mid;
            start=mid+1;
         }
      mid= start+(end-start)/2;
    }
 return ans;
}

int main(){
    
    int Num;
    cout <<"Enter the Value of Number to find its Square Root : ";
    cin>>Num;

    int sqrtVal = findSqrt(Num);
    cout<<"Square Root of "<<Num<<" is : "<<sqrtVal<<endl;

    double sqrtValWithDec = findSqrtWithDec(Num,sqrtVal);
    cout<<"Square Root of "<<Num<<" is : "<<sqrtValWithDec<<endl;

}