# ✖️ LeetCode 43 --- Multiply Strings

This repository contains the C++ solution to **LeetCode Problem 43 ---
Multiply Strings**.

The problem requires multiplying two non-negative integers represented
as strings **without using BigInteger libraries or direct integer
conversion**.

------------------------------------------------------------------------

## 📘 Problem Summary

Given two strings:

-   `num1`
-   `num2`

Each represents a **non-negative integer**.

### Rules:

-   You must return their product **as a string**
-   You **cannot** convert the strings directly to integers
-   You **cannot** use any BigInteger library

------------------------------------------------------------------------

## 🔍 Examples

### Example 1

    Input: num1 = "2", num2 = "3"
    Output: "6"

### Example 2

    Input: num1 = "123", num2 = "456"
    Output: "56088"

------------------------------------------------------------------------

## 💡 Approach (Grade-School Multiplication)

We simulate manual multiplication:

1.  Create a result array of size `n + m`
2.  Multiply digits from right to left
3.  Store carry and remainder correctly
4.  Convert the result array into a string
5.  Skip leading zeros

This approach avoids integer overflow and works efficiently for large
strings.

------------------------------------------------------------------------

## 🧾 C++ Implementation

``` cpp
class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";

        int n = num1.size();
        int m = num2.size();

        vector<int> result(n + m, 0);

        for (int i = n - 1; i >= 0; i--) {
            int k1 = num1[i] - '0';

            for (int j = m - 1; j >= 0; j--) {
                int k2 = num2[j] - '0';

                int prod = (k1 * k2) + result[i + j + 1];

                result[i + j] += prod / 10;
                result[i + j + 1] = prod % 10;
            }
        }

        string ans;
        for (int num : result) {
            if (!(ans.empty() && num == 0))
                ans.push_back(num + '0');
        }

        return ans;
    }
};
```

------------------------------------------------------------------------

## ⏱️ Complexity Analysis

-   **Time Complexity:** `O(n × m)`
-   **Space Complexity:** `O(n + m)`

------------------------------------------------------------------------

## 📎 Tags

`#String` `#Math` `#Simulation` `#C++` `#LeetCode`
