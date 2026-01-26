# 📏 Minimum Absolute Difference  
**LeetCode 1200**

---

## 📌 Problem Statement
Given an array of **distinct integers** `arr`, find all pairs of elements with the **minimum absolute difference** of any two elements.

Return a list of pairs in **ascending order**.

Each pair `[a, b]` satisfies:
- `a` and `b` are from `arr`
- `a < b`
- `b - a` equals the minimum absolute difference

---

## 🧠 Key Idea
After sorting the array, the minimum absolute difference will always occur between **adjacent elements**.

---

## ✅ Approach

### 🔹 Steps
1. Sort the array
2. Find the minimum difference between adjacent elements
3. Collect all pairs having that minimum difference
4. Return the result

---

## 🧾 C++ Solution
```cpp
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
        int mindiff = INT_MAX;

        for (int i = 1; i < arr.size(); i++) {
            mindiff = min(mindiff, arr[i] - arr[i - 1]);
        }

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] - arr[i - 1] == mindiff) {
                ans.push_back({arr[i - 1], arr[i]});
            }
        }
        return ans;
    }
};
```

---

## 🧪 Examples

### Example 1
Input:
```
arr = [4,2,1,3]
```
Output:
```
[[1,2],[2,3],[3,4]]
```

---

### Example 2
Input:
```
arr = [1,3,6,10,15]
```
Output:
```
[[1,3]]
```

---

### Example 3
Input:
```
arr = [3,8,-10,23,19,-4,-14,27]
```
Output:
```
[[-14,-10],[19,23],[23,27]]
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n log n)`
- **Space Complexity:** `O(1)` (excluding output)

---

## 🏁 Conclusion
✔ Sorting makes the problem easy  
✔ Adjacent elements give minimum difference  
✔ Efficient and clean solution  

---

⭐ If this README helped you, consider starring the repository!
