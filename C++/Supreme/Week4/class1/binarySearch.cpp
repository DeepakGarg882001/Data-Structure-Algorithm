// Write a Algorithm for Binary Search

#include<iostream>
#include<vector>
using namespace std;

int useBinarySearch(vector<int>arr , int key){
     
     int start =0;
     int end = arr.size() -1;
     int mid = start + ((end - start)/2);

     while (start<=end)
     { 
     
        int element = arr[mid];
        if(element == key){
            return mid;
        }else if(element<key){
            start = mid+1;
        }else if(element>key){
            end = mid-1;
        } 
        
        mid = start + ((end - start)/2);
      


     }
     
     return -1;


}

void printArray(vector<int>&arr){

   for(int index=0; index<arr.size();index++){
      cout <<"arr[ "<<index<<" ] is : "<<arr[index]<<endl;
   }

}
void takeInputs(vector<int>&arr){
   
   int size = arr.capacity();

   for(int index=0; index<size;index++){
      cout <<"Please Enter the value of Arr[ "<<index<<" ] : ";
      cin>>arr[index];
   }

}

int getKey(){
    int key;
    cout <<"Enter the value of Target Key which you want to search : ";
    cin >> key;

    return key;
}



int main(){
 
 int size;
 cout << "Enter the Size of an Array : ";
 cin >> size;
 cout << "Note : All input values must be in Montonic way"<<endl;
 vector<int> arr(size);

 takeInputs(arr);
//  cout <<"arr is : "<<(arr)<<endl;
 printArray(arr);
 int key = getKey();

 int indexOfTarget = useBinarySearch(arr,key);

 if(indexOfTarget == -1){
    cout << " Target Element "<<key<<" is not Perseent in the Array";
 }else{
    cout << "Target Element "<<key<<" is found at index : "<<indexOfTarget;
 } 

return 0;

}