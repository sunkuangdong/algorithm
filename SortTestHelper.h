#ifndef SELECTIONSORT_SORTTESTHELPER_H
#define SELECTIONSORT_SORTTESTHELPER_H

#include <iostream>
#include <cassert>
#include <ctime>

using namespace std;
namespace SortTestHelper {
    int* generateRandomArray(int n, int rangeL, int rangeR)
    {
        assert(rangeL <= rangeR);
        int* arr = new int[n];
        srand(time(NULL));
        for (int i = 0; i < n; i++)
        {
            arr[i] = rand() % (rangeR - rangeL + 1) + rangeL;
        }
        return arr;
    }

    template <typename T>
    void printArray(T arr[], int n)
    {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    template <typename T>
    bool isSorted(T arr[], int n)
    {
        for (int i = 0; i < n-1; i++)
        {
            if(arr[i] > arr[i+1])
                return false;
        }
        return true;
    }

    template <typename T>
    void testSort(string sortName, void(*sort)(T[], int), T arr[], int n)
    {
        clock_t startTime = clock();
        sort(arr, n);
        clock_t endTime = clock();

        assert(isSorted(arr, n));
        cout << sortName << " : " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
        return;
    }
}

#endif // SELECTIONSORT_SORTTESTHELPER_H
