// write a algorithm of quick sort to sort a given array

#include<iostream>
#include<vector>
using namespace std;

void checkLeftRight(int start, int end , int rightIndex, vector<int> &arr){
       
       while( (start<rightIndex) && (end >rightIndex) ){
               
               while(arr[start]<arr[rightIndex]){
                start++;
               }
            
               while(arr[end ]>arr[rightIndex]){
                end--;
               }

               if( (start<rightIndex) && (end >rightIndex) ){
                swap(arr[start],arr[end ]);
               }

          } 

}

void countSmaller( int &count, int &start, int &end, vector<int> &arr ){
       
       for(int index = start+1; index<=end; index++ ){
              
              if(arr[start]>arr[index]){
                count++;
              }

       }

}

void quickSort( vector<int> &arr , int start , int end ){
         
        // base condition
          if(start>=end){
            return;
          }
        
        // processing
         
        int element = arr[start];

        // count
        int count = 0;

        // count elements less than first element
        countSmaller(count,start,end,arr);
            
        int rightIndex = start+count;

        // now place first element at right position
        swap(arr[start], arr[rightIndex]);

        // check all left and right side element
        checkLeftRight( start, end , rightIndex , arr );

          //recursive call

           // left side
           quickSort(arr,start,rightIndex-1);

           // right side
           quickSort(arr,rightIndex+1,end);





}

void takeInput( vector<int> &arr,int index ){
      
      // base case
      if(index<0){
        return;
      }

      // recursive call
      takeInput(arr, index-1);

      // processing
      cout<<"Enter the value of Arr["<<index<<"] : ";
      cin >> arr[index];

}


int main(){
      
      // size of array
      int size;

      cout<<"Enter the size of Array : ";
      cin>> size;

      // create a vector
      vector<int> arr(size);

      // take input from user
      takeInput(arr,size-1);
     
      // store starting and ending index
      int start =0;
      int end = size-1;
      
      // sort the array
      quickSort(arr,start,end);

      // print array
         for(int index=0; index<size; index++){
            cout<<arr[index]<<" ";
         }

      return 0;
}
