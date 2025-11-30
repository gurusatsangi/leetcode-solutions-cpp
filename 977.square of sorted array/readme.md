## 📘 LeetCode 977 – Squares of a Sorted Array

This repository contains solutions to LeetCode Problem 977: Squares of a Sorted Array using both Brute Force (O(n log n)) and Optimal Two-Pointer (O(n)) approaches.

## 📝 Problem Description

You are given an integer array nums sorted in non-decreasing order.
Return a new array of the squares of each number, also sorted in non-decreasing order.

Example:
Input: nums = [-4, -1, 0, 3, 10]
Output: [0, 1, 9, 16, 100]

## 🚀 Approach 1: Brute Force (Square + Sort)
✔ Idea

Square every number

Sort the result

# ⏱ Complexity

Time: O(n log n)

Space: O(1) (in-place)

# 🧩 Code
```cpp
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        // Square each element
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = nums[i] * nums[i];
        }

        // Sort the squared values
        sort(nums.begin(), nums.end());
        return nums;
    }
};
```
## 🚀 Approach 2: Optimal (Two Pointer Method) — O(n)
- ✔ Why it works?

Since the array is already sorted, the largest square will be either:

Left side (large negative), or

Right side (large positive)

Use two pointers and build the result from largest → smallest.

⏱ Complexity

Time: O(n)

Space: O(n)

# 🧩 Code
```cpp
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int n = nums.size();
        vector<int> result(n);

        int left = 0;
        int right = n - 1;
        int idx = n - 1;

        while (left <= right) {
            if (abs(nums[left]) > abs(nums[right])) {
                result[idx] = nums[left] * nums[left];
                left++;
            } else {
                result[idx] = nums[right] * nums[right];
                right--;
            }
            idx--;
        }

        return result;
    }
};

```

## 🏁 Final Notes

✔ Optimal solution uses two pointers
✔ Works in linear time
✔ Recommended for coding interviews