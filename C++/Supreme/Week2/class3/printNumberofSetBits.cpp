// Write a Algorithm which can find number of set bit in any number

#include<iostream>
using namespace std;

int findSetBit(int num){
 
    int count=0;
    while(num!=0){
       if(num&1 ==1){
        count++;
       }
       num = num>>1;

    }
 
 return count;
} 

int main(){
 
 int num;
 cout <<"Enter the value of a Number : ";
 cin >> num;

 int setBits = findSetBit(num);

 cout <<"Number of set Bit in the Number "<<num<<" are : "<<setBits<<endl;

 

}