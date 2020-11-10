#include <iostream>
using namespace std;
void merge(int arr[], int l, int m , int r) { //0 ,7 =>  l = 0  =>  r = 7 =>  m = l+(r-l)/2 
	int i, j, k;
	int size1 = m - l + 1;
	int size2 = r - m;
	int* left = new int[size1], * right = new int[size2];
	for (int i = 0; i < size1; i++)
		left[i] = arr[l + i];
	for (int j = 0; j < size2; j++)
		right[j] = arr[m + j + 1];
	i = j = 0;
	k = l;
	while (i < size1 && j < size2) {
		if (left[i] <= right[j]) {
			arr[k] = left[i];
			i++;
		}
		else {
			arr[k] = right[j];
			j++;
		}
		k++;
	}
	while (i < size1) {
		arr[k] = left[i];
		i++;
		k++;
	}
	while (j < size2) {
		arr[k] = right[j];
		j++;
		k++;
	}
	
	
}
void mergeSort(int arr[], int l, int r) {
	if (l < r) {
		int m = l + (r - l) /2;
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);
		merge(arr, l, m, r);
	}
	
}
void print(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] <<"  ";
	}
}
int main()
{
	int arr[] = { 7,9,6,4,3,2,0,-1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	mergeSort(arr, 0, n - 1);
	print(arr, n);
	return 0;
}


