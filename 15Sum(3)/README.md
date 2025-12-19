# 🔢 3Sum  
**LeetCode 15**

---

## 📌 Problem Statement
Given an integer array `nums`, return **all unique triplets**  
`[nums[i], nums[j], nums[k]]` such that:

- `i != j`, `i != k`, `j != k`
- `nums[i] + nums[j] + nums[k] == 0`
- The solution set must **not contain duplicate triplets**

---

## 🧠 Key Idea
This problem is solved efficiently using:
- **Sorting**
- **Two Pointers Technique**

After fixing one element, the remaining problem becomes a **2Sum** problem.

---

## ✅ Approach: Sort + Two Pointers

### 🔹 Steps
1. Sort the array
2. Fix one number at index `i`
3. Use two pointers:
   - `low = i + 1`
   - `high = n - 1`
4. Compare `nums[low] + nums[high]` with `-nums[i]`
5. Skip duplicates to avoid repeated triplets

---

## 🧾 C++ Solution
```cpp
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;

        for (int i = 0; i < n - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int target = -nums[i];
            int low = i + 1, high = n - 1;

            while (low < high) {
                int sum = nums[low] + nums[high];

                if (sum < target) low++;
                else if (sum > target) high--;
                else {
                    ans.push_back({nums[i], nums[low], nums[high]});

                    while (low < high && nums[low] == nums[low + 1]) low++;
                    while (low < high && nums[high] == nums[high - 1]) high--;

                    low++;
                    high--;
                }
            }
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
nums = [-1,0,1,2,-1,-4]
```
**Output**
```
[[-1,-1,2], [-1,0,1]]
```

---

### Example 2
**Input**
```
nums = [0,1,1]
```
**Output**
```
[]
```

---

### Example 3
**Input**
```
nums = [0,0,0]
```
**Output**
```
[[0,0,0]]
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n²)`
- **Space Complexity:** `O(1)` (excluding output)

---

## 🏁 Conclusion
✔ Efficient and optimal solution  
✔ Uses classic two-pointer pattern  
✔ Handles duplicates correctly  

---

⭐ If you found this helpful, consider starring the repository!
