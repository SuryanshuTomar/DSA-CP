# Binary Search

## Introduction

Binary Search is a searching algorithm for finding an element's position in a sorted array. It only applies to monotonic functions, meaning it can be implemented only on a sorted list of items (either increasing or decreasing order).

Binary Search Algorithm can be implemented in two ways:

-  **Iterative Method**
-  **Recursive Method**

---

## Binary Search Algorithm Steps

1. Begin with the mid element of the whole array as a search key.
2. If the value of the search key is equal to the item, return the index of the search key.
3. If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half.
4. Otherwise, narrow it to the upper half.
5. Repeat from step 2 until the value is found or the interval is empty.

## Tips

-  Whenever the given list is **SORTED** in the question, then most definitely the concept of Binary Search will apply to that question.
-  Sometimes the list/array will not be given directly in the question, but by sorting and applying Binary Search in those questions we can get our answers in less complexity order. Those types of questions are called "Binary Search On Answer."

---

## Complexity

### Time Complexity

-  **Best case:** O(1)
-  **Average case:** O(log n)
-  **Worst case:** O(log n)

### Space Complexity

-  O(1)

---

## Applications

1. In libraries of Java, .Net, C++ STL
2. While debugging, Binary Search is used to pinpoint the place where the error happens.
