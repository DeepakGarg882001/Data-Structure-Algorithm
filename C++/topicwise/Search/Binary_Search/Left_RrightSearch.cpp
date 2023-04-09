#include<iostream>
using namespace std;

int leftbinarySearch(int Arr[],int size,int key){
    int start =0;
    int end=size-1;
    int mid=start+((end-start)/2);
    while(start<=end){
        if(Arr[mid]==key){
            if(Arr[mid-1]==key){
               end=mid-1;
            }else{
                return mid;
            }
        }else{
            if(Arr[mid]<key ){
                start= mid+1;
            }else{
                end=mid-1;
            }
        }
        mid=start+((end-start)/2);
    }
    return -1;
}

int rightBinarySrearch(int Arr[],int size,int key){
    int start =0;
    int end=size-1;
    int mid=start+((end-start)/2);
    while(start<=end){
        if(Arr[mid]==key){
            if(Arr[mid+1]==key){
                start=mid+1;
            }else{
                return mid;
            }

        }else{
            if(Arr[mid]<key){
                start=mid+1;
            }else{
                end=mid-1;
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
      
    int indexleft=leftbinarySearch(Arr,size,key);
    int indexright=rightBinarySrearch(Arr,size,key);
    cout<<"Left most index number is : "<<indexleft<<endl;
    cout<<"Right most index number is : "<<indexright<<endl;
}