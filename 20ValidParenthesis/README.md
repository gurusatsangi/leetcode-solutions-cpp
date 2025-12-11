# ✅ LeetCode 20 --- Valid Parentheses

This repository contains the C++ solution to **LeetCode Problem 20 ---
Valid Parentheses**.

The problem checks if a given string of parentheses is **valid**,
meaning:

-   Every opening bracket has a matching closing bracket\
-   The brackets close in the correct order\
-   Only the characters `()[]{}` are used

------------------------------------------------------------------------

## 📘 Problem Summary

Given a string `s` consisting of the characters:

    ( ) { } [ ]

Determine whether it forms a **valid parentheses sequence**.

------------------------------------------------------------------------

## 🔍 Examples

### Example 1

    Input: s = "()"
    Output: true

### Example 2

    Input: s = "()[]{}"
    Output: true

### Example 3

    Input: s = "(]"
    Output: false

### Example 4

    Input: s = "([])"
    Output: true

### Example 5

    Input: s = "([)]"
    Output: false

------------------------------------------------------------------------

## 💡 Approach

This solution uses a **stack** and a **hash map**.

### Steps:

1.  Create a mapping of opening → closing brackets\
    `(` → `)` \| `{` → `}` \| `[` → `]`

2.  Traverse the string:

    -   If it's an opening bracket → **push** onto stack
    -   If it's a closing bracket:
        -   If stack is empty → invalid
        -   If it doesn't match the expected closing bracket → invalid
        -   Otherwise → **pop**

3.  At the end, if the stack is empty → the string is valid.

------------------------------------------------------------------------

## 🧾 C++ Implementation

``` cpp
class Solution {
public:
    bool isValid(string s) {

        // key-value mapping for bracket pairs
        unordered_map<char,char> map = {
            {'(', ')'},
            {'{', '}'},
            {'[', ']'}
        };

        stack<char> st;

        for (char n : s) {
            // if it's an opening bracket → push to stack
            if (map.count(n)) {
                st.push(n);
            } else {
                // if no opening bracket available
                if (st.empty()) return false;

                // check if the closing bracket matches
                if (map[st.top()] == n) st.pop();
                else return false;
            }
        }

        // all brackets must be closed
        return st.empty();
    }
};
```

------------------------------------------------------------------------

## ⏱️ Complexity

-   **Time Complexity:** O(n)\
-   **Space Complexity:** O(n) --- worst case stack usage

------------------------------------------------------------------------

## 📎 Tags

`#Stack` `#HashMap` `#ValidParentheses` `#String` `#C++` `#LeetCode`
