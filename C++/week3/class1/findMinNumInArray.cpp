// You have given an Array Take Input from user 
// find minimum number from it
// eg  arr[]={1,4,2,6,3,8,5}
// output : 1 is minimum


#include<iostream>
#include<vector>
using namespace std;


int findMinNum(vector<int>& arr){
     int size= arr.size();
     int mini=INT_MAX;

    for(int index=0;index<size;index++){
        if(arr[index]<mini){
            mini=arr[index];
        }
    }
 
 return mini;
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
      cout<<"Enter the size of an Array : ";
      cin>>size;

      // create a vector
      vector<int> arr(size);

      //takeInput from user
      takeInput(arr);
   
      // find min num
     int minNum= findMinNum(arr);
     
     cout <<"Min number is : "<<minNum<<endl;

    return 0;
}