// Write a Algorithm with Recursion to find the Factorial of N!
//eg: 5! = 5*4*3*2*1 = 120


#include<iostream>
using namespace std;

int findFactorial(int num){
       
       // Base contition
       if(num ==1){
        return 1;
       }

       //formula -> f(num)= num *f(num-1);

       //recursive call
       int ans = num * findFactorial(num-1);

       return ans;

}

int main(){
     
     int num;
     cout <<"Enter the value of N : ";
     cin >> num;

     int ans = findFactorial(num);
    
    cout<<"Factorial of "<<num<<" is : "<<ans<<endl;

    return 0;

}