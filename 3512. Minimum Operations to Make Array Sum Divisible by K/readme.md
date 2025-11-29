## Minimum Operations to Make Array Sum Divisible by K

## LeetCode Problem 3512 – C++ Solution

# 🧩 Problem Summary

You are given an integer array nums and an integer k.
In one operation, you can decrease any element of the array by 1.

Your goal is to find the minimum number of operations needed so that
the total sum of the array becomes divisible by k.

💡 Key Insight

Every operation reduces the total sum by exactly 1.
So, if:

sum % k == x


then the sum is x away from the nearest number divisible by k.

👉 Therefore, the minimum operations required is simply:

sum % k

# ✅ C++ Solution
```cpp
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        long long sum = 0;

        // Calculate the total sum of the array
        for (int num : nums) {
            sum += num;
        }

        // Minimum operations = remainder when sum divided by k
        return sum % k;
    }
};
```
# 📝 Explanation

We iterate over every number and compute the total sum.

If the sum is already divisible by k, answer is 0.

Otherwise, remainder sum % k tells how many decrement operations are needed.

Example:
If sum = 17 and k = 5
17 % 5 = 2 → Reduce total by 2 → Needs 2 operations

# 🚀 Time & Space Complexity
Complexity	Value
Time	O(n) — looping once through the array
Space	O(1) — constant extra space


# 📌 Conclusion

This problem becomes simple once you notice that every operation reduces the sum by exactly 1, so the answer is just the remainder.