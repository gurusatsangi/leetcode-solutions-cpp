# 🔄 Flipping an Image  
**LeetCode 832**

---

## 📌 Problem Statement
You are given an `n x n` binary matrix `image`.

You must:
1. **Flip the image horizontally** (reverse each row)
2. **Invert the image** (change `0` to `1` and `1` to `0`)

Return the resulting image.

---

## 🧠 Key Idea
Process each row independently:
- Reverse the row
- Invert every element

---

## ✅ Approach: Reverse + Invert

### 🔹 Steps
1. Traverse each row
2. Reverse the row
3. Invert each bit
4. Return the updated matrix

---

## 🧾 C++ Solution
```cpp
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();

        for (int i = 0; i < n; i++) {
            reverse(image[i].begin(), image[i].end());
            for (int j = 0; j < n; j++) {
                image[i][j] = image[i][j] == 1 ? 0 : 1;
            }
        }
        return image;
    }
};
```

---

## 🧪 Examples

### Example 1
Input:
```
[[1,1,0],[1,0,1],[0,0,0]]
```

Output:
```
[[1,0,0],[0,1,0],[1,1,1]]
```

---

### Example 2
Input:
```
[[1,1,0,0],[1,0,0,1],[0,1,1,1],[1,0,1,0]]
```

Output:
```
[[1,1,0,0],[0,1,1,0],[0,0,0,1],[1,0,1,0]]
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n²)`
- **Space Complexity:** `O(1)` (in-place)

---

## 🏁 Conclusion
✔ Clean and simple matrix manipulation  
✔ In-place transformation  
✔ Perfect for Easy-level problems  

---

⭐ If this README helped you, consider starring the repository!
