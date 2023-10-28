class Graph {
  constructor() {
    this.adjacencyList = {};
  }

  addVertex(vertex) {
    this.adjacencyList[vertex] = [];
  }

  addEdge(vertex1, vertex2) {
    this.adjacencyList[vertex1].push(vertex2);
    this.adjacencyList[vertex2].push(vertex1);
  }

  removeEdge(v1, v2) {
    this.adjacencyList[v1] = this.adjacencyList[v1].filter(v => v2 !== v);
    this.adjacencyList[v2] = this.adjacencyList[v2].filter(v => v1 !== v);
  }

  removeVertex(vertex) {
    const list = this.adjacencyList;
    list[vertex].forEach(ed => removeEdges(ed));
    delete list[vertex];

    function removeEdges(ed) {
      list[ed] = list[ed].filter(ed => vertex !== ed);
    }
  }

  DFS(start) {
    const stack = [start];
    const result = [];
    const visited = {};
    visited[start] = true;

    while (stack.length) {
      let currentVertex = stack.pop();
      result.push(currentVertex);

      this.adjacencyList[currentVertex].forEach(n => {
        if (!visited[n]) {
          visited[n] = true;
          stack.push(n);
        }
      });
    }
    return result;
  }
}

const g = new Graph();
g.addVertex("A");
g.addVertex("B");
g.addVertex("C");
g.addVertex("D");
g.addVertex("E");
g.addVertex("F");

g.addEdge("A", "B");
g.addEdge("A", "C");
g.addEdge("B", "D");
g.addEdge("C", "E");
g.addEdge("D", "E");
g.addEdge("D", "F");
g.addEdge("E", "F");

const dfs = g.DFS("A");
console.log(dfs);
console.log(g.adjacencyList);
