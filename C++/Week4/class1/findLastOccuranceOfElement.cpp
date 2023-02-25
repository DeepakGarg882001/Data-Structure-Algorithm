// arr={ 1,2,3,4,4,4,4,4,5,6,7}
// target = 4;
// output : Last occurance of 4 is at 7th index

#include <iostream>
#include <vector>
using namespace std;

int findTargetIndex(vector<int> arr, int key){
          int start = 0;
          int end = arr.size()-1;
          int ans=-1;
          int mid = start + (end - start)/2;  
          
          while(start<=end){

            if(arr[mid]==key){
                ans = mid;
                start = mid+1;
            }
            if(arr[mid]<key){
               start = mid+1;
            }else if(arr[mid]>key){
                end = mid-1;
            }
               
            mid = start + (end - start)/2;  
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
    
    int indexOfTarget = findTargetIndex(arr,key);
    if(indexOfTarget == -1){
        cout<<"Not Found the Element Value "<<key<<" in given Array"<<endl;
    }else{
    cout<<"Last Occurance Index Value of Element "<<key<<" is : "<<indexOfTarget<<endl;
    }
}