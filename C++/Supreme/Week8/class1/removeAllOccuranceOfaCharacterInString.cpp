
// solve using recursion

// Recursively Remove all occurrences of a character in a string

// Given string str, the task is to write a recursive program to remove all the occurrences of a character X in the string.

// Examples:

// Input: str = “geeksforgeeks”, c = ‘e’ 
// Output: gksforgks

// Input: str = “geeksforgeeks”, c = ‘g’ 
// Output: eeksforeeks 


#include<iostream>
#include<string>
using namespace std;

void removeTargets( string &str , char target , int index ){
         
      // Base condition
      if(index<0){
        return;
      }
        
     // processing

     if(str[index]==target){
        str.erase(index,1);
     }

         
          // recursive call
          removeTargets(str,target,index-1);

}

int main(){
       
       // create a string
       string str;
       cout<<"Enter the value of String : ";
       cin>>str;

       // target char
       char target;
       cout<<"Enter the value of Target Character : ";
       cin>>target;

       //remove all occurance of Target
       removeTargets(str,target,str.size()-1);

       // print string
       cout<<"After removing : "<<str<<endl;

       return 0;
}