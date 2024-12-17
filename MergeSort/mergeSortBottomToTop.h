#include <iostream> 
#include <string>
#include <algorithm>
using namespace std;

template<typename T>
void mergeSortBottomToTop(T arr[], int n)
{
    for(int sz = 1; sz < n; sz += sz)
    {
        for(int i = 0; i + sz < n; i += sz + sz)
        {
            // Merge the two parts of the array with the size of sz
            // arr[i...i+sz-1] and arr[i+sz...i+2*sz-1]
            __merge(arr, i, i + sz - 1, min(i + sz + sz - 1, n - 1));
        }
    }
}