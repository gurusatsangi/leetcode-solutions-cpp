# 📘 LeetCode 2022 - Convert 1D Array Into 2D Array (C++)

## 🧩 Problem Statement
You are given a 0-indexed 1D integer array `original` and two integers `m` and `n`.
Your task is to convert the array into a 2D array with `m` rows and `n` columns.

- Fill the 2D array **row-wise**
- If `original.size() != m * n`, return an **empty 2D array**

---

## ✅ Approach
1. Check if conversion is possible by comparing sizes.
2. Create a 2D vector of size `m x n`.
3. Fill the array row by row using indexing.

---

## 💻 C++ Solution

```cpp
class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {

        if (original.size() != m * n)
            return {};

        vector<vector<int>> ans(m, vector<int>(n));

        int index = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                ans[i][j] = original[index++];
            }
        }

        return ans;
    }
};
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(m × n)`
- **Space Complexity:** `O(m × n)`

---

## 🧪 Example

![ex1](image.png)

**Input**
```
original = [1,2,3,4]
m = 2, n = 2
```

**Output**
```
[
  [1,2],
  [4,5]
]
```

---

## 🏷️ Tags
`Array` `Matrix` `Simulation`

---

⭐ If you found this helpful, give it a star on GitHub!
