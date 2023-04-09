// You are given an Array of any size, and also given a Key(Target) Element.
// Check is Key Persent in the given Array or Not
// eg:  arr[]= { 1,4,2 ,6,3,5}
//      key = 5
//    output: Present

//      Key = 8
//   output: Not Present


#include<iostream>
#include<vector>
using namespace std;

bool searchKey( vector<int> &arr , int &key , int &end ){

    // base condition
    if(end<0){
        return false;
    }

    // processing
    if(arr[end]==key){
        return true;
    }

    end--;

    // recursive call
    return searchKey(arr,key,end);
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
    bool isPresent = searchKey(arr,key,size);

    if(isPresent){
        cout<<"Key value "<<key<<" is Present in the Given Array "<<endl;
    }else{
        cout<<"Key value "<<key<<" is Not Present in the Given Array "<<endl;
    }
return 0;
}