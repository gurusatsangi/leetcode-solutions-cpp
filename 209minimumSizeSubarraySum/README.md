# 📏 Minimum Size Subarray Sum  
**LeetCode 209**

---

## 📌 Problem Statement
Given an array of **positive integers** `nums` and a positive integer `target`,  
return the **minimum length of a contiguous subarray** whose sum is **greater than or equal to `target`**.

If there is **no such subarray**, return `0`.

---

## 🧠 Key Idea
Since all elements are **positive**, we can apply the **Sliding Window (Two Pointers)** technique.

- Expand the window by moving the right pointer
- Shrink the window from the left when the sum becomes ≥ target
- Track the minimum window length

---

## ✅ Approach: Sliding Window (O(n))

### 🔹 Steps
1. Initialize `left = 0`, `sum = 0`
2. Iterate with pointer `i`
3. Add `nums[i]` to `sum`
4. While `sum ≥ target`:
   - Update minimum length
   - Shrink window from the left

---

## 🧾 C++ Solution
```cpp
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int sum = 0;
        int minLen = n + 1;

        for (int i = 0; i < n; i++) {
            sum += nums[i];

            while (sum >= target) {
                minLen = min(minLen, i - left + 1);
                sum -= nums[left++];
            }
        }

        return minLen == n + 1 ? 0 : minLen;
    }
};
```

---

## 🧪 Examples

### Example 1
**Input**
```
target = 7
nums = [2,3,1,2,4,3]
```
**Output**
```
2
```

---

### Example 2
**Input**
```
target = 4
nums = [1,4,4]
```
**Output**
```
1
```

---

### Example 3
**Input**
```
target = 11
nums = [1,1,1,1,1,1,1,1]
```
**Output**
```
0
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## 🔁 Follow-up
Another approach:
- **Prefix Sum + Binary Search**
- Time Complexity: `O(n log n)`

---

## 🏁 Conclusion
✔ Optimal sliding window solution  
✔ Clean and efficient  
✔ Interview-friendly logic  

---

⭐ If this README helped you, consider starring the repository!
