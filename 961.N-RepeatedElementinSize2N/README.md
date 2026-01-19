# 🔁 N-Repeated Element in Size 2N Array  
**LeetCode 961**

---

## 📌 Problem Statement
You are given an integer array `nums` such that:

- `nums.length == 2 * n`
- `nums` contains `n + 1` unique values
- Exactly **one element is repeated `n` times**
- All other elements appear exactly once

Return the element that is repeated `n` times.

---

## 🧠 Key Idea
Since one element appears **half of the array**, it can be identified easily using:
- Frequency counting (hash map)
- Sorting-based logic

---

## ✅ Approach 1: Hash Map (Frequency Count)

### 🔹 Idea
Count occurrences of each number.  
The number whose count reaches `n` is the answer.

### 🔹 C++ Code
```cpp
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;
            if (mp[nums[i]] == n / 2)
                return nums[i];
        }
        return 0;
    }
};
```

---

## ✅ Approach 2: Sorting-Based Logic

### 🔹 Idea
- Sort the array
- The repeated element will dominate after sorting

### 🔹 C++ Code
```cpp
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int cur = nums[0];
        int count = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == cur) {
                count++;
            } else {
                count--;
            }
            if (count < 0) {
                cur = nums[i];
                count = 1;
            }
        }
        return cur;
    }
};
```

---

## 🧪 Examples

### Example 1
**Input**
```
[1,2,3,3]
```
**Output**
```
3
```

---

### Example 2
**Input**
```
[2,1,2,5,3,2]
```
**Output**
```
2
```

---

### Example 3
**Input**
```
[5,1,5,2,5,3,5,4]
```
**Output**
```
5
```

---

## ⏱️ Complexity Analysis
| Approach | Time | Space |
|--------|------|-------|
Hash Map | O(n) | O(n) |
Sorting | O(n log n) | O(1) |

---

## 🏁 Conclusion
✔ Simple problem with multiple solutions  
✔ Hash map is the easiest approach  
✔ Sorting also works well  

---
