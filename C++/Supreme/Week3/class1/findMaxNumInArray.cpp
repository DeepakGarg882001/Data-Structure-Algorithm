// You have given an Array Take Input from user 
// find maximum number from it
// eg  arr[]={1,4,2,6,3,8,5}
// output : 8 is maximum

#include<iostream>
#include<vector>
using namespace std;

int findMaxNum(vector<int>& arr){
     int size= arr.size();
     int maxi=INT_MIN;

    for(int index=0;index<size;index++){
        if(arr[index]>maxi){
            maxi=arr[index];
        }
    }
 
 return maxi;
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
   
      // find max num
     int maxNum= findMaxNum(arr);
     
     cout <<"Max number is : "<<maxNum<<endl;
     
    return 0;
}