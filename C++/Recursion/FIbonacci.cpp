#include<iostream>
using namespace std;


int printFibbonacci(int N,int sum){
     
     if(N==0){
         return 1;
     }

     
     
     int smallProblem= printFibbonacci(N-1 ,sum);
     int CurrentProblem= smallProblem;
     
     cout<<sum<<"  ";

     sum=sum+CurrentProblem;
     return CurrentProblem;
}



int main(){

    cout<<"Hi, Please Tell me a Number , I will Show you Fibbonacci Series of N number "<<endl;
    
    int N;
    cout<<"Enter the value of N : ";
    cin >>N;
    
    int sum=0;
    printFibbonacci(N,sum);
   

    return 0;
}