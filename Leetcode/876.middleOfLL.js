//* status = success

var middleNode = function (head) {
  if (head.next === null) return head;
  if (head.next.next === null) return head.next;

  let p1 = head;
  let p2 = head;

  while (p2 !== null && p2.next !== null) {
    p2 = p2.next.next;
    p1 = p1.next;
  }
  return p1;
};

import SinglyLinkedList from "./utils/sll.js";
const sll = new SinglyLinkedList();
[1, 2, 3, 4, 5, 6, 7, 8, 9, 0].forEach(el => sll.addLast(el));
console.log(middleNode(sll.head));
