// Write an Algorithm to implement Bubble Sort

#include<iostream>
#include<vector>
using namespace std;

void bubbleSort( vector<int>& arr ){
    
    for(int round=1;round<arr.size();round++){
       bool isSwaping = false;

       for(int index=0;index<(arr.size()-round);index++){
        if(arr[index]>arr[index+1]){
            swap(arr[index],arr[index+1]);
            isSwaping =true;
        }
       }

       if(isSwaping==false){
        break;
       }

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
 bubbleSort(arr);
 printArray(arr);

return 0;
}