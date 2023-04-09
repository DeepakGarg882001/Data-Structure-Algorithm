#include<iostream>
using namespace std;

int main(){
  cout << "Please Enter the number , which you want to check that it is a prime or not : ";
  int N;
  cin >>N;
  int i=2;
  int value=0;
  
      if(i<N && i>0){
         while(i<N){
             if(N % i == 0 ){
                // cout<<"No "<< N << " is not a prime number,for "<<i<<endl; 
                value=value+i;  
            }else if(N % i != 0 ){
            //  cout <<"Yes, " <<N << " is a prime number,for "<< i<<endl;
            
          }
          i=i+1;
         }
        }else{
          cout <<"Yes, " <<N << " is a prime number"<<endl;
        }
         
         if(value!=0){
             cout<<"No "<< N << " is not a prime number "<<endl; 
             
         }else{
             cout <<"Yes, " <<N << " is a prime number"<<endl;

         }
}
