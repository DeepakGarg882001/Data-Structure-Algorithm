// You are given two arrays , return the Union of these two arrays

// eg: arr[]={1,3,5,7,9,10,1,2}
//     brr[]={2,4,3,6,8,11,8,4}

// output:{1,2,3,4,5,6,7,8,9,10,11}

// Note: order of Element does not matters in output
//       Assuming Duplicate May Persent in given Input


#include<iostream>
#include<vector>
using namespace std;

void printArray( vector<int> &ans ){

    cout<<"{ ";
    for(int index=0; index<ans.size(); index++){
        cout<<ans[index]<<" ";
    }
    cout<<"}"<<endl;
}

bool isPresent( vector<int> &ans, int val){

    for(int index=0; index<ans.size() ; index++){
        if(ans[index]==val){
            return true;
        }
    }
 return false;
}

void insertArray( vector<int> &ans, vector<int> &arr){

    for(int index=0; index<arr.size(); index++){
       if( isPresent( ans, arr[index] ) ){
           continue;
       }else{
         ans.push_back(arr[index]);
       }
    }

 }

void  takeInput(vector<int>&arr){
     
     for(int index=0; index<arr.size(); index++){
        cout<<"Enter the value of Arr[ "<<index<<" ] : ";
        cin>>arr[index];
     }
 
}

int main(){

    int size1;
    cout<<"Enter the size of First Array : ";
    cin>> size1;
     
     // create first vector
     vector<int> arr(size1);

    // take Input from user
     takeInput(arr);

     // size of second array
     int size2;
     cout<<"Enter the size of second Array : ";
     cin>>size2;

     // create second vector
     vector<int> brr(size2);

     // take Input from User
     takeInput(brr);

     // create a Answer vector
     vector<int> ans;

     insertArray(ans, arr);
     insertArray(ans, brr);

     // print answer array
     printArray(ans);

     return 0;
}