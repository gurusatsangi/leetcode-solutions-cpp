# Number of Steps to Reduce a Number to Zero (LeetCode 1342)

This repository contains a simple and efficient C++ solution to the
popular LeetCode problem **1342. Number of Steps to Reduce a Number to
Zero**.

------------------------------------------------------------------------

## 📘 Problem Summary

Given an integer `num`, return the **number of steps** required to
reduce it to **zero**.

### Rules:

-   If the number is **even**, divide it by **2**.
-   If the number is **odd**, subtract **1**.

------------------------------------------------------------------------

## 🧠 Approach

We repeatedly apply the given rules in a `while` loop until `num`
becomes zero.

### Time Complexity:

**O(log n)** --- Because dividing by 2 reduces the number quickly.

------------------------------------------------------------------------

## 💻 C++ Solution

``` cpp
class Solution {
public:
    int numberOfSteps(int num) {
        int count = 0;
        while(num != 0){
            if (num % 2 == 0) {
                num = num / 2;
                count++;
            }
            else {
                num = num - 1;
                count++;
            }
        }
        return count;
    }
};
```

------------------------------------------------------------------------

## 📝 Example

### Input

    num = 14

### Output

    6

### Explanation

Steps:\
14 → 7 → 6 → 3 → 2 → 1 → 0

------------------------------------------------------------------------

## 📂 How to Use

You can copy the above solution into your LeetCode editor or integrate
it into your competitive programming workspace.

------------------------------------------------------------------------

## 📎 Author

Prepared automatically via ChatGPT assistant.

------------------------------------------------------------------------


