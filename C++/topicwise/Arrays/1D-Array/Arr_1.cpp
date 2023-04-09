#include<iostream>
using namespace std;

int main(){
    cout<<"Please Enter the value of numbers of values in array : ";
    int i;
    int Arr[i];
    cin>>i;

    for(int j=0;j<i;j++){
        cout<<"Please enter the array values of Arr["<<j<<"] : ";
        cin>>Arr[j];
        cout<<endl;
    }
   for(int k=0;k<i;k++){
      cout << Arr[k]<<" ";
   }
   

}