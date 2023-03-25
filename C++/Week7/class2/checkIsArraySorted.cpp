// You are given an Array, Check is this Array Sorted or Not?
// eg: arr[] = {1,2,3,6,7,8,10}
//     output: Sorted

// eg: arr[] = {1,2,4,6,3,7,8,9}
//     output: Not Sorted


#include<iostream>
#include<vector>
using namespace std;

bool checkSorted(vector<int>&arr,int &index){
          
          //base condition
          if(index<=0){
            return true;
          }
         
          // processing
          if(arr[index]<arr[index-1]){
            return false;
          }
           
           index--;

          return checkSorted(arr, index);
}

void takeInput(vector<int> &arr, int index ){
   
   // base condition
   if(index<0){
    return;
   }

   // recursive call
   takeInput(arr, index-1);

   // processing
   cout<<"Enter the value of Arr[ "<<index<<" ] : ";
   cin>>arr[index];
}


int main(){
     
     int size;
     cout <<"Enter the size of Array : ";
     cin>>size;

     // create a vector
     vector<int> arr(size);
     
     // take input from user
     takeInput(arr,size-1);
     
     size--;

     bool isSorted = checkSorted(arr,size);

     if(isSorted){
        cout<<"Array is Sorted In Increasing Order"<<endl;
     }else{
        cout<<"Array is Not Sorted in Increasing Order"<<endl;
     }

return 0;
}