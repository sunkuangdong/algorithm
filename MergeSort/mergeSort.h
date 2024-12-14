#include <iostream> 
#include <string>
#include <algorithm>
using namespace std;

template<typename T>
void __merge(T arr[], int l, int mid, int r)
{
    // Copy the original array to a new array
    T aux[r - l + 1];
    for(int i = l; i <= r; i++)
    {
        aux[i - l] = arr[i];
    }
    
    // Compare the left part with the right part, and create a new array to store the results of comparison
    int i = l; int j = mid + 1;
    for(int k = l; k <= r; k++)
    {
        // If the left part is empty, copy the right part to the original array
        if(i > mid)
        {
            arr[k] = aux[j - l];
            j++;
        }
        // If the right part is empty, copy the left part to the original array
        else if (j > r)
        {
            arr[k] = aux[i-l];
            i++;
        }
        // If the left part is smaller than the right part, copy the left part to the original array
        else if(aux[i - l] < aux[j - l])
        {
            arr[k] = aux[i-l];
            i++;
        }
        // If the right part is smaller than the left part, copy the right part to the original array
        else
        {
            arr[k] = aux[j-l];
            j++;
        }
    }
}

template <typename T>
void __mergeSort(T arr[], int l, int r)
{
    if(l >= r) return;
    int mid = (l + r) / 2;
    __mergeSort(arr, l, mid);
    __mergeSort(arr, mid+1, r);
    __merge(arr, l, mid, r);
}

template <typename T>
void mergeSort(T arr[], int n)
{
    __mergeSort(arr, 0, n - 1);
}