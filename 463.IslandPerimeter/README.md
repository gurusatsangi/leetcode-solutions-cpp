# 463. Island Perimeter

## 📌 Problem Statement
You are given a 2D grid representing a map where:
- `1` represents **land**
- `0` represents **water**

There is **exactly one island** (one or more connected land cells).
The island does **not** contain lakes (water inside land).

Return the **perimeter of the island**.

---

## ✅ Approach (Grid Traversal – Geometry Logic)

For **every land cell (`1`)**:
- Initially assume it contributes **4 sides**
- If the **top neighbor** is also land → subtract `2`
- If the **left neighbor** is also land → subtract `2`

Why `2`?
Because a shared edge is counted twice (once by each cell).

This avoids BFS/DFS and works in **O(rows × cols)** time.

---

## 🧠 Algorithm Steps
1. Traverse every cell in the grid
2. If the cell is land:
   - Add `4` to perimeter
   - Check top neighbor → subtract `2` if land
   - Check left neighbor → subtract `2` if land
3. Return total perimeter

---

## 🧪 Example

### Input Grid
```
0 1 0 0
1 1 1 0
0 1 0 0
1 1 0 0
```

### Output
```
16
```

---

## 💻 C++ Code

```cpp
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int perimeter = 0;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == 1) {
                    perimeter += 4;

                    if (i > 0 && grid[i-1][j] == 1)
                        perimeter -= 2;

                    if (j > 0 && grid[i][j-1] == 1)
                        perimeter -= 2;
                }
            }
        }
        return perimeter;
    }
};
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(rows × cols)`
- **Space Complexity:** `O(1)`

---

## 🚀 LeetCode Link
https://leetcode.com/problems/island-perimeter/

---

## ✨ Author
**Guru Prasad**  

