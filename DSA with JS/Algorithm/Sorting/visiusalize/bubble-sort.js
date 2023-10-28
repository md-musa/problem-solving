import { swap, grapMaker } from "./index.js";

let i = 0;
let j = i + 1;
let oneGone = true;
export function bubbleSort(mainEl, graphElements, length, setTime) {
  // if (j > 1) mainEl.children[j - 2].classList.remove("current");
  // mainEl.children[i].classList.add("target");
  // mainEl.children[j].classList.add("current");
  if (i === graphElements.length) {
    console.log("spoted");
    return;
  }
  if (j == graphElements.length - i) {
    oneGone = false;
  }
  if (graphElements[j] > graphElements[j + 1]) {
    swap(j, j + 1, graphElements);
    grapMaker(mainEl, graphElements);
  }
  j++;
  if (oneGone) setTimeout(() => bubbleSort(mainEl, graphElements, length), 10);
  else {
    oneGone = true;
    i++;
    j = 0;
    bubbleSort(mainEl, graphElements, length);
  }
}
