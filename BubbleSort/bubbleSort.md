# What is the bubble sort?

Bubble sort is a method for sorting an array. Like boil water, the largest element 'bubble' to the back.

## Logic

We need to compare each element. If an elemet is bigger than the element behind it, we swap these two elements. If an element is smaller than the element behind it, we move to the next pair and compare it with the next element.

## How can we abstract the logic to implement this process?

First, we must compare each element with behind elememt.

```
for (int i = 0; i < n; i++)
{
    for(int j = 0; j < n; j++){}
}
```

Second, if an element is bigger than the element behind it, we need swap these two elements.

```
for (int i = 0; i < n; i++)
{
    for(int j = 0; j < n; j++)
    {
        if(arr[j] > arr[j+1])
        {
            swap(arr[j], arr[j+1]);
        }
    }
}
```