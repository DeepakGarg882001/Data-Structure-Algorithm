// You have given an Array Take Input from user 
// find maximum and maximum number from it
// eg  arr[]={1,4,2,6,3,8,5}
// output : 8 is maximum , 1 is minimum


#include<iostream>
#include<vector>
using namespace std;

 void findMinAndMax(vector<int>& arr){
      
       int size= arr.size();

       int mini=INT_MAX;
       int maxi=INT_MIN;

       
    for(int index=0;index<size;index++){
       if(arr[index]>maxi){
        maxi=arr[index];
       }
       if(arr[index]<mini){
        mini= arr[index];
       }
    }

    cout <<"Max Number is : "<<maxi<<endl;
    cout <<"Min Number is : "<<mini<<endl;
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
   
      // find min and max num
      findMinAndMax(arr);

    return 0;
}