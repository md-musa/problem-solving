/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */

/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */

const SinglyLinkedList = require("./utils/sll");

var mergeTwoLists = function (l1, l2) {
  let p = l1.head;
  let q = l2.head;
  let sorting = null;

  if (p.value < q.value) {
    sorting = p;
    p = sorting.next;
  } else {
    sorting = q;
    q = sorting.next;
  }

  while (p && q) {
    if (s.value < track.value) {
      st.next = track;
      track = st;
    }
    if (st.next.value < sl2.value) {
      sl2 = st.next;
      st.next = sl1;
    }
  }
};
sl1;
//* s1 = 3 -> 7 -> 9 -> 11
st;
//* s2 = 2 -> 4 -> 5 -> 10
sl2;

const sll1 = new SinglyLinkedList();
sll1.addLast(1);
sll1.addLast(3);
sll1.addLast(7);
sll1.addLast(9);

const sll2 = new SinglyLinkedList();
sll2.addLast(2);
sll2.addLast(4);
sll2.addLast(5);
sll2.addLast(10);

mergeTwoLists(sll1, sll2);
