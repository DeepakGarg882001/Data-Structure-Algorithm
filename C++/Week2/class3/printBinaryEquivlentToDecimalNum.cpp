// Write  a Algorithm which takes binary value as input and gives Decimal value as output.

#include<iostream>
using namespace std;

int convertIntoDecimal(int binaryValue){
     
     int ans=0;

    while(binaryValue!=0){
        ans= (ans<<1);
        if(binaryValue%10 ==1){
            ans = (ans|1);
        }
        binaryValue= binaryValue/10;
    }

    return ans;

}

int main(){
    
    int binaryValue;
    cout<<"Enter the Binary Value of a Number : ";
    cin>>binaryValue;


    int decimalValueIs = convertIntoDecimal(binaryValue);

    cout<< "Decimal value of "<<binaryValue<<" is : "<<decimalValueIs<<endl;

    return 0;
 

}