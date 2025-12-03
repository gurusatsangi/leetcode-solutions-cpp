## 🔢 LeetCode 1018 — Binary Prefix Divisible By 5

Efficient C++ Solution Using Running Modulo Logic

# 🧩 Problem Summary

You are given an array nums containing binary digits (0 or 1).
For every prefix of the array, you must determine whether the value of that binary number is divisible by 5.

Example

Input:
nums = [0,1,1]

Prefixes:

0 → 0 (divisible)

01 → 1 (not divisible)

011 → 3 (not divisible)

Output:
[true, false, false]

# 🚀 Intuition

Instead of converting each prefix to decimal (which would be slow), you maintain a running value using the binary-to-decimal update rule:

# 🔍 Running Formula
val = val * 2 + current_bit


To avoid large numbers, reduce using modulo:

val = (val * 2 + bit) % 5


Now val always stays between 0 and 4.

Finally, check:

val == 0  → divisible by 5
# ✅ C++ Code
```cpp
class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> ans;
        int val = 0;

        for (char num : nums) {
            val = (val * 2 + num) % 5; 
            ans.push_back(val == 0);
        }

        return ans;
    }
};
```

# ⏱ Time & Space Complexity
Operation	Complexity
Processing each bit	O(n)
Extra space for results	O(n)
No extra heavy operations	✔

# 🏁 Why This Works Well

Prevents overflow using % 5

Avoids repeated binary-to-decimal conversions

Constant-time update for each prefix

Clean and optimal solution for competitive programming