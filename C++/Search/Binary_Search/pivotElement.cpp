#include<iostream>
using namespace std;

int searchKey(int Arr[],int size,int key ,int pivot){
    int start =0;
    int end= size-1;
    if(Arr[size-1]>key){
       start= pivot;
    }else{
       end= pivot;
    }
    int mid=start+((end-start)/2);

    while(start<=end){
        if(Arr[mid]==key){
            return mid;
        }else{
            if(Arr[mid]>key){
                end=mid-1;
            }else{
                start=mid +1;
            }
        }
        mid=start+((end-start)/2);
    }
    return -1;

}

int pivotIndex(int Arr[],int size){
    int start=0;
    int end= size-1;
    int mid= start+((end-start)/2);

    while(start<end){
        if( Arr[mid]<Arr[mid+1] && Arr[mid]<Arr[mid-1] ){
            return mid;
        }else{
            if(Arr[mid]<Arr[size-1]){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
      mid= start+((end-start)/2);
    }
    return -1;
}

int main(){
    cout<<"please enter the size of Array : ";
    int size;
    cin>>size;
    int Arr[100];
    for(int i=0; i<size;i++){
        cout<<"Enter the value of Arr["<<i<<"] : ";
        cin>>Arr[i];
    }

    cout<<"please enter the value ,which you want to search : ";
    int key;
    cin>>key;

    int pivot= pivotIndex(Arr,size);
    cout<<"pivotElement Index is : "<<pivot<<endl;

    int search=searchKey(Arr,size,key,pivot);

    if(search==-1){
        cout<<key<<" is Not Found "<<endl;
    }else{
        cout <<key<<" is found at index : "<<search<<endl;
    }
}