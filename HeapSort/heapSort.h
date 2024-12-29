#include <iostream>
#include <algorithm>
#include <string>
#include <ctime>
#include <cmath>
#include <cassert>

using namespace std;

template <typename Item>
class MaxHeap {
    private:
        Item* data;
        int count;
        int capacity;

        void shiftUp(int k)
        {
            while (k > 1 && data[k] > data[k/2])
            {
                swap(data[k], data[k/2]);
                k /= 2;
            }
            
        }
    public:
        MaxHeap(int capacity)
        {
            data = new Item[capacity + 1];
            count = 0;
            this->capacity = capacity;
        }

        ~MaxHeap()
        {
            delete [] data;
        }

        int size()
        {
            return count;
        }

        bool isEmpty()
        {
            return count == 0;
        }

        void insert(Item item)
        {
            assert((count + 1)<capacity);
            data[count + 1] = item;
            count++;
            shiftUp(count);
        }

};

