# 🔤 Longest Substring Without Repeating Characters  
**LeetCode 3**

---

## 📌 Problem Statement
Given a string `s`, find the **length of the longest substring** without repeating characters.

> ⚠️ Note: The answer must be a **substring** (continuous), not a subsequence.

---

## 🧠 Key Idea (Sliding Window)
We use the **sliding window technique** with:
- Two pointers (`l` and `i`)
- A `unordered_set` to track characters in the current window

When a duplicate character is found:
- Shrink the window from the left
- Remove characters until the duplicate is gone

---

## ✅ Approach: Sliding Window + `unordered_set`

### 🔹 Steps
1. Initialize an empty set
2. Use pointer `l` for window start
3. Traverse string with pointer `i`
4. If `s[i]` already exists in set:
   - Remove characters from left (`l++`) until duplicate is removed
5. Insert `s[i]` into set
6. Update maximum length

---

## 🧾 C++ Solution
```cpp
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int l = 0, ans = 0;

        for (int i = 0; i < s.size(); i++) {
            while (st.count(s[i])) {
                st.erase(s[l]);
                l++;
            }
            st.insert(s[i]);
            ans = max(ans, i - l + 1);
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
s = "abcabcbb"
```
**Output**
```
3
```
**Explanation:** `"abc"`

---

### Example 2
**Input**
```
s = "bbbbb"
```
**Output**
```
1
```
**Explanation:** `"b"`

---

### Example 3
**Input**
```
s = "pwwkew"
```
**Output**
```
3
```
**Explanation:** `"wke"`

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(min(n, charset))`

---

## 🏁 Conclusion
✔ Efficient sliding window solution  
✔ Handles all edge cases  
✔ Optimal for large inputs  

---

⭐ If you found this useful, consider starring the repository!
