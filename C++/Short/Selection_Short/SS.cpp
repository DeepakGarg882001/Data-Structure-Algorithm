#include<iostream>
using namespace std;

void shortArray(int Arr[],int size){

    for(int i=0;i<size-1;i++){
        int min=0;

        for(int j=i+1;j<size;j++){
            if(Arr[j]<Arr[i]){
                min=Arr[j];
                Arr[j]=Arr[i];
                Arr[i]=min;
            }
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