// write a function to Print the counting from 1 to N


#include<iostream>
using namespace std;

void printCounting(int num){
     
     for(int start=1;start<=num;start++){
        cout << " " << start<<" ";
     }
}

int main(){
      
      int num;
      cout <<"Upto when you want to print counting : ";
      cin>>num;

      printCounting(num);

      return 0;

}