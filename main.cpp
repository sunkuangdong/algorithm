#include "SortTestHelper.h"
#include "SelectionSort/selectionSort.h"
#include "InsertionSort/insertionSort.h"
#include "InsertionSort/improveInsertionSort.h"
#include "BubbleSort/bubbleSort.h"
#include "MergeSort/mergeSort.h"

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
    // SortTestHelper::testSort("insertion Sort", insertionSort, arr, n);

    // improveInsertionSort(arr, n);
    // SortTestHelper::printArray(arr, n);
    // SortTestHelper::testSort("Improve InsertionSort", improveInsertionSort, arr, n);

    // bubbleSort(arr, n);
    // SortTestHelper::printArray(arr, n);
    // SortTestHelper::testSort("Bubble Sort", bubbleSort, arr, n);

    // mergeSort(arr, n);
    // SortTestHelper::printArray(arr, n);
    // SortTestHelper::testSort("Merge Sort", mergeSort, arr, n);

    delete[] arr;
    return 0;
}