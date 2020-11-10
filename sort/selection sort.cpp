#include <iostream>
using namespace std;
void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}
void selectionSortDec(int arr[], int n) {
    int minI;
    for (int i = 0; i < n - 1; i++) {
        minI = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[minI] < arr[j])
                minI=j;
            swap(arr[minI], arr[j]);
        }
    }
}
void selectionSortAc(int arr[], int n) {
    int maxI;
    for (int i = 0; i < n - 1; i++) {
        maxI = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[maxI] > arr[j])
                maxI = j;
            swap(arr[maxI], arr[j]);
        }
    }
}
void print_r(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = { 3,1,2 },n;
    n = sizeof(arr) / sizeof(arr[0]);
    selectionSortDec(arr, n);
    print_r(arr, n);
    cout << endl;
    selectionSortAc(arr, n);
    print_r(arr, n);
    
    return 0;
}