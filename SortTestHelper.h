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
}

#endif // SELECTIONSORT_SORTTESTHELPER_H
