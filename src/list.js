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
    let p = null
    while (x !== node) {
        p = x
        x = x.next
    }
    p.next = x.next;
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
travelList(list, (x) => {
    console.log(x.data)
})