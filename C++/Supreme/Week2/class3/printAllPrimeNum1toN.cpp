// Write a algorithm to Print all  the prime numbers from 1 to N

#include<iostream>
using namespace std;

void printPrime( int num){
     
     for(int start =2; start<=num;start++){
        bool isPrime=true;
        for(int index=2; index * index<=start;index++){
            if(start%index==0){
              isPrime=false;
            }
        }
        
        if(isPrime ){
            cout<<start <<" is a Prime Number"<<endl;
        }

     }

}

int main(){
    
    int num;
    cout <<"Enter the value of Number : ";
    cin>> num;

    printPrime(num);

    return 0;

}