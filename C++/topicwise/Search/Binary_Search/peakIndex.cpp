#include<iostream>
using namespace std;

int peakIndexSearch(int Arr[],int size){
    int start=0;
    int end=size -1;
    int mid= start+((end-start)/2);
    while (start<=end){
        if(Arr[mid]<Arr[mid+1]){
            start=mid+1;
        }else if(Arr[mid]<Arr[mid-1]){
           end=mid-1;
        }else{
            return mid;
        }
        mid= start+((end-start)/2);
    }
    return -1;
}

int main(){
    cout<<"Please enter the value of size of Array which you want to create : ";
    int size;
    cin>>size;
    int Arr[100];
    for(int i=0;i<size;i++){
        cout<<"Please enter the value of Arr["<<i<<"] : ";
        cin>>Arr[i];
    }

    // cout<<"Please enter the value which you want to search from above array : ";  
    // int key;  
    // cin>>key;
      
      int peakIndex=peakIndexSearch(Arr,size);
     
     cout << "the peak Index value of above Array is : "<<peakIndex<<endl;
}