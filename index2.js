/*
    请写出一个 sort 函数
    要求 sort(numbers) 能返回一个把 numbers 从小到大排列的数组
    （你可以添加多余的帮助函数）
    递归实现
*/

/*
    let numbers = [2, 3, 7, 1, 4, 5, 6]
    sort(numbers) // [1, 2, 3, 4, 5, 6, 7]
*/

let sort = (numbers) => {
    if (numbers.length > 2) {
        let index = numbers.indexOf(Math.min(...numbers))
        let numMin = numbers[index]
        numbers.splice(index, 1)
        return [numMin].concat(sort(numbers))
    } else if (numbers.length === 2) {
        return numbers[0] > numbers[1] ? numbers.reverse() : numbers
    }
}
let a = sort([2, 3, 7, 1, 4, 5, 6])
console.log(a)