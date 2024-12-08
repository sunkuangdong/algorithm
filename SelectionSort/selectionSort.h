#include <iostream> 
#include <string>
#include <algorithm>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        // initialize minIndex and find the min number position.
        int minIndex = i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        // swap the min number with the current swap position.
        swap(arr[i], arr[minIndex]);
    }
}