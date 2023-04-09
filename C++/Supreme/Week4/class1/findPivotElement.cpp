// arr[]= {5,10,15,1,2,4}
// output : 15 is the pivot Element value

// Note : 1). array should be rotated and shorted array
//        2). No duplicate Element should be Persent

#include <iostream>
#include <vector>
using namespace std;

int findPivotIndex(vector<int> arr)
{

   int start=0;
    int end= arr.size()-1;
    int mid= start+(end-start)/2;
    while(start < end) {
        if(mid+1 < arr.size() && arr[mid] > arr[mid+1])
        return mid;
        if(mid-1 >= 0 && arr[mid-1] > arr[mid])
        return mid-1;

        if(arr[start] >= arr[mid])
        end = mid - 1;
        else
        start = mid ;
        mid = start + (end-start)/2;
    }
    return start; 
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

    int pivotIndex = findPivotIndex(arr);

    cout << "Pivot Value is : " << arr[pivotIndex] << " found at index : " << pivotIndex << endl;
}
