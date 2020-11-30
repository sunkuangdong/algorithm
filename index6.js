// 计数排序
/*
    特点: 
        hash表
        用hash记录出现的次数, hash会根据key自动从小到大排好
        时间复杂度 O(n + max)
*/
let hash = (numbers) => {
    let hashTable = {}
    let result = []
    for (let i = 0; i < numbers.length; i++) {
        if (!(numbers[i] in hashTable)) {
            hashTable[numbers[i]] = 1
        } else {
            hashTable[numbers[i]] += 1
        }
    }
    for (key in hashTable) {
        for (let i = 0; i < hashTable[key]; i++) {
            result.push(Number(key))
        }
    }
    return result;
}
let a = hash([7, 6, 5, 4, 3, 1, 2, 3, 1, 2, 1])
console.log(a)