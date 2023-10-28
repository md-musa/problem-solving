class Node {
  constructor(value) {
    this.value = value;
    this.previous = null;
    this.next = null;
  }
}

class DLL {
  constructor() {
    this.head = null;
    this.tail = null;
    this.length = 0;
  }
  addLast(item) {
    const node = new Node(item);

    if (this.isEmpty()) this.head = this.tail = node;
    else {
      node.previous = this.tail;
      this.tail.next = node;
      this.tail = node;
    }
    this.length++;
    return this;
  }
  addFirst(item) {
    const node = new Node(item);

    if (this.isEmpty()) this.head = this.tail = node;
    else {
      const oldHead = this.head;

      node.next = oldHead;
      oldHead.previous = node;
      this.head = node;
    }
    this.length++;
    return this;
  }

  indexOf(item) {
    let index = 0;
    let head = this.head;

    while (head) {
      if (head.value === item) {
        // console.log(`${item} index--> ${index}`);
        return index;
      }
      head = head.next;
      index++;
    }

    return index;
  }

  deleteLast() {
    if (this.isEmpty()) return new Error("List is empty");

    const tail = this.tail;

    if (this.length === 1) this.head = this.tail = null;
    else {
      this.tail = tail.previous;
      this.tail.next = null;
    }
    this.length--;
    return tail.value;
  }
  deleteFirst() {
    if (this.isEmpty()) return new Error("List is empty");

    const head = this.head;

    if (this.length === 1) this.head = this.tail = null;
    else {
      this.head = head.next;
      this.head.previous = null;
    }
    this.length--;
    return head.value;
  }

  isEmpty() {
    return this.length === 0;
  }
  print() {
    const element = [];
    let head = this.head;
    while (head) {
      element.push(head.value);
      head = head.next;
    }
    console.log(element);
  }
  reverse() {
    let previous = this.head;
    let current = this.head.next;
    while (current !== null) {
      const next = current.next;
      current.next = previous;
      previous = current;
      current = next;
    }
  }
}

const dll = new DLL();
dll.addLast(1);
dll.addLast(2);
dll.addLast(3);
dll.addLast(4);
dll.addLast(5);
// dll.reverse();

// dll.addFirst(0);

// dll.indexOf(3);
// dll.indexOf(1);
// dll.indexOf(5);

// dll.deleteLast();
// dll.deleteLast();
// dll.deleteFirst();
// dll.deleteFirst();
// dll.deleteFirst();
dll.print();

// const removed = dll.pop();
// const removed2 = dll.pop();

console.log(dll.head);
