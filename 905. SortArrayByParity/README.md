# 🔢 Sort Array By Parity  
**LeetCode 905**

---

## 📌 Problem Statement
Given an integer array `nums`, move all the **even integers** at the beginning of the array followed by all the **odd integers**.

Return any array that satisfies this condition.

---

## 🧠 Key Idea
Separate even and odd numbers.  
The order inside even or odd does not matter.

---

## ✅ Approach 1: Two Pointers (In-Place)

### 🔹 Idea
- Use two pointers from start and end
- Move even numbers to the left
- Move odd numbers to the right
- Swap when needed

### 🔹 C++ Code
```cpp
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;

        while (left < right) {
            if (nums[left] % 2 == 0) {
                left++;
            } else if (nums[right] % 2 == 1) {
                right--;
            } else {
                swap(nums[left], nums[right]);
            }
        }
        return nums;
    }
};
```

---

## ✅ Approach 2: Extra Arrays

### 🔹 Idea
- Store even elements in one array
- Store odd elements in another array
- Combine both arrays

### 🔹 C++ Code
```cpp
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> even, odd;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0)
                even.push_back(nums[i]);
            else
                odd.push_back(nums[i]);
        }

        even.insert(even.end(), odd.begin(), odd.end());
        return even;
    }
};
```

---

## 🧪 Examples

### Example 1
Input:
```
nums = [3,1,2,4]
```
Output:
```
[2,4,3,1]
```

---

### Example 2
Input:
```
nums = [0]
```
Output:
```
[0]
```

---

## ⏱️ Complexity Analysis

| Approach | Time | Space |
|--------|------|-------|
Two Pointers | O(n) | O(1) |
Extra Arrays | O(n) | O(n) |

---

## 🏁 Conclusion
✔ Two-pointer method is space efficient  
✔ Extra-array method is easy to understand  
✔ Both are valid solutions  

---

⭐ If this README helped you, consider starring the repository!
