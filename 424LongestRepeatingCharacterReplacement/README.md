# 🔁 Longest Repeating Character Replacement  
**LeetCode 424**

---

## 📌 Problem Statement
You are given a string `s` consisting of **uppercase English letters** and an integer `k`.

You can choose **any character** of the string and change it to **any other uppercase English character**.  
You can perform this operation **at most `k` times**.

Return the **length of the longest substring** containing the same letter after performing the above operations.

---

## 🧠 Key Idea
This problem is solved using the **Sliding Window technique**.

- Maintain a window `[left, right]`
- Track character frequencies inside the window
- Let `major` be the frequency of the most common character
- Required replacements = `window size - major`
- If replacements exceed `k`, shrink the window

---

## ✅ Approach: Sliding Window + Frequency Map

### 🔹 Steps
1. Use a hashmap to store character frequencies
2. Expand the window using the right pointer
3. Track the maximum frequency (`major`)
4. If replacements > `k`, move left pointer
5. Update the answer with maximum window size

---

## 🧾 C++ Solution
```cpp
class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> freq;
        int left = 0;
        int ans = 0;
        int major = 0;

        for (int r = 0; r < s.size(); r++) {
            freq[s[r]]++;
            major = max(major, freq[s[r]]);

            int minor = (r - left + 1) - major;

            if (minor > k) {
                freq[s[left]]--;
                left++;
            }

            ans = max(ans, r - left + 1);
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
s = "ABAB", k = 2
```
**Output**
```
4
```

---

### Example 2
**Input**
```
s = "AABABBA", k = 1
```
**Output**
```
4
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)` (only 26 uppercase letters)

---

## 🏁 Conclusion
✔ Efficient sliding window solution  
✔ Handles large input sizes  
✔ Interview-ready approach  

---

⭐ If this README helped you, consider starring the repository!

