// Write a function to find out the given input is a Prime or not

#include<iostream>
using namespace std;

bool isPrime(int num){

    for(int start=2;start<num;start++){
         
         if( ((num/start) *start) ==num ){
            return 0;
         }

    }

    return 1;

}

int main(){
   
   int num;
   cout <<"Enter the value of Number : ";
   cin>>num;

   bool checkNum = isPrime(num);
    
    if(checkNum){
        cout <<num<<" is a Prime Number"<<endl;
    }else{
        cout <<num<<" is not a Prime Number"<<endl;
    }
 
 return 0;
}