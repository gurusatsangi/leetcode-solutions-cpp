# 🍎 Apple Redistribution into Boxes  
**LeetCode 3074**

---

## 📌 Problem Statement
You are given two integer arrays:

- `apple[i]` → number of apples in the `i-th` pile  
- `capacity[j]` → capacity of the `j-th` box  

You want to **redistribute all apples into boxes** such that:
- Each box can hold at most its capacity
- Apples can be placed in any box

Return the **minimum number of boxes** required to store all apples.

---

## 🧠 Key Idea
To minimize the number of boxes used:
- Always fill the **largest capacity boxes first**
- This greedy strategy ensures optimal results

---

## ✅ Approach: Greedy + Sorting

### 🔹 Steps
1. Calculate the **total number of apples**
2. Sort the `capacity` array in **descending order**
3. Use boxes one by one until all apples are placed
4. Count the number of boxes used

---

## 🧾 C++ Solution
```cpp
class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(), capacity.end(), greater<int>());

        int sum = 0;
        for (int k : apple) {
            sum += k;
        }

        int i = 0;
        while (sum > 0 && i < capacity.size()) {
            sum -= capacity[i];
            i++;
        }
        return i;
    }
};
```

---

## 🧪 Example

### Input
```
apple = [1,3,2]
capacity = [4,3,1,5,2]
```

### Output
```
2
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n log n)`
- **Space Complexity:** `O(1)` (excluding sort space)

---

## 🏁 Conclusion
✔ Greedy strategy ensures minimum boxes  
✔ Easy to implement  
✔ Optimal and interview-friendly solution  

---

⭐ If this README helped you, consider starring the repository!
