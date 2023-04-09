// Find a unique element in the vector, In this we have many elements and each element is present twise in vector but only one element is present Once in vector. Find that element
// eg: arr[]={ 1,3,2,5,1,4,2,5,6,4,6}
// output: 3 is persent at single time
// using XOR operation

#include<iostream>
#include<vector>
using namespace std;

int findUniqueElement(vector<int>&arr){

    int ans =0;

    // run a loop
    for(int index=0; index<arr.size(); index++){
        ans = ans^arr[index];
    }

return ans;
}

void takeInput(vector<int>&arr){

    for(int index=0; index<arr.size(); index++){
         cout<<"Enter the Value of Arr[ "<<index<<" ] : ";
         cin>>arr[index];
    }
}

int main(){
   
   int size;
   cout<<"Enter the size of Array : ";
   cin>> size;
    
   // create a vector of this size
   vector<int> arr(size);

   // take Input from user
   takeInput(arr);

   int uniqueElement = findUniqueElement(arr);

   cout <<"Unique Element is : "<<uniqueElement<<endl;

   return 0;
}