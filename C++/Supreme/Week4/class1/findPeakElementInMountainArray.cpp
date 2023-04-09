// arr[]= {0,10,5,3}
// output : 10 is the peak value

#include <iostream>
#include <vector>
using namespace std;

int findPeakValIndex(vector<int> arr)
{

    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {

        if( mid+1<arr.size() && arr[mid]<arr[mid+1]){
            start=mid+1;
        }else{
            end= mid;
        }
        mid = start + (end - start) / 2;
    }

    return -1;
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

    int peakIndex = findPeakValIndex(arr);

    cout << "Peak Value is : " << arr[peakIndex] << " found at index : " << peakIndex << endl;
}
