#include <iostream>
using namespace std;
int binarySearch(int arr[], int L, int R, int element) {
      while (L <= R) {
        int m = (R + L) / 2;
        if (arr[m] == element)
            return m;

        if (arr[m] < element)
           L = m + 1;
        else
           R = m - 1;     
      }
    return -1;
}
int binarySearchRec(int arr[], int L, int R, int element) {
  
    if (L<=R) {
        int m = (R + L) / 2;
        if (arr[m] == element)
            return m;

        if (arr[m] < element)
           return binarySearchRec(arr, m + 1, R, element);
        else
           return binarySearchRec(arr, L,m-1, element);
    }
    return -1;
}
int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8,9 },
        n = sizeof(arr) / sizeof(arr[0]),
        num, result;
    cout << "Enter the num : ";
    cin >> num;
  //  result = binarySearchRec(arr, 0, n - 1, num);
    result = binarySearch(arr, 0, n - 1, num);
    
     if (result == -1)
        cout << "not found ";
     else
        cout << "the element was found at index " << result;

    return 0;
}
