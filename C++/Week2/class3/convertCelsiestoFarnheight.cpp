// create a function which takes value of Tempratue in celcius and return in Farnhiet

#include<iostream>
using namespace std;

float convertToFarn(float celcius){
         
         float farnHeit = ((celcius *9)/5)+32;
        
        return farnHeit;

}

int main(){
    
    float degCel ;
    cout << "Enter the value of Temperature in Celcius : ";
    cin>> degCel;

   float Franheit =convertToFarn(degCel);
   cout <<"Framheit value of "<<degCel<<" deg c is : "<<Franheit;

}
