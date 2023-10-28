class Node {
  constructor(val) {
    this.val = val;
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
      return head.val;
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
      return current.val;
    }

    while (current.next.next) {
      current = current.next;
    }
    current.next = null;
    this.length--;
  }

  deleteByValue(item) {
    if (!this.head) throw new Error("list is empty");

    if (this.head.val === item) {
      this.head = this.head.next;
      return;
    }

    let next = this.head;
    while (next) {
      if (next.next.val === item) {
        next.next = next.next.next;
        return;
      }
      next = next.next;
    }
  }

  deleteAllByValue(val) {
    while (this.head.val === val) {
      this.head = this.head.next;
    }

    let previous = this.head;
    let current = this.head.next;

    while (current) {
      if (current.val === val) {
        previous.next = current.next;
      }
      previous = current;
      current = current.next;
    }
  }
  //* 1 ->  2 -> 3 -> 4 -> 5
  find(node) {
    let currentNode = this.head;
    while (currentNode.next) {
      if (currentNode.val === node) {
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
    while (current) {
      list.push(current.val);
      current = current.next;
    }
    console.log(list);
  }
  __print(head) {
    const list = [];
    let current = head;
    while (current) {
      list.push(current.val);
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
// const sll = new SinglyLinkedList();
// sll.addLast(1);
// sll.addLast(1);
// sll.addLast(1);
// sll.addLast(4);
// sll.addLast(4);
// sll.addLast(1);
// sll.addLast(5);
// sll.addLast(1);
// sll.deleteAllByValue(1);

// sll.print();
// console.log(sll.head);
export default SinglyLinkedList;
