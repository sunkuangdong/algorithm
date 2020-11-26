// 请写一个 min 函数，要求 min(numbers) 能返回数组 numbers 中的最小数字。
// 递归方式
/* 
    例如: 
    let numbers = [1,2,3,4,5,6]
    min(numbers) // 1
*/

let min = (numbers) => {
    if (numbers.length > 2) {
        return min([numbers[0], min(numbers.slice(1))])
    } else if (numbers.length === 2) {
        return numbers[0] > numbers[1] ? numbers[1] : numbers[0]
    }
}
let a = min([2, 3, 4, 5, 6, 1, 10]);
console.log(a);