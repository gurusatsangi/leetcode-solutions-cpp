# 1351. Count Negative Numbers in a Sorted Matrix

This repository contains **three different approaches** to solve LeetCode problem **1351 – Count Negative Numbers in a Sorted Matrix**.

---

## 🔹 Problem Statement

Given a matrix `grid` of size `m x n` sorted in **non-increasing order** both row-wise and column-wise, return the number of **negative numbers** in the matrix.

---

## 🔹 Example

```
Input:
grid = [[4,3,2,-1],
        [3,2,1,-1],
        [1,1,-1,-2],
        [-1,-1,-2,-3]]

Output:
8
```

---

## ✅ Method 1: Brute Force (Simple Loop)

### 🔸 Idea
Traverse every element and count negatives.

### ⏱ Time Complexity
`O(m × n)`

### 💻 Code
```cpp
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] < 0) count++;
            }
        }
        return count;
    }
};
```

---

## ✅ Method 2: Binary Search (Row-wise)

### 🔸 Idea
Each row is sorted. Use binary search to find the **first negative number** in every row.

### ⏱ Time Complexity
`O(m log n)`

### 💻 Code
```cpp
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;

        for (int i = 0; i < m; i++) {
            int l = 0, r = n - 1;
            while (l <= r) {
                int mid = l + (r - l) / 2;
                if (grid[i][mid] < 0)
                    r = mid - 1;
                else
                    l = mid + 1;
            }
            count += (n - l);
        }
        return count;
    }
};
```

---

## ✅ Method 3: Optimal Two-Pointer Approach

### 🔸 Idea
Start from **top-right corner**:
- If value is negative → all elements below are negative
- Else → move down

### ⏱ Time Complexity
`O(m + n)` (Best Approach)

### 💻 Code
```cpp
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int row = 0, col = n - 1;
        int count = 0;

        while (row < m && col >= 0) {
            if (grid[row][col] < 0) {
                count += (m - row);
                col--;
            } else {
                row++;
            }
        }
        return count;
    }
};
```

---

## 🏁 Conclusion

| Method | Time Complexity |
|------|----------------|
| Brute Force | O(m × n) |
| Binary Search | O(m log n) |
| Two Pointer | O(m + n) ✅ |

➡️ **Recommended:** Two-pointer approach (fastest & cleanest)

---

### ⭐ If this helped, give the repo a star!
