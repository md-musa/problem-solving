//* status = success
//* timeComplexity = O(n)
//* betterSolution = not sure

var reverseList = function (head) {
  if (!head) return head;

  let previous = head;
  let current = head.next;

  previous.next = null;
  while (current !== null) {
    const next = current.next;
    current.next = previous;
    previous = current;
    current = next;
  }

  return previous;
};

const input = [1, 2];
import SinglyLinkedList from "./utils/sll.js";
const sll = new SinglyLinkedList();
input.forEach(el => sll.addLast(el));
const result = reverseList(sll.head);
sll.__print(result);
console.log(result);
