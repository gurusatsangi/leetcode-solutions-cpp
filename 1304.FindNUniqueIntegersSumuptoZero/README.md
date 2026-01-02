# ➕➖ Find N Unique Integers Sum up to Zero  
**LeetCode 1304**

---

## 📌 Problem Statement
Given an integer `n`, return **any array** containing `n` **unique integers** such that the **sum of all elements is 0**.

You can return the answer in **any order**.

---

## 🧠 Key Idea
To ensure the sum is zero:
- Use **pairs** of numbers `(i, -i)`
- If `n` is **odd**, include `0` once
- This guarantees uniqueness and total sum = 0

---

## ✅ Approach: Positive–Negative Pairing

### 🔹 Steps
1. If `n` is odd, add `0` to the array
2. For each `i` from `1` to `n / 2`:
   - Add `i`
   - Add `-i`
3. Return the array

---

## 🧾 C++ Solution
```cpp
class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;

        if (n % 2 == 1) {
            ans.push_back(0);
        }

        for (int i = 1; i <= n / 2; i++) {
            ans.push_back(i);
            ans.push_back(-i);
        }

        return ans;
    }
};
```

---

## 🧪 Examples

### Example 1
**Input**
```
n = 5
```
**Output**
```
[0, 1, -1, 2, -2]
```

---

### Example 2
**Input**
```
n = 3
```
**Output**
```
[-1, 0, 1]
```

---

### Example 3
**Input**
```
n = 1
```
**Output**
```
[0]
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(n)`

---

## 🏁 Conclusion
✔ Simple and efficient  
✔ Guarantees uniqueness  
✔ Always sums to zero  

---

⭐ If this README helped you, consider starring the repository!
