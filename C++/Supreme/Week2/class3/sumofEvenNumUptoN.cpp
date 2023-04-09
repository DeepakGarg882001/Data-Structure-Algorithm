// Write a Algorithm which can caluclate the sum of even numbers upto N

#include<iostream>
using namespace std;

int findEvenSum(int num){
       
       int sum=0;

       for(int index=2; index<=num;index+=2){
          sum= sum+index;
       }
    
 return sum;
}

int main(){
    
    int num;
    cout<<"Enter the value of Number Upto which you want to get Sum : ";
    cin>>num;
   
    int sum = findEvenSum(num);

    cout<<"Sum of Even numbers from 1 to "<<num<<" is : "<<sum<<endl;

}