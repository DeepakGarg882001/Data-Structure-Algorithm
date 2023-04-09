// Write a Algorithm which can set the Kth bit of any number is to 1

#include<iostream>
using namespace std;

int setKthBit(int num,int index){
      
      int setBit =1;
      
      setBit = setBit<<(index);

      num = (num|setBit);

      return num;
      
}

int main(){

     int num;
     cout <<"Enter the value of a Number : ";
     cin>> num;
    
     int index;
     cout <<"Enter the value of position (Kth) at which you want set Bit : ";
     cin>>index;

     int numAfterSetBit = setKthBit(num,index);

     cout <<"The result of Number "<<num<<" after set Bit at position "<<index<<" is : "<<numAfterSetBit<<endl;
     

}