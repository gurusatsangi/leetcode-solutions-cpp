# 🌀 Spiral Matrix (LeetCode 54)

## 📌 Problem Statement
Given an `m x n` matrix, return **all elements of the matrix in spiral order**.

---

## ✅ Example 1
Input:
[[1,2,3],
 [4,5,6],
 [7,8,9]]

Output:
[1,2,3,6,9,8,7,4,5]

---

## 🧠 Approach
Use four boundaries: `top`, `bottom`, `left`, `right` and traverse layer by layer.

---

## 💻 C++ Code
```cpp
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> ans;
        int top = 0, bottom = m - 1, left = 0, right = n - 1;

        while (top <= bottom && left <= right) {
            for (int j = left; j <= right; j++)
                ans.push_back(matrix[top][j]);
            top++;

            for (int i = top; i <= bottom; i++)
                ans.push_back(matrix[i][right]);
            right--;

            if (top <= bottom) {
                for (int j = right; j >= left; j--)
                    ans.push_back(matrix[bottom][j]);
                bottom--;
            }

            if (left <= right) {
                for (int i = bottom; i >= top; i--)
                    ans.push_back(matrix[i][left]);
                left++;
            }
        }
        return ans;
    }
};
```

---

## ⏱ Complexity
Time: O(m×n)  
Space: O(m×n)

---

⭐ Star the repo if helpful!
