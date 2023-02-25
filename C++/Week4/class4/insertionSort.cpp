// Write an Algorithm to implement Insertion Sort

#include<iostream>
#include<vector>
using namespace std;

void insertionSort( vector<int>& arr ){
      
      for(int round=1;round<arr.size();round++){
                 
                 int value = arr[round];
                 int index=round-1;
                 for(;index>=0;index--){
                    
                     if(value<arr[index]){
                        arr[index+1]=arr[index];
                     }else{
                        break;
                     }

                 }
                 
                 arr[index+1]= value;


      }


}

void printArray(vector<int>&arr){

   for(int index=0; index<arr.size();index++){
      cout <<"arr[ "<<index<<" ] is : "<<arr[index]<<endl;
   }

}

void takeInputs(vector<int>&arr){
   
   int size = arr.capacity();

   for(int index=0; index<size;index++){
      cout <<"Please Enter the value of Arr[ "<<index<<" ] : ";
      cin>>arr[index];
   }

}




int main(){
 
 int size;
 cout << "Enter the Size of an Array : ";
 cin >> size;
 vector<int> arr(size);

 takeInputs(arr);
 insertionSort(arr);
 printArray(arr);

return 0;
}