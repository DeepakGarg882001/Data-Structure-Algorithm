#include<iostream>
using namespace std;

int main(){
   cout<<"Please Enter the value of N,\n of which you want to find complement : ";
   int N;
   cin>>N;
   
   if(N==0){
       return 1;
   }
   int j=N;
   int k= (~N);

   int i=0;
   while(j!=0){
       j= j>>1;
       i++;
   }
   
   while(i!=0){
       j=j<<1;
       j=(j|1);
       i--;
   }
  
   
   int ans;
   ans=(k&j);
   cout<<ans<<endl;


}