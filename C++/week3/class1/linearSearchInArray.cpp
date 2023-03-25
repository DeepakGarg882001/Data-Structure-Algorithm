// write a Linear search algorithm
// arr[]={1,2,3,4,5,6,7,8}
// target = 6;
// output = 6 found at index 5;

#include<iostream>
#include<vector>
using namespace std;

int findTarget( vector<int> arr,int key ){

    int size=arr.size();

     for(int index=0; index<size; index++){
        if(arr[index]==key){
            return index;
        }
     }

    return -1;
}

int getTarget(){

    int key;
    cout<<"Enter your Target Element : ";
    cin>>key;

    return key;
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
     
      // take the target key
     int key=getTarget();

     // search element linearly
    int targetIsAt = findTarget(arr,key);

     if(targetIsAt==-1){
        cout << "Element Not Found"<<endl;
     }else{
        cout <<"Element (" << key << ") Found At index : "<<targetIsAt<<endl;
     }

    return 0;
}