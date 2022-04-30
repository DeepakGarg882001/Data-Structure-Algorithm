#include<iostream>
using namespace std;

void CreateArray(int Arr[],int size){

    for(int i=0;i<size;i++){
        cout<<"Please enter the value of Arr["<<i<<"] : ";
        cin>>Arr[i];
    }

    cout<<endl<<endl;
   
}

void MergeArray(int Arr1[], int size1, int Arr2[], int size2,int Arr3[] ){
     int i=0,j=0,k=0;
     
     while(i<size1 || j<size2){
       if(i>=size1){
           Arr3[k]=Arr2[j];
           j++;
           k++;
       }
       else if(j>=size2){
           Arr3[k]=Arr1[i];
           i++;
           k++;
       }
       else if(Arr1[i]<=Arr2[j]){
               Arr3[k]=Arr1[i];
                i++;
                k++;  
       }
       else{
           if(Arr1[i]>=Arr2[j]){
               Arr3[k]=Arr2[j];
               j++;
               k++;
           }
       }

     }
}

void printMergeArray(int Arr3[],int size3){
    cout <<"Merge Shorted Array is : { ";

    for(int i=0;i<size3;i++){
        cout<<Arr3[i]<<" ";
    }
    cout<<"} "<<endl;
}

int main(){

    cout<<"Please Enter the size of Arr1 : ";
    int size1;
    cin>>size1;
    int Arr1[20];
    CreateArray(Arr1,size1);
    
    cout<<"Please Enter the size of Arr2 : ";
    int size2;
    cin>>size2;
    int Arr2[20];
    CreateArray(Arr2,size2);
    
    int Arr3[40];
    int size3=size1+size2;
    MergeArray(Arr1,size1,Arr2,size2,Arr3);
  
    printMergeArray(Arr3,size3);
}