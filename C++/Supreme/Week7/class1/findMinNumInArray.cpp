//  find minimum number from given array
// eg: arr[] ={ 1,3,6,7,2,9,8,5,7}
// output: 1 is Min element


#include<iostream>
#include<vector>
using namespace std;

void findMin( vector<int> arr,int end,int& min){

    // Base condition
    if(end<0){
        return ;
    }
       
    // check min
    if(arr[end]<min){
        min=arr[end];
    }
    
    // recursive call
    findMin(arr, end-1,min);

}


void takeInput(vector<int> &arr){
     
      for(int index=0; index<arr.size();index++){
         
         cout<<"Enter the value of Arr[ "<<index<<" ] : ";
         cin>>arr[index];

      }
}


int main(){
      
      int size;
      cout<<"Enter the size of an array : ";
      cin>> size;
    
      vector<int> arr(size);

      takeInput(arr);

      int minElement= INT_MAX;

     findMin(arr,size-1,minElement);
         
      cout<<"Min Element is : "<<minElement<<endl;

      return 0;
}