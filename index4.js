// 快速排序
/*
    特点: 
        找到一个基准值, 与这个值比较
        小的放左边, 大的放右边
        时间复杂度 n * log2 ^ n
*/
/*

*/
let sort = (numbers) => {
    let left = []
    let right = []
    if (numbers.length < 2) {return numbers;}
    let index = Math.floor(numbers.length / 2)
    let poved = numbers.splice(index, 1)[0]
    for (let i = 0; i < numbers.length; i++) {
        if (numbers[i] < poved) {
            left.push(numbers[i])
        } else {
            right.push(numbers[i])
        }
    }
    return sort(left).concat([poved], sort(right))
}
let a = sort([7, 6, 5, 4, 3, 2, 1])
console.log(a)