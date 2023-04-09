#include<iostream>
using namespace std;

int main(){
   cout<<"please enter the value of N :";
   int N;
   cin>>N;

   int i=1;
   while(i<N){
       cout << "i have enterd in While loop"<<endl;

       switch(i){
           case 1: cout<<" i=1 "<<endl;
                   break;
           case 2: cout<<" i=2 "<<endl;
                   break;
           case 3: cout<<" i=3 "<<endl;
                   break;
           case 4: cout<<" i=4 "<<endl;
                   break;
           default : cout << "this is default case " <<endl;       
       }
       cout <<"switch is ended "<<endl;
      i++;
        
   }   

   cout<<i<<endl;

}