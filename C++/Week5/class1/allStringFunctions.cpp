// use all string Functions which are in built

#include<iostream>
#include<string>
#include<string.h>
using namespace std;


int main(){

   string name="hello garg";
    int found = name.find("xsa");
   cout <<found <<endl;
   string ans = "oye garg";
   name= ans;
   cout << name<<endl;

   return 0;

}