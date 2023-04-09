// Leetcode Ques : 273 

// solve using recursion

// Convert a non-negative integer num to its English words representation.

 

// Example 1:

// Input: num = 123
// Output: "One Hundred Twenty Three"
// Example 2:

// Input: num = 12345
// Output: "Twelve Thousand Three Hundred Forty Five"
// Example 3:

// Input: num = 1234567
// Output: "One Million Two Hundred Thirty Four Thousand Five Hundred Sixty Seven"
 

// Constraints:

// 0 <= num <= 231 - 1



#include<iostream>
#include<vector>
#include<string>
using namespace std;

string convertIntoEnglish( int num , vector<string> &numbers , vector<string> &value, vector<string> &base, int index ){
     
     // base condition 
     if(num==0){
        return "";
     }


     // processing
     int digit1 = num%10;
     num = num/10;
     index++;
      // ek string bna le ans store krne k liye
      string ans;
     
     // agar index ==3 hai toh 1 digit kaffi hai
     if( index!=3 && num!=0 ){
             
             // find second digit
             int digit2 = num%10;
             num = num/10;
             index++;

             // agar digit 2 ki value 1 hai toh
             if(digit2==1){
                ans = numbers[10+digit1];              
 
             }else{
                 ans = base[digit2]+numbers[digit1];
             }

     }else{

       ans = numbers[digit1];

     }


     // adding value
     if(index>2){
      ans = ans + " " + value[index-3];
     }


     // recursive call
     string remainingString  = convertIntoEnglish( num , numbers , value, base , index );
  
   return remainingString + " " + ans;
}

int main(){

     // take integer from user
     int num;
     cout<<"Enter the value of Num : ";
     cin>> num;

     // create a string vector to store 1 to 19
     vector<string> numbers{"Zero","One", "Two" , "Three", "Four", "Five", "Six", "Seven", "Eight","Nine","Ten","Eleven","Twelve","Thirtin", "Fortin","Fiften","Sixten","Seventen","Eighten","Ninten"};

     // create a string vector to store 10 pow
     vector<string> value{"Hundered","Thousand","Thousand","Lakh" ,"Lakh" ,"Crore","Crore"};
     
     // create a string  to store 2digit val
     vector<string> base{"zero","ten","Twenty","Thirty","Fourty","Fifty","Sixty","Seventy","Eighty","Ninty"};

     string ans = convertIntoEnglish(num,numbers,value,base,0);

     cout<<"Conversion of Integer Value("<<num<<") to English Word is : "<<ans<<endl;

     return 0;
}
