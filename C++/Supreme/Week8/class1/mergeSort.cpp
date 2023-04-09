// write a Algorithm of Merge Sort using Recursion
// eg: arr[] = {1,3,6,8,2,9,4}
// output: {1,2,3,4,6,8,9}


#include<iostream>
#include<vector>
using namespace std;


void printArray( vector<int> &arr ){
      
      //run loop
      for(int index=0; index<arr.size(); index++ ){
            cout<<arr[index]<<" ";
      }

      cout<<endl;

}

void mergeArray( vector<int> &arr , int start , int end ){
     
     // Now divide the above array into two part

     // find mid
     int mid = start+(end-start)/2;

     // length of Array 1 and Array 2
     int len1 = mid-start+1;

     int len2 = end-mid+1 +1;

     // create Two New array 
     vector<int> arr1(len1);

     vector<int> arr2(len2);

     // copy original data into new array
      
      int tempIndex =start;
       
       //copy first array
      for(int index=0;index<len1; index++){
            arr1[index] =  arr[tempIndex++];
      }

      tempIndex = mid+1;
       // copy second array
       for(int index =0; index<len2; index++){
            arr2[index] = arr[tempIndex++];
       }


       // Now sort the Array
       int index1 =0;
       int index2 =0;
       int index = start;

       while( index1<len1 && index2<len2 ){
              
              if(arr1[index1]<arr2[index2]){
                  arr[index++] = arr1[index1++];
              }else{
                  arr[index++] = arr2[index2++];
              }

       }

       // insert Element if any one remaining

       // insert from array 1
          while (index1<len1){
                arr[index++] = arr1[index1++];
          }

       // insert from array 2
          while(index2<len2){
             arr[index++] = arr2[index2++];
          }
          
        
}


void mergeSort( vector<int> &arr , int start , int end ){
    
    // base case
    if(start>=end){
      return;
    }
   
    // find mid
    int mid = start+(end-start)/2;
      
    //recursive call
     
     // sort krr do left part ko
     mergeSort(arr, start, mid);

     // sort krr do right part ko
     mergeSort(arr, mid+1, end);


     //merge in sorting way
     mergeArray(arr,start,end);
}



void takeInput( vector<int> &arr , int index ){
        
        // base condition
        if(index<0){
            return;
        }

        //recursive call
        takeInput(arr, index-1);

        // processing
        cout<<"Enter the value of Arr[ "<<index<<" ] : ";
        cin>>arr[index];

}

int main(){
      
      int size;
      cout<<"Enter the size of Array : ";
      cin>>size;

      // create a vector of this size
      vector<int> arr(size);

      // take input from user
      takeInput(arr,size-1);
      
      // store staring and ending index of array
      int start = 0;
      int end = size-1;

      // sort the vector using merge sort
      mergeSort(arr,start,end);

      // print the soted array
      printArray(arr);

      return 0;
}
