class Queue {
  constructor() {
    this.queue = [];
    this.len = 0;
  }
  enqueue(node) {
    this.queue.push(node);
  }
  dequeue() {
    if (!this.queue.length) throw new Error("queue is empty");
    this.queue.shift();
    return this.peek();
  }
  peek() {
    return this.queue[0];
  }
  length() {
    return this.queue.length;
  }
  isEmpty() {
    return this.queue.length === 0;
  }
  getBuffer() {
    return this.queue.slice();
  }
}
const queue = new Queue();
queue.enqueue(10);
queue.enqueue(40);
queue.enqueue(30);
queue.enqueue(20);
queue.enqueue(70);
queue.dequeue(70);
queue.dequeue(70);
console.log(queue.queue);
console.log(queue.length());
console.log(queue.peek());
