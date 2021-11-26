#include<iostream>
using namespace std;

int main(){
    cout<< " Please Enter the value of N , Upto which you want to print the numbers : ";
    int N;
    cin >>N;
    cout << "Which Number Do you Want to print even or odd : ";
    string type;
    cin >> type;
    int i=1;

    while(i<=N){
      if(type == "even"){
        if( i % 2 == 0 ){
            cout << i <<endl;
        }

      }else if(type == "odd"){
         if( i % 2 != 0 ){
            cout << i <<endl;
         }
       }
       i=i+1;
    }

}


