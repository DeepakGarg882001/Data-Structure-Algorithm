#include<iostream>
using namespace std;

void InsShortArray(int Arr[],int size){
    
    for(int i=1;i<size;i++){
        int current=Arr[i];
        int j=i-1;
        
        while(j>=0){
            if(Arr[j]>Arr[i]){
                Arr[j+1]=Arr[j];
            }else{
                break;
            }
            j=j-1;  
        }
        Arr[j+1]=current;

    }
}

int main(){
    cout<<"Please Enter the size of Array : ";
    int size;
    cin>>size;

    int Arr[100]={0};
    for(int i=0;i<size;i++){
        cout<<"Please enter the value of Arr["<<i<<"] : ";
        cin>>Arr[i];
    }  

   InsShortArray(Arr,size);  

   cout<<"The shorted Array is { ";
   for(int i=0;i<size;i++){
       cout<<Arr[i]<<" ";
   }    
   cout<<"}"<<endl;        
}