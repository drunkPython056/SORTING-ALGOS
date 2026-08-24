# Sorting Algorithms & K-th Smallest Element

This README gives a simple explanation of how the following algorithms work:

1. Radix Sort
2. Merge Sort
3. Quick Sort
4. Insertion Sort
5. Selection Sort
6. K-th Smallest Element

---

## 1. Radix Sort

### What is it?

Radix Sort is a non-comparison sorting algorithm. It sorts numbers digit by digit, starting from the least significant digit (units place).

### How it works

Suppose the array is:

`170, 45, 75, 90, 802, 24, 2, 66`

First sort according to the units digit:

`170, 90, 802, 2, 24, 45, 75, 66`

Then sort according to the tens digit.

Then sort according to the hundreds digit.

After all digit positions are processed:

`2, 24, 45, 66, 75, 90, 170, 802`

### Main idea

```text
Find the largest number
        ↓
Start from units digit
        ↓
Sort using counting sort
        ↓
Move to tens digit
        ↓
Move to hundreds digit
        ↓
Sorted array
```

### Time Complexity

`O(d × (n + k))`

Where:
- `d` = number of digits
- `n` = number of elements
- `k` = range of digits (10 for decimal numbers)

### Space Complexity

`O(n + k)`

---

## 2. Merge Sort

### What is it?

Merge Sort is a divide-and-conquer sorting algorithm.

It divides the array into smaller parts, sorts those parts, and then merges them.

### How it works

Suppose:

`38, 27, 43, 3, 9, 82, 10`

First divide:

```text
38 27 43 3 | 9 82 10
```

Divide again until individual elements remain.

Then merge them in sorted order:

```text
27 38
3 43
9 10 82
```

Finally:

`3, 9, 10, 27, 38, 43, 82`

### Main idea

```text
Divide
  ↓
Divide again
  ↓
Single elements
  ↓
Merge in sorted order
  ↓
Sorted array
```

### Time Complexity

Best Case: `O(n log n)`

Average Case: `O(n log n)`

Worst Case: `O(n log n)`

### Space Complexity

`O(n)`

---

## 3. Quick Sort

### What is it?

Quick Sort is a divide-and-conquer sorting algorithm.

It selects one element as a **pivot** and places smaller elements on one side and larger elements on the other side.

### How it works

Suppose:

`10, 7, 8, 9, 1, 5`

Choose `5` as the pivot.

After partitioning:

```text
1 | 5 | 10 7 8 9
```

Now apply Quick Sort to the left and right parts.

Eventually:

`1, 5, 7, 8, 9, 10`

### Main idea

```text
Choose pivot
     ↓
Partition array
     ↓
Smaller elements ← pivot → Larger elements
     ↓
Apply Quick Sort to both sides
     ↓
Sorted array
```

### Time Complexity

Best Case: `O(n log n)`

Average Case: `O(n log n)`

Worst Case: `O(n²)`

The worst case can occur when the pivot repeatedly produces highly unbalanced partitions.

### Space Complexity

Average: `O(log n)` for recursion stack

Worst: `O(n)` for recursion stack

---

## 4. Insertion Sort

### What is it?

Insertion Sort builds the sorted array one element at a time.

It works similarly to arranging playing cards in your hand.

### How it works

Suppose:

`5, 3, 4, 1, 2`

Start with:

`5`

Take `3` and insert it before `5`:

`3, 5`

Take `4`:

`3, 4, 5`

Take `1`:

`1, 3, 4, 5`

Take `2`:

`1, 2, 3, 4, 5`

### Main idea

```text
Take next element
      ↓
Compare with sorted elements
      ↓
Shift larger elements
      ↓
Insert element at correct position
```

### Time Complexity

Best Case: `O(n)`

Average Case: `O(n²)`

Worst Case: `O(n²)`

### Space Complexity

`O(1)`

---

## 5. Selection Sort

### What is it?

Selection Sort repeatedly finds the smallest element from the unsorted part and places it at the beginning.

### How it works

Suppose:

`64, 25, 12, 22, 11`

Find the smallest element:

`11`

Swap it with the first element:

`11, 25, 12, 22, 64`

Now find the smallest element in the remaining part:

`12`

Swap:

`11, 12, 25, 22, 64`

Continue:

`11, 12, 22, 25, 64`

### Main idea

```text
Find smallest element
        ↓
Swap with first unsorted element
        ↓
Move boundary forward
        ↓
Repeat
```

### Time Complexity

Best Case: `O(n²)`

Average Case: `O(n²)`

Worst Case: `O(n²)`

### Space Complexity

`O(1)`

---

## 6. K-th Smallest Element

### What is it?

The K-th smallest element is the element that would appear at position `k` if the array were sorted.

Example:

`7, 10, 4, 3, 20, 15`

Sorted array:

`3, 4, 7, 10, 15, 20`

Therefore:

- 1st smallest = `3`
- 2nd smallest = `4`
- 3rd smallest = `7`
- 4th smallest = `10`

If `k = 3`, the answer is `7`.

### Simple method using sorting

1. Sort the array.
2. Access index `k - 1`.

Example:

```cpp
sort(a, a + n);
cout << a[k - 1];
```

Why `k - 1`?

Because C++ arrays start from index `0`.

```text
Position:  1   2   3   4   5
Index:     0   1   2   3   4
```

So the K-th smallest element is at index:

`k - 1`

### Example

```text
Array:   7  10  4  3  20  15
k = 3

Sorted:  3  4  7  10  15  20
                  ↑
             3rd smallest
```

Answer: `7`

### Time Complexity using sorting

`O(n log n)`

### Better method

The K-th smallest element can also be found using **Quickselect**, which is based on the partition idea of Quick Sort.

Average Time Complexity:

`O(n)`

Worst Case:

`O(n²)`

---

# Quick Comparison

| Algorithm | Best | Average | Worst | Extra Space |
|---|---:|---:|---:|---:|
| Radix Sort | O(d(n+k)) | O(d(n+k)) | O(d(n+k)) | O(n+k) |
| Merge Sort | O(n log n) | O(n log n) | O(n log n) | O(n) |
| Quick Sort | O(n log n) | O(n log n) | O(n²) | O(log n) average |
| Insertion Sort | O(n) | O(n²) | O(n²) | O(1) |
| Selection Sort | O(n²) | O(n²) | O(n²) | O(1) |
| K-th Smallest (sorting) | O(n log n) | O(n log n) | O(n log n) | Depends on sort |

---

# Easy Way to Remember

### Radix Sort
**Sort digit by digit**

### Merge Sort
**Divide → Sort → Merge**

### Quick Sort
**Pivot → Partition → Recursively Sort**

### Insertion Sort
**Pick → Shift → Insert**

### Selection Sort
**Find minimum → Swap**

### K-th Smallest
**Sort → Pick index `k - 1`**

---

# Important Terms

### Divide and Conquer
Used by:
- Merge Sort
- Quick Sort

The problem is divided into smaller problems, solved, and combined or used to obtain the final answer.

### Stable Sorting

A stable sort preserves the relative order of equal elements.

- Merge Sort: generally stable
- Insertion Sort: stable
- Selection Sort: generally not stable
- Quick Sort: generally not stable
- Radix Sort: stable when implemented with a stable digit-sorting method

### In-place Sorting

An in-place algorithm uses very little additional memory.

- Insertion Sort: Yes
- Selection Sort: Yes
- Quick Sort: Usually considered in-place aside from recursion stack
- Merge Sort: No for the usual array implementation
- Radix Sort: No in the usual implementation
