# 717. 1-bit and 2-bit Characters

## 🧩 Problem Description
We have two special characters:
- **One-bit character** represented by `0`
- **Two-bit character** represented by `10` or `11`

You are given a binary array `bits` that **always ends with `0`**.  
Return `true` if the last character **must be a one-bit character**, otherwise return `false`.

---

## ✅ Approach
- Start checking from the second last bit.
- Count how many consecutive `1`s appear before the last `0`.
- If the count of consecutive `1`s is **even**, the last character is a **one-bit character**.
- If the count is **odd**, the last character is part of a two-bit character.

---

## 💡 Example

### Example 1
**Input:** `[1,0,0]`  
**Output:** `true`

### Example 2
**Input:** `[1,1,1,0]`  
**Output:** `false`

---

## 🧠 C++ Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n = bits.size();
        int count = 0;

        for (int i = n - 2; i >= 0; i--) {
            if (bits[i] == 1) count++;
            else break;
        }
        return (count % 2 == 0);
    }
};
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

---

## 🚀 LeetCode Link
[Problem Link](https://leetcode.com/problems/1-bit-and-2-bit-characters/)

---

### ⭐ If you found this helpful, give the repo a star!
