// => Binary Search -

// 1. Binary Search is a searching algorithm for finding an element's position in a sorted array.
// 2. Binary Search will only apply on monotonic functions, meaning it can be implemented only on a sorted list of items which can be in either increasing or decreasing order.
// 3. Binary Search Algorithm can be implemented in two ways which are discussed below.
//    i. Iterative Method
//    ii. Recursive Method

// --------------------------------------------------------------------------------------------------
// -> Binary Search Algorithm: The basic steps to perform Binary Search are:
// 1. Begin with the mid element of the whole array as a search key.
// 2. If the value of the search key is equal to the item then return an index of the search key.
// 3. Or if the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half.
// 4. Otherwise, narrow it to the upper half.
// 5. Repeatedly check from the second point until the value is found or the interval is empty.

// -> TIP -
// - Whenever the given list is SORTED in the question, then most definitely the concept of Binary Search will apply to that question.
// - Sometimes the list/array will not be given directly in the question but by sorting and applying Binary Search in those question we can get our answers in less complexity order. Those types of questions are called Binary Search On Answer.

// --------------------------------------------------------------------------------------------------
// -> Binary Search Complexity -
// 1. Time Complexities -
//    i. Best case complexity: O(1)
//    ii. Average case complexity: O(log n)
//    iii. Worst case complexity: O(log n)

// 2. Space Complexity -
//    i. The space complexity of the binary search is O(1).

// --------------------------------------------------------------------------------------------------
// -> Binary Search Applications
// 1. In libraries of Java, .Net, C++ STL
// 2. While debugging, the binary search is used to pinpoint the place where the error happens.
