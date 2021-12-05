#include<iostream>
#include<math.h>
using namespace std;

int main(){
    cout << "Please Enter the value of N in Decimal\n Which you want to convert into Binary : ";
    int N;
    cin >>N;
    
    int answer=0;
    int x=0;
    while(N!=0){
        int digit=N&1;
        answer = (pow(10,x) * digit) + answer;
        N= N>>1;
        x++;  

    }
    cout <<answer;

}