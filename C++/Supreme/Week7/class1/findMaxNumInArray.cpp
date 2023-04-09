// You are given an Array, Find the Max Value Element Present in the Given Array
// eg: arr[] ={ 1,3,6,7,2,9,8,5,7}
// output: 9 is Max element

#include<iostream>
#include<vector>
using namespace std;
 
 int findMax(vector<int> &arr, int &size, int &maxi){
     
     // base condition
     if(size<0){
        return maxi;
     }

     //processing
     if(arr[size]>maxi){
        maxi = arr[size];
     }
      
      size--;

     //recursive call
     return findMax(arr,size,maxi);

 }

 void takeInput(vector<int> &arr, int size){

    // base condition
    if(size<0){
        return;
    }
     
     // recursive call
     takeInput(arr,size-1);

    // processing
    cout<<"Enter the value of Arr[ "<<size<<" ] : ";
    cin>>arr[size];

 }

int main(){
      
      int size;
      cout<<"Enter the size of Array : ";
      cin>>size;

      // create vector of this size
      vector<int> arr(size);

      // take input from user
      takeInput( arr, size-1);
      
      int maxi = INT_MIN;

      int max = findMax(arr, size,maxi);

      cout <<"Max Element in the Given Array is : "<<max<<endl;

      return 0;
}