# 2160. Minimum Sum of Four Digit Number After Splitting Digits

## 📌 Problem Statement
You are given a **positive integer `num` consisting of exactly four digits**.

You need to:
- Split the digits of `num` into **two new integers `new1` and `new2`**
- Use **all four digits exactly once**
- **Leading zeros are allowed**
- Return the **minimum possible sum** of `new1 + new2`

---

## ✅ Key Insight

To minimize the sum:
- Smaller digits should be placed at **higher place values**
- Sort the digits and distribute them **alternately** to form two 2-digit numbers

---

## 🧠 Approach (Greedy)

1. Convert the number into a string
2. Sort the digits in ascending order
3. Form two numbers:
   - `new1 = digit[0] * 10 + digit[2]`
   - `new2 = digit[1] * 10 + digit[3]`
4. Return `new1 + new2`

This greedy arrangement guarantees the minimum sum.

---

## 🧪 Example

### Input
```
num = 2932
```

### Sorted Digits
```
[2, 2, 3, 9]
```

### Formed Numbers
```
new1 = 23
new2 = 29
```

### Output
```
52
```

---

## 💻 C++ Code

```cpp
class Solution {
public:
    int minimumSum(int num) {
        string snum = to_string(num);
        sort(snum.begin(), snum.end());

        int new1 = (snum[0] - '0') * 10 + (snum[2] - '0');
        int new2 = (snum[1] - '0') * 10 + (snum[3] - '0');

        return new1 + new2;
    }
};
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(1)` (only 4 digits)
- **Space Complexity:** `O(1)`

---

## 🚀 LeetCode Link
https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits/

---

## ✨ Author
**Guru Prasad**  

