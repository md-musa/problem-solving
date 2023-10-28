class Node {
  constructor(value) {
    this.value = value;
    this.next = null;
  }
}
class SinglyLinkedList {
  constructor() {
    this.head = null;
    this.length = 0;
  }
  addLast(item) {
    const node = new Node(item);

    if (this.isEmpty()) this.head = node;
    else {
      let last = this.head;
      while (last.next) {
        last = last.next;
      }
      last.next = node;
    }

    this.length++;
    return this;
  }

  addFirst(item) {
    const node = new Node(item);
    if (this.isEmpty()) this.head = node;
    else {
      const oldHead = this.head;
      this.head = node;
      this.head.next = oldHead;
    }
    this.length++;
    return this;
  }

  deleteFirst() {
    const head = this.head;
    if (this.isEmpty()) throw new Error("List is empty");
    if (this.length === 1) {
      this.head = null;
      this.length--;
      return head.value;
    }

    const newHead = this.head.next;
    this.head = newHead;
    this.length--;
    return;
  }

  deleteLast() {
    let current = this.head;
    if (this.isEmpty()) throw new Error("List is empty");
    if (this.length === 1) {
      this.head = null;
      this.length--;
      return current.value;
    }

    while (current.next.next) {
      current = current.next;
    }
    current.next = null;
    this.length--;
  }
  remove(item) {
    let currentHead = this.head;
    if (currentHead.value === item) {
      // just shift the head over. Head is now this new value
      this.head = currentHead.next;
      this.length--;
    } else {
      let prev = currentHead;
      while (currentHead.next) {
        if (currentHead.value === item) {
          // remove by skipping
          prev.next = currentHead.next;
          prev = currentHead;
          currentHead = currentHead.next;
          break; // break out of the loop
        }
        prev = currentHead;
        currentHead = currentHead.next;
      }
      if (currentHead.value == item) {
        prev.next = null;
      }
      this.length--;
    }
  }

  find(node) {
    let currentNode = this.head;
    while (currentNode.next) {
      if (currentNode.value === node) {
        return true;
      }
      currentNode = currentNode.next;
    }
    return false;
  }

  isEmpty() {
    return this.length === 0;
  }

  print() {
    const list = [];
    let current = this.head;
    for (let i = 0; i < this.length; i++) {
      list.push(current.value);
      current = current.next;
    }
    console.log(list);
  }

  reverse() {
    let previous = this.head;
    let current = this.head.next;
    let next;

    while (current !== null) {
      next = current.next;
      current.next = previous;
      previous = current;
      current = next;
    }

    this.head = this.tail;
    this.head = previous;
  }
}
// 1 --> 2 --> 3 --> 4
const sll = new SinglyLinkedList();

sll.addLast("A");
sll.addLast("B");
sll.addLast("C");
sll.addLast("D");
sll.addLast("E");

sll.reverse();

// sll.deleteLast();
// sll.deleteLast();
// sll.deleteLast();

// console.log(sll.deleteFirst());

sll.print();
console.log(sll);
