//* status = success
//* timeComplexity = O(n)
//* betterSolution = yes

var deleteDuplicates = function (head) {
  if (!head) return head;

  const hashMap = {};
  hashMap[head.val] = head.val;

  let previous = head;
  let current = head.next;

  while (current) {
    if (hashMap[current.val] === current.val) {
      previous.next = current.next;
      current = current.next;
    } else {
      hashMap[current.val] = current.val;
      previous = current;
      current = current.next;
    }
  }
  return head;
};

const input = [1, 1, 2, 2, 3, 3, 3];

import SinglyLinkedList from "./utils/sll.js";
const sll = new SinglyLinkedList();
input.forEach(el => sll.addLast(el));
sll.__print(deleteDuplicates(sll.head));
