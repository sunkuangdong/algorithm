#include <iostream>
#include <algorithm>

using namespace std;

template <typename T>
int __partition2(T arr[], int l, int r)
{
    swap(arr[l], arr[rand()%(r-l+1) + l]);
    T v = arr[l];
    // arr[l+1, i) <= v && arr(j, r] >= v
    int i = l + 1; int j = r;
    while (true)
    {
       while (i <=r && arr[i] < v) i++;
       while (j >= l+1 && arr[j] > v) j--;
       if(i > j) break;
       swap(arr[i], arr[j]);
       i++;
       j--;
    }
    // To use l as the pivot, we need to swap the pivot to the first position of the right part
    // because the right part is greater than the pivot
    swap(arr[l], arr[j]);
    return j;
}

template <typename T>
void __quickSortOptimize2(T arr[], int l, int r) {
    if(r-l<=15)
    {
        insertionSort(arr, l, r);
        return;
    }

    int n = __partition2(arr, l, r);
    __quickSortOptimize2(arr, l, n-1);
    __quickSortOptimize2(arr, n+1, r);
}

// arr[l...r]
template <typename T>
void quickSortOptimize2(T arr[], int n) {
    srand(time(NULL));
    __quickSortOptimize2(arr, 0, n - 1);
}