#include<iostream>
using namespace std;

int main(){

string name;
cout << " please enter your name :) ";
cin >> name;
cout << "Hi "<< name << " Welcome to Garg Bank \n  You are eligible for Bank Loan " << endl;

cout << " Please enter the value of amount , which you want to boro :  ";
int amount;
cin>> amount;
cout << " Please enter the value of Interest Rate(%) per month , Which you want to give : ";
int rate;
cin >> rate;
cout<< " Please Enter the number of months for Loan :";
int time;
cin >> time;
cout << " Hi , we have read all the data which is provided by you "<< endl;
float intrest = (amount * rate * time)/100 ;
cout << " The Total Amount of Intrest , You will have to pay is :" << intrest << endl;
float T_amount = intrest + amount ;
cout << " The Total amount you will have to return is :" << T_amount << endl;


}