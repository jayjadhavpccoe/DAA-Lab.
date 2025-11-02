#include <iostream>
using namespace std;

int partition(int arr[], int start, int end) {
    int idx = start - 1;
    int pivot = arr[end];

    for (int i = start; i < end; i++) {
        if (arr[i] < pivot) {
            idx++;
            swap(arr[idx], arr[i]);
        }
    }

    idx++;
    swap(arr[idx], arr[end]);
    return idx;
}

void quickSort(int arr[], int start, int end) {
    if (start < end) {
        int pivot = partition(arr, start, end);
        quickSort(arr, start, pivot - 1);
        quickSort(arr, pivot + 1, end);
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 2, 6, 4, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);
    printArray(arr, n);

    return 0;
}
