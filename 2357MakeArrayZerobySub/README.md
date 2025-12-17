# 🧮 Make Array Zero by Subtracting Equal Amounts  
**LeetCode 2357**

---

## 📌 Problem Summary
You are given a non-negative integer array `nums`.

In **one operation**:
- Choose a positive integer `x`
- `x` must be **≤ smallest non-zero element** in the array
- Subtract `x` from **every positive element**

Return the **minimum number of operations** required to make all elements equal to `0`.

---

## 💡 Key Observation
Each operation removes **one distinct positive value** from the array.  
So, the answer is the **count of unique non-zero elements**.

---

# ✅ Approach 1: Using `unordered_set`
### 🔹 Idea
- Store all elements in a set (unique elements)
- If `0` exists, subtract 1 from the set size

### 🔹 Code (C++)
```cpp
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());

        if (s.count(0))
            return s.size() - 1;
        else
            return s.size();
    }
};
```

### 🔹 Complexity
- Time: **O(n)**
- Space: **O(n)**

---

# ✅ Approach 2: Using `vector` + Sorting
### 🔹 Idea
- Sort the array
- Count how many times the value changes from a smaller number to a larger **non-zero** number

### 🔹 Code (C++)
```cpp
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int operations = 0;
        int prev = 0;

        for (int x : nums) {
            if (x > prev) {
                operations++;
                prev = x;
            }
        }
        return operations;
    }
};
```

### 🔹 Complexity
- Time: **O(n log n)**
- Space: **O(1)** (ignoring sort space)

---

## 🧪 Example
```cpp
nums = [1,5,0,3,5]
```

Unique non-zero values:
```
{1, 3, 5}
```

### Output
```
3
```

---

## 🏁 Conclusion
| Method | Time | Space | Notes |
|------|------|-------|------|
| `unordered_set` | O(n) | O(n) | Fast & simple |
| `vector + sort` | O(n log n) | O(1) | No extra data structure |

✔ Both approaches are valid  
✔ Choose based on space/time preference  

---

⭐ If this helped, consider starring the repository!
