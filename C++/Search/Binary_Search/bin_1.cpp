#include<iostream>
using namespace std;

int binarySearch(int Arr[],int size,int key){
    int start =0;
    int end=size-1;
    int mid=start+((end-start)/2);
    while(start<=end){
        if(Arr[mid]==key){
            return mid;
        }else{
            if(Arr[mid-1]<Arr[mid]){
               if(Arr[mid]<key){
                   start=mid+1;
               }else{
                   end=mid-1;
               }
            }else{
              if(Arr[mid]<key){
                  end=mid-1;
              }else{
                  start=mid+1;
              }
            }
        }
            mid=start+((end-start)/2);
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

    cout<<"Please enter the value which you want to search from above array : ";  
    int key;  
    cin>>key;
      
    int index=binarySearch(Arr,size,key);
    if(index==-1){
        cout<<key<<" is Not Found "<<endl;
    }else{
    cout<<"The index number of "<<key <<" is : "<<index<<endl;
    }

}