class TreeNode {
  constructor(item) {
    this.node = item;
    this.children = {};
    this.endHere = false;
  }
}

class Trie {
  constructor() {
    this.root = new TreeNode(null);
  }
  insert(word) {
    let parent = this.root;
    for (let i = 0; i < word.length; i++) {
      if (!parent.children[word[i]]) {
        parent.children[word[i]] = new TreeNode(word[i]);
      }
      parent = parent.children[word[i]];
      if (i == word.length - 1) {
        parent.endHere = true;
      }
    }
  }
  contains(word) {
    let current = this.root.children;
    let lastChar;

    for (let i = 0; i < word.length; i++) {
      if (!current[word[i]]) return false;

      if (i === word.length - 1) {
        lastChar = current[word[i]];
      }
      current = current[word[i]].children;
    }

    return lastChar.endHere;
  }
}

const trie = new Trie();
trie.insert("app");
trie.insert("alo");
trie.insert("ball");
trie.insert("bull");
trie.insert("bulk");
console.log(trie.root);
console.log(trie.contains("alo"));
console.log(trie.contains("ball"));
console.log(trie.contains("bulk"));
