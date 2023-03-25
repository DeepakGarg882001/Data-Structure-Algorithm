// You are given an Array and a Key, Find that key using Binary Search with Recursion
// eg: arr[] ={1,2,3,4,5,6,7}
// key = 6
// output: found at index 5

#include<iostream>
#include<vector>
using namespace std;

int binarySearch( vector<int> &arr, int &key, int &start, int &end ){
         
         // base condition
         if(start>end){
            return -1;
         }
          
          // processing
          int mid = start+(end-start)/2;

         if(arr[mid]==key){
            return mid;
         }

         // recursive call
        if(arr[mid]<key){
            start=mid+1;
        }else{
            end=mid-1;
        }

        return binarySearch(arr,key,start,end);


}

int getKey(){
    
    int key;
    cout<<"Enter the value of Key : ";
    cin >> key;

    return key;
}

void takeInput(vector<int> &arr,int index){
      
      // base condition
      if(index<0){
        return;
      }

      // recursive call
      takeInput(arr,index-1);

      // processing
      cout<<"Enter the Value of Arr[ "<<index<<" ] : ";
      cin>>arr[index];
}

int main(){
       
       int size;
       cout<<"Enter the size of Array : ";
       cin>>size;

       // create a vector
       vector<int> arr(size);

       cout<<"NOTE : All element in Array Should be INCREASING Order"<<endl;

       // take input from user
       takeInput(arr,size-1);
       
       int key = getKey();
          
       // starting index
       int start =0;

       // ending index
       int end = arr.size()-1;

       // search key using binary search
       int indexIS = binarySearch(arr,key,start,end);

       if(indexIS==-1){
        cout<<"Key ("<<key<<") is Not Found"<<endl;
       }else{
        cout<<"Key ("<<key<<") is Found at index "<<indexIS<<endl;
       }

    return 0;
}