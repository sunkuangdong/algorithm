#include <iostream>
#include <algorithm>

using namespace std;


template <typename T>
void __quickSortOptimize3(T arr[], int l, int r)
{
    if(r-l<=15)
    {
        insertionSort(arr, l, r);
        return;
    }

    swap(arr[l], arr[rand()%(r-l+1)+l]);
    T v = arr[l];

    int lt = l; // arr[l+1, lt] < v
    int gt = r + 1; // arr[gt, r] > v
    int i = l + 1; // arr[lt, i) == v
    while (i < gt)
    {
        if(arr[i] < v)
        {
            swap(arr[i], arr[lt+1]);
            lt++;
            i++;
        }
        else if(arr[i] > v)
        {
            swap(arr[i], arr[gt - 1]);
            gt--;
        }
        else
        {
            i++;
        }
    }
    swap(arr[l], arr[lt]);
    __quickSortOptimize3(arr, l, lt-1);
    __quickSortOptimize3(arr, gt, r);
}

// 3-way quick sort
template <typename T>
void quickSortOptimize3(T arr[], int n) 
{
    srand(time(NULL));
    __quickSortOptimize3(arr, 0, n-1);
}

