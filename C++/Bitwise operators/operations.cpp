#include<iostream>
using namespace std;

int main(){
    
    cout<< "Please Enter the Bitwise operation \n which you want to perform \n i.e ( & , | , ~ , ^ )  : " ;
    char N;
    cin >> N;
     
    if(N == '~'){
    int a;
    cout << "Please Enter the value of  a :";
    cin >>a;
    cout << "So the result of NOT operation is : " <<(~a) <<endl;

    }else{
      int c= 4;
      int b=8;
      cout << "Please Enter the value of a : ";
      cin >>c;
      cout << "Please Enter the value of b : ";
      cin >> b;

      cout << "So, The result will be : "<<endl;

      int result;

      if(N == '&'){
          result = (c&b);
      }else if(N == '|'){
          result = (c|b);
      }else {
          result = (c^b);
      }

      cout << c <<" "<< N <<" "<< b <<" = "<< result <<endl;
      
    } 


}