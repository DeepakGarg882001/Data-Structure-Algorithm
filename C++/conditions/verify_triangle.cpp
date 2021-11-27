#include<iostream>
using namespace std;

int main(){
    
    cout << "Hi ,If you want to check that the given triangle is a valide or not \n Then Please provide us the below following data  "<< endl;
    int A;
    int B;
    int C;
    cout <<" Please Enter the value of A : "; 
    cin >> A;
    cout <<" Please Enter the value of B : "; 
    cin >> B;
    cout <<" Please Enter the value of C : "; 
    cin >> C;
    
    if(A+B>C){

        if(B+C>A){

            if(C+A>B){
                cout << " This is a Valide Triangle ";
            }else{
                cout << " this is Not a valide Triangle ";
            }

        }else{
            cout << " this is Not a valide Triangle ";
        }

    }else{
        cout << " this is Not a valide Triangle ";
    }

}