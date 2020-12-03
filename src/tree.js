// 创建一个树节点
const createTree = (value) => {
    return {
        data: value,
        children: null,
        parent: null
    }
}
// 添加子节点
const addChild = (node, value) => {
    const newNode = {
        data: value,
        children: null,
        parent: node
    }
    node.children = node.children || []
    node.children.push(newNode)
    return newNode;
}
// 遍历打印
const travel = (tree, fn) => {
    fn(tree)
    if (!tree.children) {
        return
    }
    for (let i = 0; i < tree.children.length; i++) {
        travel(tree.children[i], fn)
    }
}
// 删除节点
const removeNode = (tree, node) => {
    const siblings = node.parent.children
    let idnex = 0
    for (let i = 0; i < siblings.length; i++) {
        if (siblings[i] === node) {
            index = i
        }
    }
    siblings.splice(index, 1)
}
const tree = createTree(10)
const node2 = addChild(tree, 20)
addChild(tree, 30)
addChild(tree, 40)
const node3 = addChild(node2, 201)
addChild(node2, 202)
addChild(node2, 203)

travel(tree, (node) => {
    console.log(node.data)
})

removeNode(tree, node3)
console.log(tree)