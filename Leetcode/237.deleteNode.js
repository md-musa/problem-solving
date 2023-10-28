//* status = success

var deleteNode = function (node) {
  if (!this.head) return;
  while (this.head.value == value) {
    this.head = this.head.next;
  }

  let previous = this.head;
  let current = this.head.next;

  while (current) {
    if (current.value == value) {
      previous.next = current.next;
    }
    previous = current;
    current = current.next;
  }
};
