#include <iostream> 
#include <string>
#include <algorithm>
using namespace std;

template <typename T>
void insertionSort(T arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if(arr[j] < arr[j-1])
            {
                swap(arr[j], arr[j-1]);
            }
        }
    }
}