# What is the quick sort algorithm?

We choose a value in an array as pivot and loop through the array. If a number is larger than the value, the number moves to the right. If a number is smaller than the value, the number moves to the left.

![alt text](Quick_Sort.gif)

## Logic

We choose the first element as pivot and loop throuht the array to set up the pivot index.

Why we set up the pivot index?

Because we need to compare the first element with each element in the array. Once we find an element smaller than the first element, it swaps positions with the element at the pivot index, and then the pivot index is incremented by one.

Finally, the first element is swapped with the element at the pivot index.

