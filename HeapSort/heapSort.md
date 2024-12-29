## Max Heap
## What is a max heap? 

A max heap is a complate binary tree where the value of each node is greater than or equal to the values of its children nodes.

## How to build a max heap?

We use an array to represent a max heap. The root node is at index 1, so the children of the node at index i are at index 2i and 2i+1.

```C++
template <typename Item>
class MaxHeap {
    private:
        Item* data;
        int count;
    public:
        MaxHeap(int capacity)
        {
            data = new Item[capacity + 1];
            count = 0;
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
};
```

## How to add an element to a max heap?

#### First, add the element to the heap

If the heap is not full, add the element to the last position of the heap. 
```C++
template <typename Item>
class MaxHeap {
        ...
        public:
        ...
        void insert(Item item)
        {
            data[count + 1] = item;
            count++;
            shiftUp();
        }
};
```

#### Second, shift up the element

If the element is greater than its parents, swap the element with its parent.

```C++
void shiftUp(int k)
{
    if (data[k] > data[k/2])
    {
        swap(data[k], data[k/2]);
    }
}
```

#### Finally

we need to repeat the process until the element is in the correct position.

```C++
void shiftUp(int k)
{
    while (k > 1 && data[k] > data[k/2])
    {
        swap(data[k], data[k/2]);
        k /= 2;
    }
}
```

`notice: If you want to see complete code, please click the link below.`

[heapSort.h](../HeapSort/heapSort.h)