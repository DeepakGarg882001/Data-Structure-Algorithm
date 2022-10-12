#include<iostream>
using namespace std;

int main(){

    for(int i =2;i<=15;i+=2){
        cout << "1st i is "<< i << endl;

        if(i&1){
            continue;
        }
        cout << "2nd i is "<< i<< endl;
        i++;
        cout << "3rd i is "<< i<< endl;
    }
}
