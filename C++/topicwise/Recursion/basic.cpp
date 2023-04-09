// write a programm to find the factorial of any number using recursion method


#include<iostream>
using namespace std;

//writting a fn to calulate the factorial
int findFactorial(int N){

    // Make a Base condition , So that we can Stop recursion at a Point
    if(N==0){
        return 1;
    }
    
    // if condition is not true then, call a function which have smallerProblem then current
    int smallProblem= findFactorial(N-1);

    // Now store the Answer of this current fn into a variable ,using the smaller problem variable. Don't need to worry whatever answer of smaller problem
    int currentProblemAnswer= N * smallProblem;
    return currentProblemAnswer;

}

int main(){

int N;
cout <<"Hi, Find Out the Factorial of any number N "<<endl;
cout<<"Enter the Value of N : ";
cin >> N;

int ans= findFactorial(N);

cout << "Factorial of "<<N<<"! is : "<<ans<<endl<<endl;
return 0;
}