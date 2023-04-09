// Write a Algorithm with recursion to find the value of 2^n
// eg: 2^3 = 2*2*2 = 8
//     2^5 = 2*2*2*2*2 = 32

#include<iostream>
using namespace std;

int findPower(int num){
     
     //base Condition
     if(num==0){
          return 1;
     }

     // formula  -> f(n) = 2*f(n-1);

     // recursive call
     int ans = 2 * findPower(num-1);

     return ans;

}


int main(){

    int num;
    cout<<"Enter the value of N : ";
    cin>>num;

    int ans=findPower(num);

    cout <<"Value of 2^"<<num<<" is : "<<ans<<endl;

    return 0;

}