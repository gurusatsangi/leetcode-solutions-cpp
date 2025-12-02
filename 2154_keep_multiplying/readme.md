### 🔥 LeetCode 2154 — Keep Multiplying Found Values by Two
C++ Solutions (Brute + Optimal)

# 🧩 Problem Summary

You're given:

An integer array nums

An integer original

You must repeatedly do the following:

If original exists in nums, multiply it by 2
Else, stop and return the final value of original.

## ✔ Approach 1 — Sorting + Linear Scan

This was your first attempt.

# 🔍 Logic

Sort the array.

Traverse the sorted list.

If you find original, multiply it by 2.

Continue scanning for the new value.

# 📌 Code
// First attempt — Sorting + Linear Scan
```cpp
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(), nums.end());
        
        for (int num : nums) {
            if (num == original)
                original *= 2;
        }

        return original;
    }
};
```
# ⏱ Complexity

Step	Complexity
Sorting	O(n log n)
Scanning	O(n)
Total	O(n log n)

## ✔ Approach 2 — Optimal Using Unordered Set

This is your optimized solution.

# 🔍 Logic

Insert all values into an unordered_set → gives O(1) lookup.

While original exists in the set:

Multiply original by 2

Return final value.

# 📌 Code
// Second attempt — Optimal using unordered_set
```cpp
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int> mp(nums.begin(), nums.end());
        
        while (mp.count(original))
            original *= 2;

        return original;
    }
};
```
# ⏱ Complexity
Operation	Complexity
Build set	O(n)
Lookups	O(k) where k = number of times we multiply
Total	O(n)

# 🏁 Final Discussion

The sorting version works but is slower: O(n log n)

The unordered_set version is optimal: O(n)

Both are correct and easy to understand.