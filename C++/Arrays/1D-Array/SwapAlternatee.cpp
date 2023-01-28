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

    int rArr[100];
    for(int j=0;j<size-1;j+=2){
        rArr[j+1]=Arr[j];
        Arr[j]=Arr[j+1];
    }
    for(int k=1;k<size;k+=2){
        Arr[k]=rArr[k];
    }
    cout<<" { ";
    for(int i=0;i<size;i++){
        cout<<Arr[i]<<" ";
    }
    cout<<" } ";

    

}