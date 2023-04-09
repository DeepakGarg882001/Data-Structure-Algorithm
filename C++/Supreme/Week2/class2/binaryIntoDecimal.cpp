// Write an Algorithm which can convert Binary value into Decimal value

#include<iostream>
#include<math.h>
using namespace std;

int convertIntoDecimal(int binary){

    int decimal=0;
    int count=0;
    while (binary!=0)
    {
       int bit = binary%10;
       decimal = decimal + (bit<<count) ;
       binary= binary/10;
       count++;
    }
    

    return decimal;

}

int main(){
     
     int binary;
     cout <<"Enter the Binary Value of a Number : ";
     cin>>binary;

     int decimal = convertIntoDecimal(binary);
     cout << "Decimal Value of this Binary value ( "<<binary<<" ) is : "<<decimal<<endl; 


}
