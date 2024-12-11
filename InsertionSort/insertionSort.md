# What is insertion sort?

In an array, find the correct position (specifically the smallest position) and insert the new element into that position.

## Logic

First, we need to compare each item in the array (after the first one) with the previous item to determine their order.

Next, we need to swap the order of elements in the array. If we are sorting in ascending order and a later element is a smaller than the previous one, we need swap their position.

Therefore, we can see that by repeatedly looping through steps above, we can achieve sorting.

![alt text](insertion_sort.gif)

## How can we abstract the logic to implement this process?

First, we need to loop the array for each item, but we also compare it with the previous item to determine their order.

Therefore, the insertion sort algorithm use a nested loop approch to achieve this. And we need to iterate through the array from back to front.

```

for (int i = 0; i < arrSize; i++)
{
    for (int j = i; j > 0; j--)
    {
        // compare and swap
    }
}

```

Second, we need to compare the item at the back with the each one in front, if the condition is satisfied, we need to swap these two items.

```

for (int i = 0; i < arrSize; i++)
{
    for (int j = i; j > 0; j--)
    {
        if(arr[j] < arr[j-1])
        {
           swap(arr[j], arr[j-1]);
        }
    }
}

```