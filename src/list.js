const createList = (value) => {
    return createNode(value)
}
const appendNode = (list, value) => {
    const node = createNode(value)
    let x = list;
    while (x.next) {
        x = x.next;
    }
    x.next = node;
    return node
}
const createNode = (value) => {
    return {
        data: value,
        next: null
    }
}
const removeFromList = (list, node) => {
    let x = list
    let p = node
    while (x !== node && x !== null) { // node节点不在list中, x 就可能为 null
        p = x
        x = x.next
    }
    
    if (x === null) { // 若 x 为 null，则不需要删除，直接 return， false 表示无法删除不在list里的节点
        return false;
    }
    if (x === p) { // 这说明要删除的节点是第一个节点
        p = x.next
        return p; // 如果删除的是第一个节点，那么就要把新 list 的头节点 p 返回给外面，即 newList = removeFromList(list, list)
    } else {
        p.next = x.next;
        return list; // 如果删除的不是第一个节点，返回原来的 list 即可
    }
    // // 如果删除的是第1个节点
    // if (list === node) {
    //     // list指向第2个节点
    //     list = node.next;
    // } else {
    //     // 如果删除的是第二个节点
    //     // list.next = 第2个节点.next
    //     if (list.next === node) {
    //         list.next = node.next;
    //     } else {
    //         // 如果删除的是第三个节点
    //         // 第2个节点.next = 第3个节点.next
    //         if (list.next.next === node) {
    //             list.next.next = node.next;
    //         }
    //     }
    // }
}
const travelList = (list, fn) => {
    let x = list
    while (x !== null) {
        fn(x)
        x = x.next
    }
}
const list = createList(10)
const node1 = appendNode(list, 20)
const node2 = appendNode(list, 30)
const node3 = appendNode(list, 40)
const node4 = removeFromList(list, list)
console.log(node4)
travelList(list, (x) => {
    console.log(x.data)
})