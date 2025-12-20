# 🔠 Delete Columns to Make Sorted  
**LeetCode 944**

---

## 📌 Problem Statement
You are given an array of `n` strings `strs`, where all strings have the **same length**.

The strings are arranged like a grid (one string per row).  
Your task is to **delete columns** that are **not sorted lexicographically** (top to bottom).

Return the **number of columns** that must be deleted.

---

## 📊 Grid Explanation
Example:
```
abc
bce
cae
```

- Column 0 → `a, b, c` ✅ sorted  
- Column 1 → `b, c, a` ❌ not sorted  
- Column 2 → `c, e, e` ✅ sorted  

👉 Delete column 1 → Answer = `1`

---

## 🧠 Key Idea
Check **each column independently**:
- If any character is **smaller than the character above it**,  
  that column is **not sorted** and must be deleted.

---

## ✅ Approach: Column-wise Comparison

### 🔹 Steps
1. Let `n` be the number of strings  
2. Let `l` be the length of each string  
3. For every column `i`:
   - Compare `strs[j][i]` with `strs[j-1][i]`
   - If order breaks → delete the column

---

## 🧾 C++ Solution
```cpp
class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n = strs.size();
        int l = strs[0].size();
        int count = 0;

        for (int i = 0; i < l; i++) {
            for (int j = 1; j < n; j++) {
                if (strs[j][i] < strs[j - 1][i]) {
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};
```

---

## 🧪 Examples

### Example 1
**Input**
```
["cba","daf","ghi"]
```
**Output**
```
1
```

---

### Example 2
**Input**
```
["a","b"]
```
**Output**
```
0
```

---

### Example 3
**Input**
```
["zyx","wvu","tsr"]
```
**Output**
```
3
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n × l)`
- **Space Complexity:** `O(1)`

---

## 🏁 Conclusion
✔ Simple column-by-column check  
✔ No extra data structures required  
✔ Efficient and easy-to-implement solution  

---

⭐ If this README helped you, consider starring the repository!
