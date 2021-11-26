#include <iostream>
using namespace std;

int main(){

    cout << "Please Enter any one Number : " ;
    int N;
    cin >>N;

    if(N>0){
        cout << N << " is a Positive Number ";

    }else if(N<0){
        cout << N << " is a Negative Number ";

    }else{
        cout << N << " is zero ";
        
    }

}