# 709. To Lower Case

## 📌 Problem
Given a string `s`, convert all uppercase letters into lowercase letters and return the resulting string.

---

## 💡 Approach
- Traverse the string character by character
- Check if the character lies between `'A'` and `'Z'`
- Convert it to lowercase using ASCII value manipulation  
  (`lowercase = uppercase + 32`)

---

## 🧠 ASCII Explanation
- `'A'` to `'Z'` → ASCII range `65 to 90`
- `'a'` to `'z'` → ASCII range `97 to 122`
- Difference = `32`

---

## ✅ C++ Solution

```cpp
class Solution {
public:
    string toLowerCase(string s) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] + 32;
            }
        }
        return s;
    }
};
```

---

## ⏱️ Complexity
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---


