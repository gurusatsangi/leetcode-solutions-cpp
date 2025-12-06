## 📘 LeetCode 2264 – Largest 3-Same-Digit Number in String

# 📝 Problem Summary

You are given a numeric string num.
A good integer is a substring of length 3 where all digits are the same (e.g., "777", "000").

Your task is to return the largest such substring.
If no such substring exists, return an empty string.

# 🔍 Example

Input:

num = "6777133339"


Valid good integers:

"777"

"333"

Output:

"777"

# 💡 Approach

We scan the string and check each position i if:

num[i] == num[i+1] == num[i+2]


Whenever we find such a triple:

If it's the first one → store it

Otherwise → update only if the digit is greater than the current answer

We maintain a string ans of size 3 when updating.

# 🧠 Why this works

There are only 10 possible triples ("000" to "999").

Comparing just the first character is enough to check which triple is larger.

One pass through the string → O(n) time, O(1) space.

# ✅ Code (C++)
```cpp
class Solution {
public:
    string largestGoodInteger(string num) {
        string ans;
        for(int i = 0; i + 2 < num.size(); i++){
            if(num[i] == num[i+1] && num[i] == num[i+2]) {
                if (ans.empty() || num[i] > ans[0]) {
                    ans.resize(3);
                    ans[0] = num[i];
                    ans[1] = num[i];
                    ans[2] = num[i];
                }
            }
        }
        return ans;
    }
};
```
# ⏱️ Complexity
  Time	      Space
  O(n)	       O(1)
		
# 🏁 Final Notes

Avoid sorting the string — it destroys the original substring order.

Avoid substr() if you want to keep the solution minimal; direct indexing is faster.