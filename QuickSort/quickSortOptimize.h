#include <iostream>
#include <algorithm>

using namespace std;

// arr[l...r]
// return p, arr[l...p-1] < arr[p] && arr[p+1...r] > arr[p]
template <typename T>
int __partition1(T arr[], int l, int r) {
    swap(arr[l], arr[rand()%(r-l+1) + l]);
    T v = arr[l];
    
    // arr[l+1, j] < v && arr[j+1, i) > v
    int j = l;
    for (int i = l + 1; i <= r; i++)
    {
        if(arr[i] < v)
        {
            swap(arr[j + 1], arr[i]);
            j++;
        }
    }
    swap(arr[l], arr[j]); // j is the pivot index, so swap the pivot to the correct position
    return j;
}

// arr[l...r]
template <typename T>
void __quickSort1(T arr[], int l, int r) {
    if(r - l <= 15)
    {
        insertionSort(arr, l, r);
        return;
    }

    int p = __partition1(arr, l, r); // p is the pivot index
    __quickSort1(arr, l, p - 1);
    __quickSort1(arr, p + 1, r);
}

template <typename T>
void quickSortOptimize(T arr[], int n) {
    srand(time(NULL));
    __quickSort1(arr, 0, n - 1);
}