# What is selection sort?

Give an example of arranging things in accending order from smallest to largest.

## Logic

First, we find the smallest value and its index position, then swap the smallest value with the element in the first position of the array.

Next, we find the second smallest value and its index position, then swap the second smallest value with the element in the second position of the array.

Therefore, we can see that by repeatedly looping through steps above, we can achieve sorting.

![alt text](selection_sort.gif)

## How can we abstract the logic to implement this process?

First, we can determine that we need to loop through the array. However, we not only need to find the smallest value but also record the swap position. As the swap position moves one element forward, we need to perform another loop starting from the element after the current swap position.

Therefore, the selection sort algorithm use a nested loop approch to achieve this.

```

for (int i = 0; i < arrSize; i++)
{
    // i is swap position.
    for (int j = i+1; j < arrSize; j++)
    {
        // j is min number position.
    }
}

```
