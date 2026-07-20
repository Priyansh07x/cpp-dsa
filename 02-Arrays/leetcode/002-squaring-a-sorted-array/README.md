# Squares of a Sorted Array (Two Pointers)

**Platform:** LeetCode  

**Problem Link:**  
[https://leetcode.com/problems/squares-of-a-sorted-array/description/](https://leetcode.com/problems/squares-of-a-sorted-array/description/)

**Difficulty:** Easy


## Approach
1. The array is sorted but may contain negative numbers. Squaring them can disrupt the sorted order.
2. Use two pointers:
   - `left = 0` (start of array)
   - `right = n - 1` (end of array)
3. Compare absolute values:
   - The larger absolute value contributes the largest square.
   - Place this square at the current highest index in the result array.
4. Move the pointer inward:
   - If `abs(nums[left]) > abs(nums[right])`, square `nums[left]` and move `left++`.
   - Else, square `nums[right]` and move `right--`.
5. Continue until all positions are filled.


## Concepts
- Array  
- Two Pointers  
- Absolute Value  
- Sorting Logic  


## Algorithm
- Initialize result vector of size `n`.
- Set `left = 0`, `right = n - 1`, `index = n - 1`.
- While `left <= right`:
  - Compare `abs(nums[left])` and `abs(nums[right])`.
  - Place the larger square at `ans[index]`.
  - Move the corresponding pointer inward.
  - Decrement `index`.
- Return the result vector.


## Time Complexity
**O(n)**  
- Each element is processed once using two pointers.

## Space Complexity
**O(n)**  
- Extra space is required for the result array.


## Key Learning
- Squaring negative numbers can break sorted order, so direct squaring is insufficient.
- The two-pointer technique efficiently reconstructs the sorted squared array.
- This approach avoids sorting after squaring, which would cost **O(n log n)**.
- Instead, it achieves linear time complexity, making it optimal.
