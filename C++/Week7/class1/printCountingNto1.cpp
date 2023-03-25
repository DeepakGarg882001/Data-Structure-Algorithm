// Write a Algorithm to Print Counting from N to 1 using recursion
// eg: N=8
// output:  8 7 6 5 4 3 2 1

#include<iostream>
using namespace std;

void  printDecCounting(int num){
   
   // Base condition
   if(num==0){
    return;
   }

   //processing
   cout <<num<<" ";

   //recursive call
    printDecCounting(num-1);

}

int main(){
   
   int num;
   cout << "Enter the value of N : ";
   cin>> num;

   printDecCounting(num);
  
  cout <<endl;
   return 0;
}