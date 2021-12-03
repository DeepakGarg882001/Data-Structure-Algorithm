#include<iostream>
using namespace std;

int main(){
    cout << "Please Enter the number upto which you want the sum of these numbers : ";
    int N;
    cin >>N;

    int i=1;
    int sum=0;
    cout << " which numbers sum do you want i.e even or odd : ";
    string type;
    cin >> type;
    if(type == "even"){
        while(i<=N){
            if(i % 2 == 0 ){
                sum=sum+i;
            }
            i=i+1;
        }

    }else if(type=="odd"){
        while(i<=N){
            if(i%2 != 0){
                sum= sum+i;
            }
            i=i+1;
        }
    }
  
  cout << "The sum of all "<<type<< " numbers, upto "<<N << " is : "<< sum <<endl;



}