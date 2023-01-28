#include<iostream>
using namespace std;

int main(){
    cout << "Please Enter any Number : " ;
    int N;
    cin >>N;
    if( N % 2 == 0 ){
        cout << N <<" is a Even Number" << endl;
    }
    else{
        cout << N << " is a odd number "<< endl;
    }
}