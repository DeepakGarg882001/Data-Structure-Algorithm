// create a function that can easily convert Kilometers to miles

#include<iostream>
using namespace std;

float convertIntoMiles(float km){

    return km *0.6213711922;

}

int main(){
     
     float value;
    
     cout << "Enter the value of Distance in KM : ";
     cin >> value;

     float miles = convertIntoMiles(value);

     cout << "The value of "<<value<<" KM in Miles is : "<<miles;




}