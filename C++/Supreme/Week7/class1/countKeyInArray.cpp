// You are Given an Array and a Key , Find the number of count of which is present in the Array
// eg: arr[] ={ 1,3,6,7,2,9,8,5,7}
// key = 7
// output: 7 is persent and count is 2

#include<iostream>
#include<vector>
using namespace std;

void countKey( vector<int> &arr, int &count, int &index, int &key ){

    // base condition
    if(index<0){
        return;
    }
    
    // processing
    if(arr[index]==key){
        count++;
    }

    index--;

    // recursive call
    countKey(arr, count, index,key);

}

void takeInput(vector<int> &arr,int index){
       
       // Base condition
       if(index<0){
        return;
       }

       // recursive call
       takeInput(arr, index-1);

       // processing
       cout<<"Enter the value of Arr[ "<<index<<" ] : ";
       cin>>arr[index];
}

int getKey(){
    int key;
    cout <<"Enter the value of Key : ";
    cin >> key;

    return key;
}

int main(){
    
    int size;
    cout<<"Enter the size of Array : ";
    cin >> size;

    // create a vector of this size
    vector<int> arr(size);

    // take input from user
     takeInput(arr,size-1); 
     
     // take Key from user
     int key = getKey();

    int count=0;
    size--;
    //count number of Key in ArraY
    countKey(arr,count,size,key);

    cout<<"Key( "<<key<<" ) Found in Array at "<<count<<" times"<<endl;

    return 0;
}