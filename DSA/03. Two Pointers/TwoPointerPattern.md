# Two Pointer Pattern

## Introduction

The Two Pointer Pattern is useful in many problems involving Arrays or Linked Lists where you need to find a set of elements that fulfill certain constraints. This pattern helps avoid looping over the array multiple times.

In this pattern, a pointer refers to an index of the array. By using two pointers, we can process two elements per loop instead of just one. Common patterns in the Two Pointers approach are:

1. Two pointers starting from the beginning and the end, moving until they meet
2. Fast and Slow pointers, where one pointer moves at a slow pace while the other moves at a faster pace

> **Note:**
>
> -  Many FAANG companies ask questions based on this pattern
> -  Multiple pointers can also include 3-pointer, 4-pointer, etc., but these are rare in interviews

---

## Important Points to Remember

1. Physical Significance of the Pointer (what the pointer represents in the solution i.e., pair, range, etc.)
2. How to initialize a pointer
3. How to move the pointer and reduce the problem to a search problem
4. How to evaluate the elements pointed by pointers
5. When to stop the pointer

### Fast and Slow Pointer Approach

Also known as Floyd's Hare and Tortoise algorithm, this is a pointer algorithm that uses two pointers which move through a continuous data set at different speeds. This approach is especially useful when dealing with LinkedLists (mostly cyclic) or arrays.

By moving at different speeds, the algorithm proves that the two pointers are bound to meet. The fast pointer should catch the slow pointer once both pointers are in a cyclic loop.
