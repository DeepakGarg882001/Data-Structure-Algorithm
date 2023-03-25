// Take input Upto N from user and print there Double of each Element of an Array.
// arr[]={1,2,3,4,5,6}
// output :  2  4  6  8  10  12


#include<iostream>
#include<vector>
using namespace std;

void printDouble( vector<int>& arr){

     int size=arr.size();

     for(int index=0; index<size; index++){
       cout <<" "<<arr[index]*2<<" ";
     }

}

void takeInput( vector<int>& arr ){
    
     int size=arr.size();

     for(int index=0; index<size; index++){
        cout<<"Enter the value of Arr[ "<<index<<" ] : ";
        cin>>arr[index];
     }


}

int main(){
     
     int size;
     cout<<"Enter the size of an Array : ";
     cin>>size;

     // create a vector
     vector<int> arr(size);

     // take input from user
     takeInput(arr);
     
     // print doubles
     printDouble(arr);

    return 0;
}