# 🔗 Concatenation of Array  
**LeetCode 1929**

---

## 📌 Problem Statement
Given an integer array `nums` of length `n`, create an array `ans` of length `2n` such that:

- `ans[i] == nums[i]`
- `ans[i + n] == nums[i]`

for all `0 <= i < n`.

In simple words, `ans` is the **concatenation of the array with itself**.

---

## 🧠 Key Idea
- Create a new array of size `2n`
- Copy elements of `nums` twice

---

## ✅ Approach: Direct Copy

### 🔹 Steps
1. Let `n = nums.size()`
2. Create array `ans` of size `2n`
3. Copy values at indices `i` and `i + n`
4. Return `ans`

---

## 🧾 C++ Solution
```cpp
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2 * n);

        for (int i = 0; i < n; i++) {
            ans[i] = nums[i];
            ans[i + n] = nums[i];
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
nums = [1,2,1]
```
**Output**
```
[1,2,1,1,2,1]
```

---

### Example 2
**Input**
```
nums = [1,3,2,1]
```
**Output**
```
[1,3,2,1,1,3,2,1]
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(n)`

---

## 🏁 Conclusion
✔ Simple and efficient  
✔ Beginner-friendly solution  
✔ Clean logic  

---

⭐ If this README helped you, consider starring the repository!
