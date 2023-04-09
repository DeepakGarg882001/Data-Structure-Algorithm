#include<iostream>
#include<vector>
using namespace std;

// Doubt : Here we are initialising vector without & symbol, but if we use & symbol then function does not runs Why?
void printArray(vector<int>arr){

   for(int index; index<arr.size();index++){
      cout <<"arr[ "<<index<<" ] is : "<<arr[index]<<endl;
   }

}

// Doubt : Here we are initialising vector with & symbol, so that we can make changes in original vector
void takeInputs(vector<int>arr){
   
   int size = arr.capacity();

   for(int index=0; index<size;index++){
       int num;
      cout <<"Please Enter the value of Arr[ "<<index<<" ] : ";
      cin>>num;
      arr.push_back(num);
   }

}


int main(){
 
 int size;
 cout << "Enter the Size of an Array : ";
 cin >> size;
 cout << "Note : All input values must be in Montonic way"<<endl;
 vector<int> arr(size);

 takeInputs(arr);
 printArray(arr);
 
return 0;

}
