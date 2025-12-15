# 2110. Number of Smooth Descent Periods of a Stock

## 🟡 LeetCode Problem


---

## 📘 Problem Statement
You are given an integer array `prices` where `prices[i]` represents the stock price on the *i-th* day.

A **smooth descent period** consists of **one or more contiguous days** such that:
- The price on each day is **exactly 1 less** than the price on the previous day.
- A **single day** is always considered a valid smooth descent period.

Return the **total number of smooth descent periods**.

---

## 🔍 Example

### Example 1
```
Input:  prices = [3,2,1,4]
Output: 7
```
**Explanation:**  
Valid periods are:
```
[3], [2], [1], [4], [3,2], [2,1], [3,2,1]
```

---

### Example 2
```
Input:  prices = [8,6,7,7]
Output: 4
```

---

### Example 3
```
Input:  prices = [1]
Output: 1
```

---

## 💡 Approach
- Every individual day forms a smooth descent period → start with `ans = n`
- Use a variable `count` to track consecutive smooth descents
- If `prices[i-1] - prices[i] == 1`, increment `count`
- Otherwise, reset `count`
- Add `count` to the answer

This avoids nested loops and works in **linear time**.

---

## 💻 C++ Solution

```cpp
class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        int n = prices.size();
        long long ans = n;   // single-day periods
        int count = 0;

        for(int i = 1; i < n; i++){
            if (prices[i-1] - prices[i] == 1)
                count++;
            else
                count = 0;

            ans += count;
        }
        return ans;
    }
};
```

---

## ⏱ Complexity Analysis

| Metric | Complexity |
|------|-----------|
| Time | **O(n)** |
| Space | **O(1)** |

---

## 🚀 Key Takeaway
This problem is a great example of:
- Sliding window technique
- Counting subarrays efficiently
- Avoiding brute-force solutions

---

