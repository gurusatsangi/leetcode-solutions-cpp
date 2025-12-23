# 🔄 Permutation in String  
**LeetCode 567 — Medium**

---

## 📌 Problem Statement
Given two strings `s1` and `s2`, return **true** if `s2` contains a **permutation of `s1`**, otherwise return **false**.

In other words, check whether any permutation of `s1` exists as a **substring** of `s2`.

---

## 🧠 Key Idea
A permutation has:
- Same characters
- Same frequency of characters

So we use:
- **Sliding Window**
- **Frequency arrays (size 26)**

---

## ✅ Approach: Sliding Window + Frequency Count

### 🔹 Steps
1. Store frequency of characters in `s1`
2. Maintain a window of size `s1.length()` in `s2`
3. Update frequency of current window
4. Compare both frequency arrays
5. If equal → permutation found

---

## 🧾 C++ Solution
```cpp
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int left = 0;
        int sizes1 = s1.size(), sizes2 = s2.size();

        vector<int> arr1(26, 0);
        vector<int> arr2(26, 0);

        for (char c : s1) {
            arr1[c - 'a']++;
        }

        for (int i = 0; i < sizes2; i++) {
            arr2[s2[i] - 'a']++;

            if (i - left + 1 > sizes1) {
                arr2[s2[left] - 'a']--;
                left++;
            }

            bool isSame = true;
            for (int j = 0; j < 26; j++) {
                if (arr1[j] != arr2[j]) {
                    isSame = false;
                    break;
                }
            }

            if (isSame) return true;
        }
        return false;
    }
};
```

---

## 🧪 Examples

### Example 1
**Input**
```
s1 = "ab", s2 = "eidbaooo"
```
**Output**
```
true
```

---

### Example 2
**Input**
```
s1 = "ab", s2 = "eidboaoo"
```
**Output**
```
false
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

✔ Efficient sliding window solution  
✔ Fixed-size frequency array  
✔ Optimal for large inputs  

---

⭐ If this README helped you, consider starring the repository!
