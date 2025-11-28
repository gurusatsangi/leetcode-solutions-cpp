## 🎯 LeetCode 3289 — The Two Sneaky Numbers of Digitville

# 📘 Problem Summary

In Digitville, an array nums contains integers from 0 to n−1, where each number should appear exactly once.

But two numbers appear twice, making the list n + 2 long.

Your task is to find those two sneaky numbers.

✔️ Return them in any order
✔️ Exactly two numbers are repeated
✔️ All other numbers appear once

🧠 Constraints

2 ≤ n ≤ 100

nums.length = n + 2

0 ≤ nums[i] < n

Exactly two repeated elements

🔍 Examples
✅ Example 1:

Input:
nums = [0,1,1,0]
Output:
[0,1]
Explanation: Both 0 and 1 appear twice.

✅ Example 2:

Input:
nums = [0,3,2,1,3,2]
Output:
[2,3]
Explanation: 2 and 3 are the repeating numbers.

✅ Example 3:

Input:
nums = [7,1,5,4,3,4,6,0,9,5,8,2]
Output:
[4,5]

## 🚀 Approach

We use an unordered_map (hash map) to count frequencies.

Each number increments its frequency

When a number reaches 2, that number is sneaky

Return the list of duplicates

This guarantees a simple, clean O(n) solution.

💻 C++ Code
```cpp
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        
        unordered_map<int, int> map;
        vector<int> ans;

        // Count frequency of each number
        for (int num : nums) {
            map[num]++;

            // If it appears exactly twice → sneaky number
            if (map[num] == 2)
                ans.push_back(num);
        }

        return ans;
    }
};
```

## ⏳ Complexity Analysis
- Complexity	Value
- Time	O(n)
- Space	O(n)

# 🏆 Why This Solution Works

✔ Hash map ensures constant-time counting
✔ One linear scan
✔ Collects both duplicates efficiently
✔ Guaranteed exactly two repeated numbers → fits the logic perfectly

# ⭐ Summary

This is a clean and optimal approach using HashMap:

Fast

Simple

No sorting needed

Works for all inputs within constraints