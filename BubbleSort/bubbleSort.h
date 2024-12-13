#include <iostream> 
#include <string>
#include <algorithm>
using namespace std;

template <typename T>
void bubbleSort(T arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
       for(int j = 0; j < n; j++)
       {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
       }
    }
}