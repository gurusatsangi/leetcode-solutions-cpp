# 238. Product of Array Except Self

## 📌 Problem Description
Given an integer array `nums`, return an array `answer` such that:

```
answer[i] = product of all elements of nums except nums[i]
```

### Constraints
- `2 <= nums.length <= 10^5`
- `-30 <= nums[i] <= 30`
- Product of any prefix or suffix fits in **32-bit integer**
- **No division allowed**
- Time Complexity must be **O(n)**

---

## ✅ Approach (Prefix & Suffix Product)

We calculate:
- `prev[i]` → product of all elements **before** index `i`
- `ahead[i]` → product of all elements **after** index `i`

Final answer:
```
ans[i] = prev[i] * ahead[i]
```

This avoids division and runs in linear time.

---

## 🧠 Algorithm Steps
1. Initialize two arrays `prev` and `ahead` with `1`
2. Build prefix product array
3. Build suffix product array
4. Multiply prefix and suffix values for each index

---

## 🧪 Example

### Input
```
nums = [1,2,3,4]
```

### Output
```
[24,12,8,6]
```

---

## 💻 C++ Code

```cpp
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prev(n, 1), ahead(n, 1), ans(n);

        for (int i = 1; i < n; i++) {
            prev[i] = prev[i - 1] * nums[i - 1];
        }

        for (int i = n - 2; i >= 0; i--) {
            ahead[i] = ahead[i + 1] * nums[i + 1];
        }

        for (int i = 0; i < n; i++) {
            ans[i] = prev[i] * ahead[i];
        }

        return ans;
    }
};
```

---

## ⏱️ Complexity Analysis
- **Time:** `O(n)`
- **Space:** `O(n)`

### 🔥 Follow-up Optimization
This problem can be solved in **O(1) extra space** by using the output array itself for prefix products and a variable for suffix product.

---

## 🚀 LeetCode
Problem Link: https://leetcode.com/problems/product-of-array-except-self/

---

## ✨ Author
**Guru Prasad**  

