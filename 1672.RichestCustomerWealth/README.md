# 💰 Richest Customer Wealth  
**LeetCode 1672**

---

## 📌 Problem Statement
You are given an `m x n` integer grid `accounts` where:

- `accounts[i][j]` represents the amount of money the **i-th customer** has in the **j-th bank**

A customer's **wealth** is the sum of money they have in all their bank accounts.

Return the **wealth of the richest customer**.

---

## 🧠 Key Idea
- Each row represents one customer
- Sum each row and track the maximum sum

---

## ✅ Approach: Row-wise Sum

### 🔹 Steps
1. Initialize a variable `maxWealth`
2. For each customer:
   - Add all bank balances
3. Update the maximum wealth
4. Return the result

---

## 🧾 C++ Solution
```cpp
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = INT_MIN;

        for (int i = 0; i < accounts.size(); i++) {
            int currbal = 0;
            for (int j = 0; j < accounts[i].size(); j++) {
                currbal += accounts[i][j];
            }
            ans = max(ans, currbal);
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
accounts = [[1,2,3],[3,2,1]]
```
**Output**
```
6
```

---

### Example 2
**Input**
```
accounts = [[1,5],[7,3],[3,5]]
```
**Output**
```
10
```

---

### Example 3
**Input**
```
accounts = [[2,8,7],[7,1,3],[1,9,5]]
```
**Output**
```
17
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(m × n)`
- **Space Complexity:** `O(1)`

---

## 🏁 Conclusion
✔ Simple and beginner-friendly solution  
✔ Efficient for given constraints  
✔ Clean and readable logic  

---

⭐ If this README helped you, consider starring the repository!
