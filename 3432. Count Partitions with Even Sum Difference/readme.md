## LeetCode 3432 – Count Partitions with Even Sum Difference

This repository contains my C++ solution for the problem "3432. Count Partitions with Even Sum Difference".

# 🧩 Problem Summary

You are given an integer array nums of length n.

A partition is an index i where:

0 ≤ i < n - 1

Left part = nums[0…i]

Right part = nums[i+1…n-1]

We need to count how many such partitions produce:

(sum of left subarray − sum of right subarray) is even

# ✔️ Key Insight

A number is even iff it has the same parity as another number.

So:

(leftSum – rightSum) is even  
⇔ (leftSum % 2 == rightSum % 2)


This means both subarray sums must be:

both even, or

both odd

We track prefix and suffix sums and check parity at each split.

# 🛠️ Approach

Compute the total sum.

Traverse the array and maintain:

lsum = sum of left subarray

rsum = totalSum - lsum

If the parity matches, increment answer.

Stop before last index (array must split into two non-empty parts).

# 🚀 C++ Solution
```cpp
class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int lsum = 0;
        int ans = 0;

        // Calculate total sum
        for (int num : nums) {
            sum += num;
        }

        // If total sum is odd, no valid partitions
        if (sum % 2 != 0) return 0;

        // Traverse to count valid partitions
        for (int i = 0; i < n - 1; i++) {
            lsum += nums[i];
            sum -= nums[i];   // now sum is right sum

            if ((sum - lsum) % 2 == 0) ans++;
        }

        return ans;
    }
};
```
# 📊 Example
Input:
nums = [10, 10, 3, 7, 6]

Output:
4

# Explanation:

All four partitions produce an even difference.

# 🧮 Time & Space Complexity
Complexity	Value
Time	O(n)
Space	O(1)

# ⭐ Status

LeetCode Difficulty: Easy

My solution: Accepted ✔️