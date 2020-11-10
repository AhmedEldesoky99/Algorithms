#include <iostream>
using namespace std;
void print(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << "  ";
}
void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}
void heapify(int arr[], int s, int i) {
    int L = 2 * i + 1, R = 2 * i + 2, max = i;
    if (L<s && arr[L]>arr[max])
        max = L;
    if (R<s && arr[R]>arr[max])
        max = R;
    if (max != i) {
        swap(arr[i], arr[max]);
        heapify(arr, s, max);
    }
}
void buildHeap(int arr[], int s) {
    for (int i = s / 2 - 1; i >= 0; i--)
        heapify(arr, s, i);
}
void HeapSort(int arr[], int s) {
    buildHeap(arr, s);
    for(int i = s -1 ; i>=0;i--){
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main()
{
    int arr[] = { 1,8,9,5,6,7 };
    int n = sizeof(arr) / sizeof(arr[0]);
    HeapSort(arr, n);
    print(arr, n);
    return 0;
}

