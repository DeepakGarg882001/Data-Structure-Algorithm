#include<iostream>
using namespace std;

int main(){
   cout << "Please Enter the value of N,\n of which you want to make Pattern :  " ;
   int N;
   cin >> N;

   int i=1;
   int count =1;

   while(i<=N){
      int j=1;
      while(j<=i){
          cout << count << " ";
          count =count +1;
          j=j+1;

      }
      cout <<endl;
      i=i+1;
   }

}