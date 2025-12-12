# 🔢 LeetCode 167 --- Two Sum II (Input Array Is Sorted)

This repository contains the C++ solution for **LeetCode Problem 167 ---
Two Sum II**.

The objective is to find **two numbers** in a **sorted 1-indexed** array
that sum up to a given `target`, using **constant extra space**.

------------------------------------------------------------------------

## 📘 Problem Summary

Given:

-   A **sorted** array `numbers`
-   A target integer `target`

Return the **1‑indexed** positions `[index1, index2]` such that:

    numbers[index1] + numbers[index2] == target

Constraints ensure:

-   Exactly **one solution exists**
-   You cannot use the same element twice
-   Must run with **O(1)** extra space

------------------------------------------------------------------------

## 🔍 Examples

### Example 1

    Input: numbers = [2,7,11,15], target = 9
    Output: [1,2]

### Example 2

    Input: numbers = [2,3,4], target = 6
    Output: [1,3]

### Example 3

    Input: numbers = [-1,0], target = -1
    Output: [1,2]

------------------------------------------------------------------------

## 💡 Approach (Two-Pointer Technique)

Since the array is sorted:

1.  Use two pointers:
    -   `low = 0`\
    -   `high = numbers.size() - 1`
2.  Compute the sum:
    -   If `sum > target` → decrement `high`
    -   If `sum < target` → increment `low`
    -   If equal → return 1-indexed `[low+1, high+1]`

This ensures **O(n)** time and **O(1)** memory.

------------------------------------------------------------------------

## 🧾 C++ Solution

``` cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int high = numbers.size() - 1, low = 0;
        while (low < high){
            if ((numbers[low] + numbers[high]) > target) high--;
            else if ((numbers[low] + numbers[high]) < target) low++;
            else return {low+1,high+1};
        }
        return {low+1, high+1};
    }
};
```

------------------------------------------------------------------------

## ⏱️ Complexity

-   **Time Complexity:** O(n)
-   **Space Complexity:** O(1)

------------------------------------------------------------------------

## 📎 Tags

`#TwoPointers` `#Array` `#BinarySearch` `#C++` `#LeetCode`
