// You are given an Array of size n
// all the elements will be either 0 or 1
// Now sort the all 0s ans 1s
// eg: arr[] ={ 0,0,1,0,1,1,1,0,1,0}
// output : { 0,0,0,0,0,1,1,1,1,1}


// using 3 pointer approch

#include<iostream>
#include<vector>
using namespace std;

void printArray( vector<int> &arr ){

       cout<<"{ ";  
      
       for(int index=0; index<arr.size(); index++){
            
            cout<<arr[index]<<"  ";

       }
       cout <<"}"<<endl;

}

void sortArray(vector<int> &arr){

    int start=0;
    int mid=0;
    int end= arr.size()-1;

    while(mid<=end){
        
        if(arr[mid]!=0){
            swap(arr[mid],arr[end]);
            end--;
        }else{
            swap(arr[start],arr[mid]);
            start++;
            mid++;
        }

    }

}

void takeInput(vector<int>&arr){

    for(int index=0; index<arr.size(); index++){
         cout<<"Enter the Value of Arr[ "<<index<<" ] : ";
         cin>>arr[index];
    }
}

int main(){
   
   int size;
   cout<<"Enter the size of Array : ";
   cin>> size;
    
   // create a vector of this size
   vector<int> arr(size);

   cout<<"NOTE : You can enter only 0 or 1"<<endl;
 
   // takeInput from user
   takeInput(arr);
    
    // sort 0s and 1s
   sortArray(arr);
  
   // Print Array after sorting
   printArray(arr);

return 0;
}