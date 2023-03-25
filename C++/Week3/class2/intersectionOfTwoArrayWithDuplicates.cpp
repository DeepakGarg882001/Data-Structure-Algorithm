// You are given two arrays , return the Intersection of these two arrays
// eg: arr[]={1,2,3,5,5,7,9,3,10,7}
//     brr[]={7,2,4,6,7,8,5,11}
// output:{2,7,7,5}
// Note: order of Element does not matters in output
//       Assuming Duplicate May Persent in given Input
//       


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

void findIntersection( vector<int> &ans, vector<int> &arr , vector<int> &brr ){

    // run outer loop
    for(int index=0; index<arr.size(); index++ ){
        
        //run inner loop
        for(int next=0; next<brr.size(); next++ ){
            if(arr[index]==brr[next]){
                ans.push_back(arr[index]);
                brr[next]=INT_MIN;
                break;
            }

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

     findIntersection(ans, arr,brr);

     // print answer array
     printArray(ans);

     return 0;
}