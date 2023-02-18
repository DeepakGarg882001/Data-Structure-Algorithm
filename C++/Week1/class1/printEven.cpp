// 1 to N print but only even

#include<iostream>
using namespace std;

int main(){
      
      int num;
      cout << "Enter the value of N : ";
      cin >> num;

      for( int value =0 ; value<=num;value+=2 ){
        
        cout << value << " ";

      }

}