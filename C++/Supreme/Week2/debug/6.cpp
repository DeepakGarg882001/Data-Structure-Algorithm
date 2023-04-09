// Debug the following code to get Convert given Binary number to Decimal.

// int binaryToDecimal(int b){
//     int ans;
//     int c=0;
//     while(b){
//         ans=(b % 10) * (1 << c++);
//         b/=10;
//     }
//     return ans;
// }

#include<iostream>
using namespace std;

int binaryToDecimal(int b){
    int ans;
    int c=0;
    while(b){
        ans= ans+((b % 10) << c++);
        b/=10;
    }
    return ans;
}

int main(){
       
       int binary;
     cout <<"Enter the Binary Value of a Number : ";
     cin>>binary;

     int decimal = binaryToDecimal(binary);
     cout << "Decimal Value of this Binary value ( "<<binary<<" ) is : "<<decimal<<endl; 


}