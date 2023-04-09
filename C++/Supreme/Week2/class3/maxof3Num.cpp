// write a programm to find out the Max of three num as a input from user

#include<iostream>
using namespace std;

int takeInput(){
    int num;
    cout <<"Enter the value of Number : ";
    cin>>num;

    return num;
}

int findMax(int digits){
    
    int maxIs = INT32_MIN;

    for(int start=0;start<digits;start++){
         int value = takeInput();

         if(value>maxIs){
            maxIs = value;
         }
    }

    return maxIs;

}

int main(){
     
      int digits;
      cout << "How many Numbers will you enter : ";
      cin >> digits;

      int maxIs = findMax(digits);

      cout <<"Max number is "<<maxIs<<endl;

}