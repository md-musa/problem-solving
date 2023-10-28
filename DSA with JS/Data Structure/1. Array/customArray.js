class _Array {
  constructor() {
    this.elements = {};
    this.length = 0;
  }

  push(item) {
    this.elements[this.length++] = item;
    return item;
  }

  pop() {
    if (this.length === 0) throw new RangeError("Array is empty");
    const keep = this.elements[this.length - 1];
    delete this.elements[--this.length];
    return keep;
  }

  unshift() {
    if (this.length === 0) throw new RangeError("Array is empty");

    const keep = this.elements[--this.length];
    const newKey = {};

    for (let i = 1; i < this.length; i++) {
      newKey[i - 1] = this.elements[i];
    }

    this.elements = newKey;
    return keep;
  }

  indexOf(value) {
    for (let i = 0; i < this.length; i++) {
      if (this.elements[i] == value) return i;
    }
  }

  static isEmpty() {
    return this.length === 0;
  }
}
const arr = new _Array();
arr.push(10);
arr.push(20);
arr.push(30);
arr.push(40);
