// arr[]={1,2,3,4,4,4,4,4,5,6,7}
// output : 4is persent 5times

#include<iostream>
#include<vector>
using namespace std;

int findLastOcc(vector<int>arr,int key){
    int start=0;
    int end=arr.size()-1;
    int mid = start+(end-start)/2;
    int ans =-1;
    while(start<=end){
       if(arr[mid]==key){
        ans=mid;
       }
       if(arr[mid]>key){
        end=mid-1;
       }else{
        start=mid+1;
       }
       mid = start+(end-start)/2;
    }
 return ans;
}

int findFirstOcc(vector<int>arr,int key){
    int start=0;
    int end=arr.size()-1;
    int mid = start+(end-start)/2;
    int ans =-1;
    while(start<=end){
      if(arr[mid]==key){
        ans= mid;
      }
      if(arr[mid]<key){
        start= mid+1;
      }else{
        end = mid-1;
      }
      mid = start+(end-start)/2;
    }
 return ans;
}


void takeInput(vector<int> &arr)
{

    int size = arr.capacity();

    for (int index = 0; index < size; index++)
    {
        cout << "Enter the Value of Element Arr[ " << index << " ] : ";
        cin >> arr[index];
    }
}

int takeTagetKey(){
     int key;
     cout<<"Enter the Element Value of which you want to know the Last Occurance : ";
     cin>>key;
     return key;
}



int main()
{

    int size;
    cout << "Enter the size of an Array : ";
    cin >> size;

    vector<int> arr(size);

    takeInput(arr);

    int key=takeTagetKey();
    
    int firstOccurance = findFirstOcc(arr,key);
    int lastOccurance = findLastOcc(arr,key);
    
    int TotalOccurance = lastOccurance-firstOccurance+1;
    if(lastOccurance==-1||firstOccurance==-1){
        cout <<"Element "<<key<<" is Not Present "<<endl;
    }else{
    cout<<"Element "<<key<<" is Present "<<TotalOccurance<<" times in given array"<<endl;
    }
}