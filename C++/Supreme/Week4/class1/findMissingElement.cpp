// arr[]={1,2,3,4,6,7,8,9}
// output: 5 is missing


#include <iostream>
#include <vector>
using namespace std;

int findMissingElement(vector<int> arr){
          int start = 0;
          int end = arr.size()-1;
          int ans=-1;
          int mid = start + (end - start)/2;  
          
          while(start<=end){

            if(arr[mid]==arr[0]+mid){
              start= mid+1;
            }else{
                ans = arr[mid]-1;
                end= mid-1;
            }
               
            mid = start + (end - start)/2;  
          }

   return ans;

}

void takeInput(vector<int> &arr)
{

    int size = arr.capacity();

    for (int index = 0; index < size; index++)
    {
        cout << "Enter the Value of Element Arr[ " << index << " ] : ";
        cin >> arr[index];
    }
}





int main()
{

    int size;
    cout << "Enter the size of an Array : ";
    cin >> size;

    vector<int> arr(size);

    takeInput(arr);

   
    int missingNum = findMissingElement(arr);
   
    cout<<" Missing Element  is : "<<missingNum<<endl;
   
}