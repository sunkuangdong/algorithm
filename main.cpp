#include "SortTestHelper.h"
#include "SelectionSort/selectionSort.h"

#include <iostream> 
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n = 10000;
    int * arr = SortTestHelper::generateRandomArray(n, 0, n);
    // selection sort
    selectionSort(arr, n);

    SortTestHelper::printArray(arr, n);
    
    delete[] arr;
    return 0;
}