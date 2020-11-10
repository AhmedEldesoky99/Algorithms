#include <iostream>
using namespace std;
void swap(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}
int partition(int arr[], int L, int R) {
	int pivot = arr[L], i = L, j = R;
	while (i < j) {
		do {
			i++;
		} while (arr[i] <= pivot); 
		do {
			j--;
		} while (arr[j] > pivot); 
		if (i < j)
			swap(arr[i], arr[j]);
	}
	swap(arr[L], arr[j]);

	return j;
}
void QuickSort(int arr[], int L, int R) {
	if (L < R) {
		int piv = partition(arr, L, R);
		QuickSort(arr, L, piv - 1);
		QuickSort(arr, piv + 1, R);
	}
}
void print(int arr[], int n) {
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

int main()
{
	int arr[] = { 1,-1,2,-2,3,-3};
	int n = sizeof(arr) / sizeof(arr[0]);
	QuickSort(arr, 0, n);
	print(arr, n);

	return 0;
}

