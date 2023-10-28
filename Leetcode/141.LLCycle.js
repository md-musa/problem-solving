// * status = success
// * time complexity = O(n)
var hasCycle = function (head) {
  if (head == null) return false;

  let next = head;
  let index = 0;

  while (next) {
    if (next.index && next.index < index) return true;
    next["index"] = index++;
    next = next.next;
  }
  return false;
};

const input = [1, 2, 3, 4];
import SinglyLinkedList from "./utils/sll.js";
const sll = new SinglyLinkedList();
input.forEach(el => sll.addLast(el));
const result = hasCycle(sll.head);
// sll.__print(result);
console.log(result);
