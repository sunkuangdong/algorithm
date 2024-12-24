#include <iostream> 
#include <string>
#include <algorithm>

#include "SortTestHelper.h"
#include "SelectionSort/selectionSort.h"
#include "InsertionSort/insertionSort.h"
#include "InsertionSort/improveInsertionSort.h"
#include "BubbleSort/bubbleSort.h"
#include "MergeSort/mergeSort.h"
#include "MergeSort/mergeSortBottomToTop.h"
#include "QuickSort/quickSort.h"
#include "QuickSort/quickSortOptimize.h"


using namespace std;

int main()
{
    int n = 1000000;
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

    // mergeSortBottomToTop(arr, n);
    // SortTestHelper::printArray(arr, n);
    // SortTestHelper::testSort("Merge Sort Bottom To Top", mergeSortBottomToTop, arr, n);

    // quickSort(arr, n);
    // SortTestHelper::printArray(arr, n);
    // SortTestHelper::testSort("Quick Sort", quickSort, arr, n);

    delete[] arr;
    return 0;
}