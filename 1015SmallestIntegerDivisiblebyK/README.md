### ✅ Smallest Repunit Divisible by K
### 🧩 Problem

# Given a positive integer k, find the length of the smallest number that:

- ✅ consists only of the digit 1
- ✅ is divisible by k

---

### These numbers are called repunits:

```text
1
11
111
1111
...
```


### If no such number exists, return:

```text
-1
```

### ✅ Key Observation

- A repunit number can never be divisible by:
    - 2 (does not end with even digit)
    - 5 (does not end with 0 or 5)

- So:

- if k % 2 == 0 or k % 5 == 0
    - return -1

---

### ✅ Efficient Approach (Modular Arithmetic)

# We do NOT build:

```text
1 → 11 → 111 → 1111 → ...
```

- because they become huge numbers.
- Instead, we track only:
    - remainder


### Formula:

```text
rem = (rem * 10 + 1) % k
```

# When:

```text
rem == 0
```

---

### ✅ the repunit is divisible by k

### ✅ C++ Solution

```cpp
class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if (k % 2 == 0 || k % 5 == 0) 
            return -1;

        int count = 1;
        int rem = 1 % k;

        while (rem != 0) {
            rem = (rem * 10 + 1) % k;
            count++;
        }
        return count;
    }
};
```

### ✅ Why This Works

- We avoid:

- ❌ Overflow
- ❌ Storing large numbers

- We use:

- ✅ Modular arithmetic
- ✅ Efficient remainder update
- ✅ Constant memory


## ✅ Complexity Analysis

| Component | Explanation | Complexity |
|-----------|-------------|------------|
| Time Complexity | Loop runs until remainder becomes 0 (maximum `k` iterations) | **O(k)** |
| Space Complexity | Only variables `count` and `rem` used, no extra storage | **O(1)** |

---

## ✅ Detailed Complexity Table

| Step | Operation | Cost |
|------|-----------|------|
| Initialization | `count`, `rem` variables | O(1) |
| Loop execution | remainder update `(rem * 10 + 1) % k` repeated | O(k) |
| Extra memory used | No arrays / no large number construction | O(1) |
