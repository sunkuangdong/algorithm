#include <iostream> 
#include <string>
#include <algorithm>
using namespace std;

template <typename T>
void improveInsertionSort(T arr[], int n)
{
    for(int i = 1; i < n; i++)
    {
        T number = arr[i];
        int j;
        for(j = i; j > 0; j--)
        {
            if(arr[j - 1] > number)
            {
                arr[j] = arr[j-1];
            }else{
                break;
            }
        }
        arr[j] = number;
    }
}