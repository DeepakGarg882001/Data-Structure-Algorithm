#include<iostream>
#include<math.h>
using namespace std;


int main(){
    cout << "Please Enter the value of N in Decimal\n Which you want to convert into Binary : ";
    int N;
    cin >>N;
    
    int quotient = 0;
    int remainder = 0;
    int x=0;
    while(N!= 0){
        int j= N/2;
        int k=N % 2;
        remainder=(pow(10,x) * k )+ remainder;
        N=j;
        x++;
    }
    cout<<remainder;
}