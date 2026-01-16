# 🟢 LeetCode 766 – Toeplitz Matrix

## 📌 Problem Statement
Given an `m x n` matrix, return **true** if the matrix is **Toeplitz**.  
Otherwise, return **false**.

### ✅ What is a Toeplitz Matrix?
A matrix is called **Toeplitz** if **every diagonal from top-left to bottom-right contains the same elements**.

---

## 🧠 Approach

To verify a Toeplitz matrix:
- Start iterating from cell `(1,1)`
- Compare each element `matrix[i][j]` with `matrix[i-1][j-1]`
- If any mismatch is found → return `false`
- Otherwise → return `true`

---

## 💻 C++ Implementation

```cpp
class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (matrix[i][j] != matrix[i - 1][j - 1]) {
                    return false;
                }
            }
        }
        return true;
    }
};
```

---

## 📊 Examples

Input:
```
[[1,2,3,4],
 [5,1,2,3],
 [9,5,1,2]]
```
Output:
```
true
```

---

## ⏱ Complexity
- Time: `O(m × n)`
- Space: `O(1)`

---

