//*  status = not submitted yet
//  timeComplexity = O(n)
//  betterSolution = yes

//*  Algorithm  O(n+n)
//* 1. reverse
//* 2. compare list1 element with list2 element if not match return false
function reverse(head) {
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
}

var isPalindrome = function (head) {
  let p1 = Object.assign({}, head);
  let p2 = reverse(head);
  console.log(p1, p2);
  while (p1 && p2) {
    console.log(p1.val, p2.val);
    p1 = p1.next;
    p2 = p2.next;
  }
};

const input = [1, 2, 3, 4, 5];
import SinglyLinkedList from "./utils/sll.js";
const sll = new SinglyLinkedList();
input.forEach(el => sll.addLast(el));
const result = isPalindrome(sll.head);
