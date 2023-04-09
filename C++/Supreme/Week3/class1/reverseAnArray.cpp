// Reverse an Array
// eg: arr[]={1,2,3,4,5,6}
// output: {6,5,4,3,2,1}


#include<iostream>
#include<vector>
using namespace std;

void printArray( vector<int>& arr){

     int size=arr.size();
     cout<<"{";
     for(int index=0; index<size; index++){
       cout <<" "<<arr[index]<<" ";
     }
     cout<<"} "<<endl;


}

void  reverseArray( vector<int>& arr ){
    
    int start=0;
    int end=arr.size()-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
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
     
     // reverse array
     reverseArray(arr);

     //printArray
     printArray(arr);

     return 0;

}
     