#include<iostream>
using namespace std;

int main(){
    cout << "Please Enter the value of N,\n of which you want to make Pattern :  " ;
    int N;
    cin >> N;

    int i = 1;

    while(i<=N){
        int j=1;
        while(j<=N){
            cout <<i <<" ";
            j=j+1;

        }
        cout<<endl;

        i=i+1;
    }


}