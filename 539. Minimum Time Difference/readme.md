## 🕒 LeetCode 539 — Minimum Time Difference

This repository contains the C++ solution to LeetCode Problem 539 – Minimum Time Difference.

The problem asks you to compute the minimum difference in minutes between any two time points in a list given in "HH:MM" 24-hour format.

# 📘 Problem Summary

Given a list of time strings:

Format: "HH:MM"

Find the minimum difference between any two time points

The clock wraps around (e.g., "23:59" and "00:00" differ by 1 minute)

# 🔍 Examples
- Example 1
Input: timePoints = ["23:59", "00:00"]
Output: 1

- Example 2
Input: timePoints = ["00:00", "23:59", "00:00"]
Output: 0
Explanation: duplicate times → minimum difference = 0

# 💡 Approach

✔ Key Observations

A full day has 1440 minutes
So if timePoints.size() > 1440, duplicates are guaranteed → answer is 0.

Convert each "HH:MM" string to its absolute minute value:

  minutes=HH×60+MM

Sort the converted list.

- Compute:

The difference between every adjacent pair

The circular difference:

  min((first+1440)−last)

This ensures all differences—including wrap-around—are considered.

# 🧾 C++ Implementation
```cpp
class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int n = timePoints.size();

        // If more than 1440 time points, duplicates must exist
        if (n > 1440) return 0;

        vector<int> minutes(n);

        // Convert HH:MM to total minutes
        for (int i = 0; i < n; i++) {
            minutes[i] = stoi(timePoints[i].substr(3, 2)) +
                         stoi(timePoints[i].substr(0, 2)) * 60;
        }

        sort(minutes.begin(), minutes.end());

        // Circular diff: consider the day wrap-around
        int minTime = (minutes[0] + 1440) - minutes[n - 1];

        // Check differences between adjacent times
        for (int i = 0; i < n - 1; i++) {
            int curMin = minutes[i + 1] - minutes[i];
            minTime = min(curMin, minTime);
        }

        return minTime;
    }
};
```
# ⏱️ Time & Space Complexity

Time Complexity: O(n log n)
Sorting dominates the complexity.

Space Complexity: O(n)
For the converted minutes array.