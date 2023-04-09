// Debug the code. This code is implementation for binary search for calculating ceil index. The ceil index is the index of the smallest element in the array that is greater than or equal to a given target value.


// int ceilIndex(int arr[], int n, int target) {
//     int left = 0;
//     int right = n - 1;
//     int ceil = -1;

//     while (left <= right) {
//         int mid = left + (right - left) / 2;
//         if (arr[mid] == target)
//             return mid;
//         else if (arr[mid] < target)
//             left = mid + 1;
//         else 
//             ceil = mid;
//             right = mid - 1;
//     }

//     return ceil;
// }




int ceilIndex(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;
    int ceil = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else 
            ceil = mid;
            right = mid - 1;
    }

    return ceil;
}