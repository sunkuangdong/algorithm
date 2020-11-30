// 选择排序
/*
    特点: 
        选择一个值, 跟所有的都比一遍
        时间复杂度 n 的平方
*/
/*
    坑:
        每次在获取最小索引值的时候, 不能算上之前的最小数
        截取之后, 获取到的最小数索引值, 在换位置用的时候应该加上循环的次数
        循环的次数就是之前排好序的那些项
*/

let minIndex = (numbers) => {
    let index = 0;
    for (let i = 0; i < numbers.length; i++) {
        if (numbers[i] < numbers[index]) {
            index = i
        }
    }
    return index;
}
let swap = (numbers, index, i) => {
    let temp = numbers[index]
    numbers[index] = numbers[i]
    numbers[i] = temp
}
let sort = (numbers) => {
    for (let i = 0; i < numbers.length; i++) {
        let index = minIndex(numbers.slice(i)) + i
        swap(numbers, index, i)
    }
    return numbers;
}
let a = sort([7, 6, 5, 4, 3, 2, 1])
console.log(a)