//* status = SUCCESS

var removeElements = function (head, val) {
  if (!head) return head;
  while (head && head.val === val) {
    head = head.next;
  }

  if (head) {
    let previous = head;
    let current = head.next;

    while (current) {
      if (current.val === val) {
        previous.next = current.next;
        current = current.next;
      } else {
        previous = current;
        current = current.next;
      }
    }
  }
  return head;
};

import SinglyLinkedList from "./utils/sll.js";
const sll = new SinglyLinkedList();

const input = [];
input.forEach(el => sll.addLast(el));

removeElements(sll.head, 1);

// Test case
// in: [], 1              out: []
// in: [1, 1, 1], 1       out: []
// in: [1, 2, 2, 1], 2    out: [1, 1]
// in: [1, 2, 3, 4, 5], 4 out: [1, 2, 3, 5]
