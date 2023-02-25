// Write an Algorithm to implement Selection Sort

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void selectionSort( vector<int>& arr ){
     
      for( int index=0 ; index<arr.size()-1 ; index++ ){
             int minElement =index;

             for(int next = index+1;next<arr.size();next++){
                 if(arr[next]<arr[minElement]){
                    minElement=next;
                 }

             }
            swap(arr[index],arr[minElement]);

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
 selectionSort(arr);
 printArray(arr);

return 0;
}