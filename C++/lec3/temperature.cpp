#include<iostream>
using namespace std;


int main(){
   float C;
   float K;
   float F;
   float result;

   cout << "Please tell us ,in which unit of temperature you will Enter the data \n for Celsius(C),for Fahrenheit(F) & Kelvin(K)  : ";
   char type;
   cin >> type ;

   cout << "Please enter the value of Temperature : ";
   float temp;
   cin >> temp;

   cout << "In which unit you want to convert this :" ;
   char con;
   cin >> con;


   if(type == 'C'){
       if(con == 'F'){
           C = temp;
           F = 9/(5*C) + 32 ;
           result = F;

       }else if(con == 'K'){
           C = temp;
           K = C + 273.15 ;
           result = K ;
          
       }else{
           C = temp;
           cout << " Given data is already in "<< con << endl;
           result= C;
       }

   }else if(type == 'F'){
       if(con == 'C'){
           F = temp;
           C = 9/5*(F-32) ;
           result = C;

       }else if(con == 'K'){
           F = temp;
           K = 9/5*(F-32) + 273.15 ;
           result = K ;
          
       }else{
           F = temp;
           cout << " Given data is already in "<< con << endl;
           result= F;
       }

   }else if(type == 'K'){
       if(con == 'C'){
           K = temp;
           C = K - 273.15 ;
           result = C;

       }else if(con == 'F'){
           K = temp;
           F = 9/(5*(K - 273.15)) + 32 ;
           result = F ;
          
       }else{
           K = temp;
           cout << " Given data is already in "<< con << endl;
           result= K;
       }
   }

  cout << "So the Conversion of "<< temp << " " << type << " to " << con <<" is : "<< result <<" "<<con<< endl;

}