#include<iostream>
using namespace std;

int main(){
    cout<<"Please enter the size of array : ";
    int size;
    cin>>size;
    int Arr[100];
    for(int i=0;i<size;i++){
      cout<<"Please enter the value of Arr["<<i<<"] : ";
      cin >> Arr[i];
    }

    int rArr[100];
    for(int k=0;k<size;k++){
        int j=size-k-1;
        rArr[k]=Arr[j];
    }
   
    cout<< "So ,the reverse of Above array is : { ";
    for(int l=0;l<size; l++){
        cout<<rArr[l]<<" ";
    }
    cout<<"}"<<endl;

}