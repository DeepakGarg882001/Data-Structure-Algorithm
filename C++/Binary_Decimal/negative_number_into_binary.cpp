#include<iostream>
#include<math.h>
using namespace std;

int main(){

    cout << "Please Enter the value of N in Decimal\n Which you want to convert into Binary : ";
    int N;
    cin >>N;

    int answer=0;
    int x=0;

    int j = N+1;
    j=-j;

    while(j!=0){
      int digit=j&1;
      answer = (pow(10,x) * digit) + answer;
      j= j>>1;
      x++;  
    }
       cout <<answer;
       cout<<endl;

       int k=answer;
       int flip=0;
       int bit;

       while(k!=0){
          bit=k%10;
          flip= (flip * 10)+bit;
          k=k/10;
       }
      cout<<flip;

}