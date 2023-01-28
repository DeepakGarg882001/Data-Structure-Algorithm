#include<iostream>
using namespace std;

int main(){
    cout<<"Please enter the value of size of array : ";
    int size;
    cin>>size;
    int Arr[100];
    for(int i=0;i<size;i++){
      cout<<"Please enter the value of Arr["<<i<<"] : ";
      cin >> Arr[i];
    }
    // now print the sum 
    int sum=0;
    for(int k=0;k<size;k++){
      sum= sum+Arr[k];
    }
    cout<<"The sum of the above Array is : "<<sum<<endl;
}