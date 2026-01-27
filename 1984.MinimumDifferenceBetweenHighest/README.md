# 📊 Minimum Difference Between Highest and Lowest of K Scores  
**LeetCode 1984**

---

## 📌 Problem Statement
You are given a **0-indexed integer array** `nums`, where `nums[i]` represents the score of the `i-th` student.  
You are also given an integer `k`.

Pick the scores of **any `k` students** such that the **difference between the highest and lowest scores** among them is **minimized**.

Return the **minimum possible difference**.

---

## 🧠 Key Idea
- Sort the array
- After sorting, the best group of `k` students will be **consecutive**
- For every window of size `k`, calculate  
  `nums[r] - nums[l]`
- Track the minimum difference

---

## ✅ Approach: Sorting + Sliding Window

### 🔹 Steps
1. Sort the `nums` array
2. Use a sliding window of size `k`
3. Compute difference between highest and lowest in the window
4. Return the minimum difference found

---

## 🧾 C++ Solution
```cpp
class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if (k == 1) return 0;

        sort(nums.begin(), nums.end());
        int minDiff = INT_MAX;

        for (int i = 0; i + k - 1 < nums.size(); i++) {
            minDiff = min(minDiff, nums[i + k - 1] - nums[i]);
        }
        return minDiff;
    }
};
```

---

## 🧪 Examples

### Example 1
Input:
```
nums = [90], k = 1
```
Output:
```
0
```

---

### Example 2
Input:
```
nums = [9,4,1,7], k = 2
```
Output:
```
2
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n log n)`
- **Space Complexity:** `O(1)` (excluding sorting space)

---

## 🏁 Conclusion
✔ Sorting simplifies the problem  
✔ Sliding window gives optimal result  
✔ Easy and efficient solution  

---

⭐ If this README helped you, consider starring the repository!
