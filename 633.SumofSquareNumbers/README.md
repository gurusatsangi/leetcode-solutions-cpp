# 633. Sum of Square Numbers

## 📌 Problem Statement
Given a **non-negative integer `c`**, determine whether there exist **two integers `a` and `b`** such that:

```
a² + b² = c
```

Return `true` if such integers exist, otherwise return `false`.

---

## ✅ Approach (Two Pointer Technique)

We use a **two-pointer approach**:
- Pointer `i` starts from `0`
- Pointer `j` starts from `sqrt(c)`

### Logic
- If `i*i + j*j == c` → return `true`
- If sum is smaller → increase `i`
- If sum is larger → decrease `j`

This works efficiently because squares are always non‑negative and sorted.

---

## 🧠 Algorithm Steps
1. Initialize `i = 0`
2. Initialize `j = floor(sqrt(c))`
3. While `i <= j`:
   - Calculate `i*i + j*j`
   - Compare with `c`
4. Return result

---

## 🧪 Example

### Input
```
c = 5
```

### Output
```
true
```

### Explanation
```
1² + 2² = 1 + 4 = 5
```

---

## 💻 C++ Code

```cpp
class Solution {
public:
    bool judgeSquareSum(int c) {
        long long i = 0;
        long long j = sqrt(c);

        while (i <= j) {
            long long lhs = i * i + j * j;

            if (lhs == c) return true;
            else if (lhs < c) i++;
            else j--;
        }
        return false;
    }
};
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(√c)`
- **Space Complexity:** `O(1)`

---

## 🚀 LeetCode Link
https://leetcode.com/problems/sum-of-square-numbers/

---

## ✨ Author
**Guru Prasad**  

