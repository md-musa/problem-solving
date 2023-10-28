function reverse(a, start, end) {
  if (start >= end) return a;
  [a[start], a[end]] = [a[end], a[start]];
  return reverse(a, start + 1, end - 1);
}
const a = [1, 2, 3, 4, 5, 7, 8];
console.log(reverse(a, 0, a.length - 1));
