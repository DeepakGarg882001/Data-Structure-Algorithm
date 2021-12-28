#include<iostream>
using namespace std;

void shortArray(int Arr[],int size){
    
    int crrunt;
    int j;
    for(int i=1;i<size;i++){
       crrunt=Arr[i];
       j=i-1;

       while (j >= 0 && Arr[j] > crrunt)
        {
            Arr[j + 1] = Arr[j];
            j = j - 1;
        }
        Arr[j + 1] = crrunt;
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