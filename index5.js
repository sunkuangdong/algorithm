// 快速排序
/*
    特点: 
        没有基准值
        数组分成两半, 左边一半, 右边一半
        左边一半排序, 右边一半排序
        连接一下
        时间复杂度 n * log2 ^ n
*/
let mergeSort = (numbers) => {
    if (numbers.length < 2) {
        return numbers;
    }
    let left = numbers.slice(0, Math.floor(numbers.length / 2))
    let right = numbers.slice(Math.floor(numbers.length / 2))
    return sort(mergeSort(left), mergeSort(right))
}
let sort = (left, right) => {
    if (left.length === 0) {
        return right
    }
    if (right.length === 0) {
        return left
    }
    return left[0] > right[0] ? [right[0]].concat(sort(left, right.slice(1))) : [left[0]].concat(sort(right, left.slice(1)))
}
let a = mergeSort([7, 6, 5, 4, 3, 2, 1])
console.log(a)