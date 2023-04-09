// Write a Algorithm to print the Fibbonacci Series upto N
// eg: N=5
// output: 0 1 1 2 3 , 5th element is 3 , so 3 is the ans

#include <iostream>
using namespace std;

int printFib(int num){
        
    // formula -> f(n)= f(n-1)+f(n-2);

    // base condition

    // agar num first element ho toh
     if(num==1){
           return 0;
     }
    
    // agar num second element ho toh
     if(num==2){
           return 1;
     }
     
      
      // recursive call
      int ans = printFib(num-1)+ printFib(num-2);

     return ans;
}


int main(){

    int num;
    cout << "Enter the value of N : ";
    cin >> num;


    int ans = printFib(num);
    cout <<ans<<endl;

    return 0;


}