class _Array {
  constructor() {
    this.elements = [];
    this.length = 0;
  }

  push(item) {
    this.elements[this.length] = item;
    this.length++;
    return item;
  }
  pop() {
    console.log(this.length);
    if (this.length === 0) throw new Error("Array is empty");
    delete this.elements[this.length - 1];
    this.length--;
  }
  shift() {
    const firstItem = this.elements[0];
    const newArr = [];
    for (let i = 1; i < this.length; i++) {
      newArr.push(this.elements[i]);
    }
    this.elements = newArr;
    this.length--;

    return firstItem;
  }
  unshift(item) {
    const newArr = [];
    newArr.push(item);
    for (let i = 0; i < this.length; i++) {
      newArr.push(this.elements[i]);
    }
    this.elements = newArr;
    this.length++;
  }
  remove(index) {
    for (let i = index; i < this.length; i++) {
      this.elements[i] = this.elements[i + 1];
    }
    this.length--;
  }
}
// 1 2 3 4
const arr = new _Array();
arr.push(1);
arr.push(2);
arr.push(3);

arr.remove(2);
arr.push(3);

console.log(arr);
console.log("-->", arr.elements);

const a = [];
