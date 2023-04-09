// Debug the code. This is implementation of quick-select algorithm.


// int partition(int arr[], int l, int r) {
// 	int x = arr[r], i = l;
// 	for (int j = l; j <= r - 1; j++) {
// 		if (arr[j] <= x) {
// 			swap(arr[i], arr[j]);
// 			i++;
// 		}
// 	}
// 	swap(arr[i], arr[r]);
// 	return i;
// }

// int kthSmallest(int arr[], int l, int r, int k) {
// 	int index = partition(arr, l, r);
// 	if(index - l == k - 1)
// 		return arr[index];
// 	if(index - l > k - 1)
// 		return kthSmallest(arr, l, index - 1, k);
// 	return kthSmallest(arr, index + 1, r, k - index + l - 1);
// }



int partition(int arr[], int l, int r) {
	int x = arr[r], i = l;
	for (int j = l; j <= r - 1; j++) {
		if (arr[j] <= x) {
			swap(arr[i], arr[j]);
			i++;
		}
	}
	swap(arr[i], arr[r]);
	return i;
}

int kthSmallest(int arr[], int l, int r, int k) {
	int index = partition(arr, l, r);
	if(index - l == k - 1)
		return arr[index];
	if(index - l > k - 1)
		return kthSmallest(arr, l, index - 1, k);
	return kthSmallest(arr, index + 1, r, k - index + l - 1);
}