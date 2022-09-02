// => What is Two Pointer Pattern and When to use it ?

// 1. In many Problems involving Arrays or Linked List where you need to find a set of elements that fulfill certain constraints, we can use the Two Pointers Pattern to avoid looping over array multiple times.
// 2. The pointer in this case refers to an index of the array.
// 3. Because we use two pointers, we are able to process two elements per loop instead of just onemptied. Common patterns in the Two Pointers approach are:
//    a. Two pointers, each starting from the beginning and the end until they both meet.
//    b. Fast and Slow pointers, one pointer moving at a slow pace, while the other pointer moves at faster pace than the other one.

// Note:
// 1. Many Faang companies ask questions based on this pattern.
// 2. Multiple pointers also include 3-pointer, 4-pointer...etc. But these are rare in interviews.

// ----------------------------------------------------------------------------------------------------
// -> Important Points to Remember -
// 1. Physical Significance of the Pointer(what the pointer represents in the solution i.e. - pair, range, etc)
// 2. How to initialize a pointer.
// 3. How to move the pointer and Reduce the problem to a search problem
// 4. Evaluate the elements pointed by pointers
// 5. When to stop the pointer.

// Note:
// - The Fast and Slow Poiter approach AKA the Flyod's Hare and Tortoise algorithm, is a pointer algorithm that uses two pointers which move through a continuous data set at different speeds. This approach is especially useful when dealing with a LinkedLists(mostly cyclic) or arrays.
// - By Moving at different speeds, the algorithm proves that the two pointers are bound to meet. The fast pointer should catch the slow pointer once both the  pointers are in cyclic loop.
