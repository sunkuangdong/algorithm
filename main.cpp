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
#include "QuickSort/quickSortOptimize2.h"
#include "QuickSort/quickSortOptimize3.h"
#include "HeapSort/heapSort.h"


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

    // quickSortOptimize(arr, n);
    // SortTestHelper::printArray(arr, n);
    // SortTestHelper::testSort("Quick Sort Optimize", quickSortOptimize, arr, n);

    // quickSortOptimize2(arr, n);
    // SortTestHelper::printArray(arr, n);
    // SortTestHelper::testSort("Quick Sort Optimize 2", quickSortOptimize2, arr, n);

    // quickSortOptimize3(arr, n);
    // SortTestHelper::printArray(arr, n);
    // SortTestHelper::testSort("Quick Sort Optimize 3", quickSortOptimize3, arr, n);

    // test for insert
    /*
    {
        MaxHeap<int> maxheap = MaxHeap<int>(100);
        cout<<maxheap.size()<<endl;

        srand(time(NULL));
        for (int i = 0; i < 15; i++)
        {
            maxheap.insert(rand()%100);
        }
        delete[] arr;
    }
    */

    // test for shifft down
    /*
    {
        MaxHeap<int> maxheap = MaxHeap<int>(100);
        cout<<maxheap.size()<<endl;

        srand(time(NULL));
        for (int i = 0; i < 15; i++)
        {
            maxheap.insert(rand()%100);
        }
        while (!maxheap.isEmpty())
        {
            printf("%d ", maxheap.extractMax());
        }
        delete[] arr;
    }
    */

    // heapSort1(arr, n);
    // SortTestHelper::printArray(arr, n);
    SortTestHelper::testSort("Heap Sort heapSort1", heapSort1, arr, n);

    // SortTestHelper::testSort("Heap Sort heapSort2", heapSort2, arr, n);
    return 0;
}