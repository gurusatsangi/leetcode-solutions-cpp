## 🔺 LeetCode 976 — Largest Perimeter Triangle

This repository contains the C++ solution for LeetCode Problem 976 – Largest Perimeter Triangle.

The goal is to find the largest possible perimeter of a triangle that can be formed from any three numbers in the array.

# 📘 Problem Summary

You are given an array of positive integers nums, where each element represents the length of a stick.
You must:

Pick three sticks that can form a valid triangle

Return the largest possible perimeter

If no valid triangle can be formed, return 0
 
    a+b>c(for three sides)

# 🔍 Examples
Example 1
Input: nums = [2,1,2]
Output: 5

Example 2
Input: nums = [1,2,1,10]
Output: 0

# 💡 Approach
Sort the array in ascending order

Starting from the largest side, check if the three largest remaining sides satisfy:
     
     nums[i−2]+nums[i−1]>nums[i]

If they can form a valid triangle → return their perimeter

Otherwise continue checking smaller triplets

If none form a valid triangle → return 0

This works because sorting ensures we always try the largest possible perimeter first.

# 🧾 C++ Solution
```cpp
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size() - 1;

        for (int i = n; i >= 2; i--) {
            int x = nums[i], y = nums[i-1], z = nums[i-2];

            if (y + z > x)
                return x + y + z;
        }

        return 0;
    }
};
```
# ⏱️ Time & Space Complexity

Time Complexity: O(n log n) — due to sorting

Space Complexity: O(1) — sorting in-place