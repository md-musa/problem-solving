class Node {
  constructor(item) {
    this.value = item;
    this.left = null;
    this.right = null;
  }
}
class BST {
  constructor() {
    this.root = null;
  }
  insert(newItem) {
    if (this.root === null) {
      this.root = new Node(newItem);
      return this;
    }

    let current = this.root;
    while (true) {
      if (current.value > newItem) {
        if (current.left === null) {
          current.left = new Node(newItem);
          return this;
        }
        current = current.left;
      } else if (current.value < newItem) {
        if (current.right === null) {
          current.right = new Node(newItem);
          return;
        }
        current = current.right;
      }
    }
  }
  
  find(value) {
    if (this.root.value === value) return true;
    let current = this.root;
    while (current) {
      if (current.value > value) current = current.left;
      else if (current.value < value) current = current.right;
      else return true;
    }
    return false;
  }
  BFS() {
    let node = this.root;
    const queue = [node];
    const visitedItems = [];

    while (queue.length) {
      node = queue.shift();
      visitedItems.push(node.value);
      if (node.left) queue.push(node.left);
      if (node.right) queue.push(node.right);
    }
    return visitedItems;
  }
  DFS_PreOrder() {
    const visitedItems = [];
    function traverse(node) {
      visitedItems.push(node.value);
      if (node.left) traverse(node.left);
      if (node.right) traverse(node.right);
    }
    traverse(this.root);
    console.log(visitedItems);
    return visitedItems;
  }
  DFS_PostOrder() {
    const visitedItems = [];
    function traverse(node) {
      if (node.left) traverse(node.left);
      if (node.right) traverse(node.right);
      visitedItems.push(node.value);
    }
    traverse(this.root);
    return visitedItems;
  }
  DFS_InOrder() {
    const visitedItems = [];
    function traverse(node) {
      if (node.left) traverse(node.left);
      visitedItems.push(node.value);
      if (node.right) traverse(node.right);
    }
    traverse(this.root);
    return visitedItems;
  }
}
const bst = new BST();
bst.insert(100);
bst.insert(50);
bst.insert(30);
bst.insert(500);
bst.insert(600);
bst.insert(70);
console.log(bst.root);
