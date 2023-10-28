//* Singly linked list
class Node {
  constructor(value) {
    this.value = value;
    this.next = null;
  }
}

class SinglyLinkedList {
  constructor() {
    this.head = null;
    this.tail = null;
  }
  addLast(item) {
    const node = new Node(item);
    if (this.head === null) {
      this.head = this.tail = node;
    } else {
      this.tail.next = node;
      this.tail = node;
    }
  }
  addFirst(item) {
    const node = new Node(item);

    if (this.head === null) this.head = this.tail = node;
    else {
      const reference = this.head;
      this.head = node;
      this.head.next = reference;
    }
  }
  deleteFirst() {
    this.head = this.head.next;
  }
  deleteLast() {
    let current = this.head;
    while (current !== null) {
      if (current.next.value == this.tail.value) {
        break;
      }
      current = current.next;
    }
    current.next = null;
    this.tail = current;
  }
  indexOf(item) {
    let index = 0;
    let current = this.head;
    while (current != null) {
      if (current.value === item) return index;
      current = current.next;
      index++;
    }
  }
}
const sl = new SinglyLinkedList();
sl.addLast(1);
sl.addLast(2);
sl.addLast(3);
sl.addLast(4);
sl.deleteLast();
console.log(sl);

// class Vechales {
//   constructor() {
//     this.car = class Car {
//       constructor(name, color) {
//         this.name = name;
//         this.color = color;
//       }
//     };
//   }
// }
// const a = new Vechales();

// const result = a("bmmw", "red");
// console.log(result);
