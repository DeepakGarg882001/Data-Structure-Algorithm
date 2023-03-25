// You are Given an Array and a Target Element.
// if Target Element is Present in the Given Array then return the Index value of Key
// eg: arr[] = {1,2,3,4,5,6}
//    target = 3
//    output: target Element is Present at Index 2

#include<iostream>
#include<vector>
using namespace std;

int searchKeyIndex( vector<int> &arr , int &key , int &size ){

    // base condtion
    if(size<0){
        return -1;
    }

    // processing
    if(arr[size]==key){
        return size;
    }

    size--;

    //recursive call
    return searchKeyIndex(arr, key, size);
}

int getTarget(){
      
      int key;
      cout<<"Enter the value of Target Element : ";
      cin >> key;

      return key;
}

void takeInput( vector<int> &arr){
     
     // run a loop
     for(int index=0; index<arr.size(); index++){
        cout<<"Enter the value of Arr[ "<<index<<" ] : ";
        cin>>arr[index];
     }

}

int main(){
    
    int size;
    cout<<"Enter the Size of Array : ";
    cin>> size;

    // create a vector of this size
    vector<int> arr(size);

    // take input from user
    takeInput(arr);

    // take key from user
    int key = getTarget();
     
     size--;

    // check key is persent or Not
    int indexIs = searchKeyIndex(arr,key,size);
    
    if(indexIs==-1){
        cout <<"Key ( "<<key<<" ) is Not Present"<<endl;
    }else{
         cout <<"Key ( "<<key<<" ) is Present at index "<<indexIs<<endl;
    }
    
    return 0;
}