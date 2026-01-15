# 🟢 LeetCode 1380 – Lucky Numbers in a Matrix

## 📌 Problem Statement
Given an `m x n` matrix of **distinct integers**, return all **lucky numbers** in the matrix in **any order**.

### ✅ Definition of Lucky Number
A number is called **lucky** if:
- It is the **minimum element in its row**
- It is the **maximum element in its column**

---

## 🧠 Approach Used

1. Traverse each **row** and store its **minimum element** in a set.
2. Traverse each **column** and find its **maximum element**.
3. If a column maximum exists in the set of row minimums →  
   🎯 **That number is a lucky number**.

---

## 💻 C++ Implementation

```cpp
class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        unordered_set<int> s;

        // Step 1: Store row minimums
        for (int i = 0; i < n; i++) {
            int minr = INT_MAX;
            for (int num : matrix[i]) {
                minr = min(minr, num);
            }
            s.insert(minr);
        }

        // Step 2: Check column maximums
        for (int j = 0; j < m; j++) {
            int maxc = INT_MIN;
            for (int i = 0; i < n; i++) {
                maxc = max(maxc, matrix[i][j]);
            }
            if (s.count(maxc)) {
                return {maxc};
            }
        }

        return {};
    }
};
```

---

## 📊 Example

**Input**
```
[[3,7,8],
 [9,11,13],
 [15,16,17]]
```

**Output**
```
[15]
```

---

## ⏱ Complexity Analysis

- **Time Complexity:** `O(m × n)`
- **Space Complexity:** `O(m)`

---

## 🏷️ Tags
Matrix · Array · Implementation · LeetCode Easy

---
