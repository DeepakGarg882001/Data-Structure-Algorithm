// crreate a function to find out the factorial of a Number

#include<iostream>
using namespace std;

int findFactorial(int num){
       
       int factorial =1;

       for(int start =1;start<=num;start++){
           factorial= factorial*start;
       }
 return factorial;
}

int main(){

    int num;
    cout << "Enter the Value of Number to find its Factorial : ";
    cin>>num;
    if(num <1){
        cout<<"Value Should be Greater or equal to 1"<<endl;
        return 0 ;
    }
    int ans = findFactorial(num);
    cout << "Fartorial of "<<num<<" is : "<<ans<<endl;


}