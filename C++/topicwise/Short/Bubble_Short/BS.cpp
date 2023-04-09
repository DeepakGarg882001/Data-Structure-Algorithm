#include<iostream>
using namespace std;

void shortArray(int Arr[],int size){
    int start=0;
    int end=size-1;

    while(start<end){
      int temp=0; 
      for(int i=0;i<end;i++){
         if(Arr[i]>Arr[i+1]){
            temp=Arr[i+1];
            Arr[i+1]=Arr[i];
            Arr[i]=temp;
           }
         }
        end=end-1;
        if(temp==0){
            break;
        }
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

   shortArray(Arr,size);  

   cout<<"The shorted Array is { ";
   for(int i=0;i<size;i++){
       cout<<Arr[i]<<" ";
   }    
   cout<<"}"<<endl;        
}