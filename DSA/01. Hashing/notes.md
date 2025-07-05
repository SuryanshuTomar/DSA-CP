# Hashing in Data Structures

## What is Hashing?

Hashing is a process of transforming input data (keys) into a fixed-size value (hash code) using a mathematical function called a hash function. This hash code is then used as an index to store or retrieve data in a hash table.

- **Why Hashing?**  
    Hashing allows for fast data access, making operations like search, insert, and delete efficient (often O(1) on average).

**Visual Representation:**

```
[Key] --(Hash Function)--> [Hash Code] --(Index)--> [Hash Table Slot]
```

---

## Hash Function

A hash function takes an input (key) and returns an integer (hash code). The quality of a hash function is measured by how uniformly it distributes keys across the hash table.

- **Good Hash Function:** Minimizes collisions and distributes keys evenly.
- **Bad Hash Function:** Causes clustering and frequent collisions.

**Visual Representation:**

```
Keys:      21   34   56   78
Hash Fn:   |    |    |    |
           v    v    v    v
Indexes:   1    4    6    8
```

---

## Hash Table

A hash table is a data structure that uses a hash function to map keys to indices in an array, allowing for efficient data retrieval.

- **Structure:** Array of fixed size, where each slot can store a key-value pair.

**Visual Representation:**

```
Index:   0   1   2   3   4   5   6   7   8   9
Table:  [ ] [21] [ ] [ ] [34] [ ] [56] [ ] [78] [ ]
```

---

## Types of Hashing

### 1. Division Method

- **How it works:**  
    The key is divided by the table size, and the remainder is used as the index.
- **Formula:** `index = key % table_size`
- **Pros:** Simple and fast.
- **Cons:** Table size should be a prime number to reduce collisions.

**Example:**
- Key = 123, Table Size = 10  
    `123 % 10 = 3` → Store at index 3

**Visual:**

```
Key: 123
123 % 10 = 3
[0][1][2][3:123][4][5][6][7][8][9]
```

---

### 2. Multiplication Method

- **How it works:**  
    Multiply the key by a constant (0 < A < 1), take the fractional part, multiply by table size, and take the floor.
- **Formula:** `index = floor(table_size * ((key * A) % 1))`
- **Pros:** Works well for non-prime table sizes.

**Example:**
- Key = 123, Table Size = 10, A = 0.618  
    `index = floor(10 * (123 * 0.618 % 1))`

**Visual:**

```
Key: 123
123 * 0.618 = 76.014
Fractional part = 0.014
0.014 * 10 = 0.14
floor(0.14) = 0
[0:123][1][2][3][4][5][6][7][8][9]
```

---

### 3. Folding Method

- **How it works:**  
    Split the key into equal parts, add them together, and use the result as the index.
- **Pros:** Useful for large keys.

**Example:**
- Key = 123456, split as 123 + 456 = 579  
    `579 % 10 = 9`

**Visual:**

```
Key: 123456
Split: 123 + 456 = 579
579 % 10 = 9
[0][1][2][3][4][5][6][7][8][9:123456]
```

---

### 4. Mid-Square Method

- **How it works:**  
    Square the key and extract the middle digits as the index.
- **Pros:** Reduces clustering for certain key patterns.

**Example:**
- Key = 123, 123² = 15129, middle digits = 512  
    `512 % 10 = 2`

**Visual:**

```
Key: 123
123^2 = 15129
Middle digits: 512
512 % 10 = 2
[0][1][2:123][3][4][5][6][7][8][9]
```

---

## Collisions in Hashing

**Collision:**  
Occurs when two different keys hash to the same index.

**Why do collisions happen?**  
Because the number of possible keys is usually much larger than the number of slots in the hash table.

**Visual:**

```
Keys: 15, 25
15 % 10 = 5
25 % 10 = 5
Both map to index 5
[0][1][2][3][4][5:15,25][6][7][8][9]
```

---

## Collision Resolution Techniques

### 1. Open Addressing

- **Linear Probing:**  
    If a slot is occupied, check the next slot (index + 1) until an empty slot is found.
    - *Visual:*  
        ```
        [5:15][6:25][7][8][9]
        ```

- **Quadratic Probing:**  
    Check slots at intervals of i² (index + 1², index + 2², ...).
    - *Visual:*  
        ```
        Try index 5, 6, 9, 4, ...
        ```

- **Double Hashing:**  
    Use a second hash function to calculate the step size for probing.
    - *Visual:*  
        ```
        Step size = hash2(key)
        ```

### 2. Chaining

- Store multiple elements at the same index using a linked list or another data structure.
- *Visual:*
    ```
    [5: 15 -> 25 -> ...]
    ```

### 3. Separate Overflow Area

- Use a separate memory area to store collided elements.
- *Visual:*
    ```
    [5: 15] [Overflow: 25]
    ```

---

## Importance of Hashing in DSA

- **Fast Data Access:**  
    Hashing allows for O(1) average time complexity for search, insert, and delete operations.
- **Efficient Memory Usage:**  
    Only the required number of slots are used, reducing memory overhead.
- **Wide Applications:**  
    Used in databases (indexing), caches, sets, maps, password storage, and more.

**Visual:**

```
[Hash Table] <--- Used in ---> [Databases, Caches, Sets, Maps]
```

---

## Example: Hash Table with Chaining

```python
# Simple hash table using division method and chaining
table_size = 10
hash_table = [[] for _ in range(table_size)]

def insert(key, value):
        index = key % table_size
        hash_table[index].append((key, value))

insert(15, 'A')
insert(25, 'B')  # Collision with key 15 if table_size is 10
print(hash_table)
```

**Visual:**

```
Index:   0   1   2   3   4   5           6   7   8   9
Table:  [ ] [ ] [ ] [ ] [ ] [(15,'A'),(25,'B')] [ ] [ ] [ ] [ ]
```