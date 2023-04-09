// Print all Element of an Array in Extreme Way. 
// arr[]={1,2,3,4,5,6,7,8}
// output = 1,8,2,7,3,6,4,5

#include<iostream>
#include<vector>
using namespace std;

void extremeWay(vector<int>& arr){

    int start=0;
    int end= arr.size()-1;

    while(start<=end){
        if(start==end){
            cout <<" "<<arr[start]<<endl;
        }else{
            cout<<" "<<arr[start]<<"  "<<arr[end]<<" ";
        }
        start++;
        end--;
    }

}

void takeInput(vector<int>& arr){

    int size= arr.size();

    for(int index=0;index<size;index++){
        cout <<"Enter the Value of Arr[ "<<index<<" ] : ";
        cin>>arr[index];
    }

}

int main(){
     
     int size;
     cout<<"Enter the size of Array : ";
     cin>>size;

     // create a vector
     vector<int> arr(size);

     // take input
     takeInput(arr);

     cout<<"Array in Extreme way will be like this"<<endl;

     // print extreme way
     extremeWay(arr);

    return 0;
}