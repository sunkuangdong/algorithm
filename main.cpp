#include "SortTestHelper.h"
#include "SelectionSort/selectionSort.h"
#include "InsertionSort/insertionSort.h"

#include <iostream> 
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n = 100000;
    int * arr = SortTestHelper::generateRandomArray(n, 0, n);
    // selection sort
    // selectionSort(arr, n);
    // SortTestHelper::printArray(arr, n);
    // SortTestHelper::testSort("Selection Sort", selectionSort, arr, n);


    // insertionSort(arr, n);
    // SortTestHelper::printArray(arr, n);
    // SortTestHelper::testSort("Selection Sort", insertionSort, arr, n);
    delete[] arr;
    return 0;
}