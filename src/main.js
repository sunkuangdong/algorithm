const divScreen = document.querySelector('#screen')
const btnCreateNumber = document.querySelector('#createNumber')
const btnCallNumber = document.querySelector('#callNumber')
const spanNewNumber = document.querySelector('#newNumber')
const spanQueue = document.querySelector('#queue')

// 队列 queue
let n = 0;
let queue = []

btnCreateNumber.onclick = () => {
    n += 1
    queue.push.call(queue, n)
    spanNewNumber.innerText = n
    spanQueue.innerText = JSON.stringify(queue)
};

btnCallNumber.onclick = () => {
    const m = queue.shift.call(queue)
    divScreen.innerText = `请${m}号就餐`
    spanQueue.innerText = JSON.stringify(queue)
}