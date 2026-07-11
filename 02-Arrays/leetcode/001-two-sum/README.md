# Two Sum (Sorting + Two Pointers)

**Platform:** LeetCode

**Problem Link:**  
https://leetcode.com/problems/two-sum/

**Difficulty:** Easy

## Approach
1. Store each element along with its original index.
2. Sort the array based on element values.
3. Initialize two pointers:
   - `left = 0`
   - `right = n - 1`
4. Compare the sum of the elements at both pointers:
   - If the sum equals the target, return their original indices.
   - If the sum is less than the target, move `left` forward.
   - If the sum is greater than the target, move `right` backward.

## Concepts
- Array
- Sorting
- Two Pointers
- Pair (`value`, `index`)

## Algorithm
- Create a vector of pairs where each pair stores:
  - Element value
  - Original index
- Sort the vector by value.
- Use the two-pointer technique to find the target sum.
- Return the original indices stored in the pair.

## Time Complexity
**O(n log n)**
- Sorting takes **O(n log n)**.
- Two-pointer traversal takes **O(n)**.

## Space Complexity
**O(n)**
- Extra space is required to store the `(value, index)` pairs.

## Key Learning
- The two-pointer technique works efficiently **only on sorted data**.
- Since sorting changes the order of elements, storing the original indices before sorting is necessary.
- Although this approach is faster than brute force (`O(n²)`), it is **not the optimal solution** for the original Two Sum problem.
- The optimal solution uses an `unordered_map` and achieves **O(n)** time complexity.
