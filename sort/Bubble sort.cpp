#include<iostream>
using namespace std;
void swap(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}
void BubbleSort(int arr[], int n) {
	bool flag = true; int c = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				flag = false;
			}
			c++;
		}
		if (flag == true)
			break;
	}
	cout << "Total round " << c << endl;
}
void printArray(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "  ";
	}
}
int main() {
	int arr[] = { 1,2,3 };
	int n = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, n);
	printArray(arr, n);

	return 0;
}