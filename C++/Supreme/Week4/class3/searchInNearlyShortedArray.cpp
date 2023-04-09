// Write a Algorithm to search in a nearly shorted array

#include<iostream>
#include<vector>
using namespace std;



void takeInputs(vector<int>&arr){
   
   int size = arr.capacity();

   for(int index=0; index<size;index++){
      cout <<"Please Enter the value of Arr[ "<<index<<" ] : ";
      cin>>arr[index];
   }

}

int getKey(){
    int key;
    cout <<"Enter the value of Target Key which you want to search : ";
    cin >> key;

    return key;
}


int main(){

   int size;
   cout<<"Enter the size of Array : ";
   cin >> size;

   vector<int> arr(size);

   takeInputs(arr);
   int key = getKey();

   


    

}