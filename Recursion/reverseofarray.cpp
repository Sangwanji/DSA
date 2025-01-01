#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int start, int end) {
    if (start >= end) return;
    swap(arr[start], arr[end]);
    reverseArray(arr, start + 1, end - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr, 0, size - 1);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}