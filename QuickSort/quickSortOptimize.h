#include <iostream>
#include <algorithm>

#include "../InsertionSort/insertionSort.h"

using namespace std;

// arr[l...r]
// return p, arr[l...p-1] < arr[p] && arr[p+1...r] > arr[p]
template <typename T>
int __partition(T arr[], int l, int r) {
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
void __quickSort(T arr[], int l, int r) {
    if(r - l <= 15) 
    {
        insertionSort(arr, l, r);
        return;
    };

    int p = __partition(arr, l, r); // p is the pivot index
    __quickSort(arr, l, p - 1);
    __quickSort(arr, p + 1, r);
}

template <typename T>
void quickSort(T arr[], int n) {
    srand(time(NULL));
    __quickSort(arr, 0, n - 1);
}