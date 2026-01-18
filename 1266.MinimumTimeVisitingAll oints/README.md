# ⏱️ Minimum Time Visiting All Points  
**LeetCode 1266**

---

## 📌 Problem Statement
On a 2D plane, there are `n` points with integer coordinates `points[i] = [xi, yi]`.

Return the **minimum time in seconds** to visit all the points **in the order given**.

### Movement Rules
In **1 second**, you can:
- Move vertically by 1 unit
- Move horizontally by 1 unit
- Move diagonally (1 unit vertically + 1 unit horizontally)

You must visit the points in the same order.

---

## 🧠 Key Insight
From point `(x1, y1)` to `(x2, y2)`:
- Horizontal distance = `|x2 - x1|`
- Vertical distance = `|y2 - y1|`

Since diagonal moves are allowed, the minimum time is:
```
max(|x2 - x1|, |y2 - y1|)
```

---

## ✅ Approach
1. Iterate through points from index `1`
2. For each consecutive pair, add  
   `max(dx, dy)` to the answer
3. Return total time

---

## 🧾 C++ Solution
```cpp
class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ans = 0;
        for (int i = 1; i < points.size(); i++) {
            ans += max(
                abs(points[i][0] - points[i - 1][0]),
                abs(points[i][1] - points[i - 1][1])
            );
        }
        return ans;
    }
};
```

---

## 🧪 Examples

### Example 1
Input:
```
points = [[1,1],[3,4],[-1,0]]
```
Output:
```
7
```

---

### Example 2
Input:
```
points = [[3,2],[-2,2]]
```
Output:
```
5
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## 🏁 Conclusion
✔ Clean mathematical solution  
✔ Efficient traversal  
✔ Beginner-friendly logic  

---

⭐ If this README helped you, consider starring the repository!
