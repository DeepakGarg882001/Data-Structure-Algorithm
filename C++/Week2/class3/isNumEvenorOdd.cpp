// create a function which will find that given input is Even or Odd

#include<iostream>
using namespace std;

bool isNumEven(int num){
    if((num&1) ==1){
        return 0;
    }else{
        return 1;
    }
}

int main(){
       
       int num;
       cout<<"Enter the value of Num : ";
       cin>>num;
       bool numIs = isNumEven(num);

       if(numIs){
         cout <<num<< " is a Even Number"<<endl;
       }else{
        cout << num<< " is a Odd Number"<<endl;
       }



}