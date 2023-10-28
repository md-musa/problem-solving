class Stack {
  constructor() {
    this.stack = [];
    this.len = 0;
  }
  put(node) {
    this.stack.push(node);
    this.len++;
  }
  peek() {
    return this.stack[this.stack.length - 1];
  }
  pop() {
    if (!this.stack.length) return "empty";
    this.stack.pop();
    return this.peek();
  }
  length() {
    return this.stack.length;
  }
  isEmpty() {
    return this.stack.length === 0;
  }

  stackAccessNthTopNode(n) {
    const bufferArray = this.getBuffer();
    if (n <= 0) throw new Error("error");

    while (n > 0) {
      bufferArray.pop();
      n--;
    }
    return bufferArray[bufferArray.length - 1];
  }
  find(node) {
    const bufferArray = this.getBuffer();
    for (let i = 0; i < bufferArray.length; ++i) {
      if (bufferArray[i] === node) return true;
    }
    return false;
  }
}

let stack = new Stack();
stack.put(10);
stack.put(20);
stack.put(30);
stack.put(40);
stack.put(50);
stack.put(60);
