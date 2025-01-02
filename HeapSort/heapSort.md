## Max Heap
[heapSort.h](../HeapSort/heapSort.h)
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

## shift Down

We just shift down the first element of an array to make it a max heap.

#### First, shift down the element

We remove the first element of the heap and put the last element of the heap to the first position.

```C++
Item extractMax()
{
    assert(count > 1);
    Item ret = data[1];
    swap(data[1], data[count]);
    count --;
    shiftDown(1);
    return ret;
}
```

#### Second, shift down the element

If the right element is less than the left element, swap the element with the left element.

If the right element is greater than the left element, swap the element with the right element.

Repeat the process until the element is in the correct position.

```C++
void shiftDown(int k)
{
    while (2*k <= count)
    {
        int j = 2 * k;
        if(j+1 <= count && data[j] < data[j+1]) j+=1;
        if(data[k] >= data[j]) break;
        swap(data[k], data[j]);
        k = j;
    }
}
```

## Heap Sort

We use the max heap to sort the array.

```C++
void heapSort(Item arr[], int n)
{
    MaxHeap<Item> maxheap = MaxHeap<Item>(n);
    for (int i = 0; i < n; i++)
    {
        maxheap.insert(arr[i]);
    }
    for (int i = n-1; i >= 0; i--)
    {
        arr[i] = maxheap.extractMax();
    }
}
```