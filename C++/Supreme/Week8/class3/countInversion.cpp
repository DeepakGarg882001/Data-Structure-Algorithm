// Solve count Inversion Problem HackerRank


#include<iostream>
#include<vector>
using namespace std;

void mergeArray( vector<int> &arr, int &count, int start, int end){
        
        // find mid
        int mid = start+ (end-start)/2;
         
         // length of first array
         int length1 = mid-start+1;

         // length of second array
         int length2 = end-mid;

        // create a new array of length 1
         vector<int> arr1(length1);
        
        // create a new Array of length 2
         vector<int> arr2(length2);

        // copy data
        for(int index= 0; index<length1; index++){
          arr1[index]  = arr[start+index];
        }
        // copy data
        for(int index= 0; index<length2; index++){
          arr2[index]  = arr[mid+1+index];
        }
        
        // create some variables
        int i = 0;
        int j = 0;
        int k = start;

        // sort elements
        while( i<length1 && j<length2 ){

          if(arr1[i]<=arr2[j]){
              arr[k] = arr1[i];
              k++;
              i++;
          }else{
            arr[k] = arr2[j];
            k++;
            j++;
            count = count + mid-(i+start)+1;
          }
        }
          
        // insert remaining 
        for( ; i<length1; i++){
          arr[k++] = arr1[i];
        }

        for( ; j<length2; j++){
          arr[k++] = arr2[j];
        }
}    

void mergeSort( vector<int> &arr,int &count, int start, int end){
          
          // base condition 
          if(start>=end){
            return;
          }

          // find mid
          int mid = start+(end-start)/2; 

          // sort left part
          mergeSort(arr, count, start, mid);
          // sort right part
          mergeSort(arr, count, mid+1, end);
         
          // mergeArray 
          mergeArray(arr, count,start, end);



}

void takeInput( vector<int> &arr ){
          
          // run a loop
          for( int index=0; index<arr.size(); index++){
             cout<<"Enter the value of Arr["<<index<<"] : ";
             cin>>arr[index];

          }
}

int main(){
      
      // take length
      int N;
      cout<<"Enter the size of Array : ";
      cin>>N;

      // create a vector of this size
      vector<int> arr(N);

      // take Input from user
      takeInput(arr);

      // store number of Inversions
      int count = 0;

      // find count Inversion
      mergeSort(arr,count,0,arr.size()-1);

      cout<<"Answer is : " << count<<endl;
      
      return 0;
}