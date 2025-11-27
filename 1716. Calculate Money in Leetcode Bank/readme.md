## LeetCode 1716 — Calculate Money in LeetCode Bank

# 📘 Problem Summary

You deposit money in the bank following this pattern:

Every Monday, you deposit an increasing amount:
Week 1 → 1, Week 2 → 2, Week 3 → 3...

Each following day: deposit = previous day + 1

Given n days, return total money collected.

📅 Weekly Deposit Pattern
Week	Mon	Tue	Wed	Thu	Fri	Sat	Sun	Total
1	1	2	3	4	5	6	7	28
2	2	3	4	5	6	7	8	35
3	3	4	5	6	7	8	9	42

# 🚀 Approach
✔ 1. Full Weeks
week = n / 7


Each full week contributes:

28 + 7 * i

✔ 2. Remaining Days
days = n % 7  
start = week + 1

# 💻 C++ Solution
```cpp
class Solution {
public:
    int totalMoney(int n) {
        int week = n / 7;       // Number of full weeks
        int days = n % 7;       // Remaining days
        int sum = 0;

        // Sum of complete weeks
        for (int i = 0; i < week; i++) {
            sum += 28 + 7 * i;
        }

        // Sum of remaining days
        int start = week + 1;
        for (int i = 0; i < days; i++) {
            sum += start + i;
        }

        return sum;
    }
};
```
## ⏳ Complexity Analysis
- Complexity	Value
- Time	O(1)
- Space	O(1)

## 🔍 Example
Input:
n = 10

Output:
37

# Explanation:

Week 1 total: 28

Next 3 days: 2 + 3 + 4 = 9
Total = 37

