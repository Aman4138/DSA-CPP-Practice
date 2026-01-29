#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int key) {
    if(low > high)
        return -1;

    int mid = (low + high) / 2;

    if(arr[mid] == key)
        return mid;
    else if(key < arr[mid])
        return binarySearch(arr, low, mid - 1, key);
    else
        return binarySearch(arr, mid + 1, high, key);
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = 5;
    int key = 8;

    int result = binarySearch(arr, 0, n - 1, key);

    if(result == -1)
        cout << "Element not found";
    else
        cout << "Element found at index " << result;

    return 0;
}
