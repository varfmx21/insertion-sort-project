# Insertion Sort Algorithm with Prime Numbers Selection

## Description
In this activity, we explore the **Insertion Sort** algorithm, an intuitive and efficient approach for sorting small or nearly sorted lists. The algorithm mimics the process of sorting cards in hand, inserting each element into its correct position within an already sorted sublist.

Additionally, after sorting the array, the program identifies and selects prime numbers from the sorted list.

## Algorithm Overview

### Insertion Sort
- **Insertion Sort** works by iterating through the list, picking one element at a time, and inserting it into the correct position relative to the elements before it.
- The algorithm is particularly efficient for small or nearly sorted datasets, making it an ideal choice for these scenarios.

### Prime Number Selection
- After sorting the array, the program checks each element to determine if it is a prime number and stores all prime numbers in a separate list.

## Code Explanation

1. **Insertion Sort Algorithm**: 
   - Starting from the second element, the algorithm picks each element (`key`), compares it with elements in the sorted part of the list, and inserts it in the appropriate position.
   
2. **Prime Number Selection**:
   - After sorting, the program checks for prime numbers in the sorted array and stores them in a separate list using the `esPrimo` function.

3. **Output**:
   - The unsorted array is printed first.
   - After sorting, the prime numbers found in the sorted array are printed separately.

## Time and Space Complexity

### Insertion Sort
- **Time Complexity**: 
  - Best case: O(n) for nearly sorted data
  - Average and Worst case: O(n²)
- **Space Complexity**: 
  - O(1), since the algorithm sorts the list in place.

### Prime Number Selection
- **Time Complexity**:
  - O(n * sqrt(n)) where `n` is the length of the array (as each number is checked for primality).

## How to Run

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/insertion-sort-prime-selection
