# 📐 LeetCode 367 – Valid Perfect Square

## 🧩 Problem Statement

Given a **positive integer `num`**, return `true` if `num` is a **perfect square**, otherwise return `false`.

A **perfect square** is an integer that is the square of another integer.

❌ **Constraint:**  
Do NOT use any built-in library function like `sqrt()`.

---

## ✅ Approach: Binary Search

We apply **Binary Search** to check whether there exists an integer `mid` such that:

mid × mid = num

Binary Search is efficient and avoids unnecessary computations.

---

## 🛠️ Algorithm

1. If `num == 1`, return `true`
2. Initialize:
   - `low = 0`
   - `high = num - 1`
3. While `low < high`:
   - Calculate `mid`
   - Compute `mid * mid`
   - Compare with `num`
4. If equal → return `true`
5. If loop ends → return `false`

---

## 💻 C++ Code

```cpp
class Solution {
public:
    bool isPerfectSquare(int num) {
        long long low = 0, high = num - 1;
        if (num == 1) return true;

        while (low < high) {
            long long mid = low + (high - low) / 2;
            long long sq = mid * mid;

            if (sq == num) {
                return true;
            } 
            else if (sq < num) {
                low = mid + 1;
            } 
            else {
                high = mid;
            }
        }
        return false;
    }
};
```

---

## 🧪 Example

### Input
```
num = 16
```

### Output
```
true
```

### Explanation
```
4 × 4 = 16
```

---

## ⏱️ Complexity Analysis

| Type | Complexity |
|----|----|
| Time | O(log n) |
| Space | O(1) |

---

## 🔗 LeetCode Link

https://leetcode.com/problems/valid-perfect-square/
