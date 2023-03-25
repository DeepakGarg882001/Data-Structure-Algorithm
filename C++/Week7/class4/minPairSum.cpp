// You are given an Array of size N and it have distinct Elements( all elements are unique, No Duplicated Present )
// You are given an integer value of Target
// You have to tell the minimum Number of Elements required to reach Target Sum

// Note: you can use all Elements for infinity times
// Order Does Not matters

// eg:  arr[]= {1,2,3}
//    target = 5
// output:  1+1+1+1+1 = 5  , 5 elements required

//            1+1+1+2 = 5  , 4 elements required
//            1+1+2+1 = 5  , 4 elements required
//            1+2+1+1 = 5  , 4 elements required
//            2+1+1+1 = 5  , 4 elements required

//              1+1+3 = 5  , 3 elements required
//              1+3+1 = 5  , 3 elements required
//              3+1+1 = 5  , 3 elements required

//              1+2+2 = 5  , 3 elements required
//              2+1+2 = 5  , 3 elements required
//              2+2+1 = 5  , 3 elements required

//                2+3 = 5  , 2 elements required
//                3+2 = 5  , 2 elements required

// So the Answer is 2, i.e Minimum 2 elements are required to make sum equal to target



#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int findMinElements( vector<int> &arr , int target ){
     
     // base condition 1
     if(target==0){
        return 0;
     }
     // base condition 2
     if(target<0){
        return INT_MAX;
     }
     
     int ans =INT_MAX;
     
     // recursive call
     for(int index=0; index<arr.size(); index++){
         
         // call function for each element
        int result =findMinElements(arr,target-arr[index]);
        
        if(result!=INT_MAX){
            ans = min(ans,result);
        }

     }

     return ans+1;

}

int getTarget(){
    
    int key;
    cout<<"Enter the value of Target : ";
    cin >> key;

    return key;
}

void takeInput(vector<int> &arr,int index){
      
      // base condition
      if(index<0){
        return;
      }

      // recursive call
      takeInput(arr,index-1);

      // processing
      cout<<"Enter the Value of Arr[ "<<index<<" ] : ";
      cin>>arr[index];
}


int main(){
    
    int size;
    cout<<"Enter the Size of Array : ";
    cin >> size;

    // create a vector of this size
    vector<int> arr(size);

    // take input from user
    takeInput(arr,size-1);

    //get Target
    int target = getTarget();

    // find minimun elements
    int minElement = findMinElements(arr,target);

    cout<<" Min Elements required to make Sum equal to "<<target<<" are : "<<minElement<<endl;

return 0;
}


