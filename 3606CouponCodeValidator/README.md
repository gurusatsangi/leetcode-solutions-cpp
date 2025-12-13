# 🎟️ LeetCode 3606 --- Coupon Code Validator

This repository contains the C++ solution for **LeetCode Problem 3606
--- Coupon Code Validator**.

The task is to validate coupon codes based on given rules and return the
valid ones sorted by business category and lexicographical order.

------------------------------------------------------------------------

## 📘 Problem Summary

You are given three arrays of equal length `n`:

-   `code[i]` → coupon code (string)
-   `businessLine[i]` → business category (string)
-   `isActive[i]` → whether the coupon is active (boolean)

A coupon is **valid** if:

1.  `code[i]` is **non-empty**
2.  `code[i]` contains **only**:
    -   lowercase letters `a-z`
    -   uppercase letters `A-Z`
    -   digits `0-9`
    -   underscore `_`
3.  `businessLine[i]` is one of:
    -   `"electronics"`
    -   `"grocery"`
    -   `"pharmacy"`
    -   `"restaurant"`
4.  `isActive[i] == true`

------------------------------------------------------------------------

## 📤 Output Requirements

-   Return **only valid coupon codes**
-   Sort results:
    1.  By `businessLine` order:

            electronics → grocery → pharmacy → restaurant

    2.  Lexicographically within each category

------------------------------------------------------------------------

## 🔍 Examples

### Example 1

    Input:
    code = ["SAVE20","","PHARMA5","SAVE@20"]
    businessLine = ["restaurant","grocery","pharmacy","restaurant"]
    isActive = [true,true,true,true]

    Output:
    ["PHARMA5","SAVE20"]

### Example 2

    Input:
    code = ["GROCERY15","ELECTRONICS_50","DISCOUNT10"]
    businessLine = ["grocery","electronics","invalid"]
    isActive = [false,true,true]

    Output:
    ["ELECTRONICS_50"]

------------------------------------------------------------------------

## 💡 Approach

1.  Use a **hash set** to validate allowed business lines
2.  Use a **hash map** to group valid coupon codes by business category
3.  Validate each coupon by checking:
    -   Active status
    -   Code non-empty
    -   Code contains only allowed characters
4.  Sort coupon codes **within each category**
5.  Append results in the required business order

------------------------------------------------------------------------

## 🧾 C++ Implementation

``` cpp
class Solution {
public:
    vector<string> validateCoupons(vector<string>& code,
                                   vector<string>& businessLine,
                                   vector<bool>& isActive) {
        int n = code.size();
        unordered_map<string, vector<string>> mp;
        unordered_set<string> set = {"electronics", "grocery", "pharmacy", "restaurant"};
        vector<string> order = {"electronics", "grocery", "pharmacy", "restaurant"};

        for (int i = 0; i < n; i++) {

            if (!isActive[i] || code[i].empty()) continue;

            bool valid = true;
            for (char c : code[i]) {
                if (!isalnum(c) && c != '_') {
                    valid = false;
                    break;
                }
            }
            if (!valid) continue;

            string business = businessLine[i];
            if (set.count(business))
                mp[business].push_back(code[i]);
        }

        vector<string> ans;
        for (auto &b : order) {
            auto &p = mp[b];
            sort(p.begin(), p.end());
            ans.insert(ans.end(), p.begin(), p.end());
        }

        return ans;
    }
};
```

------------------------------------------------------------------------

## ⏱️ Complexity Analysis

-   **Time Complexity:** `O(n log n)`
-   **Space Complexity:** `O(n)`

------------------------------------------------------------------------

## 📎 Tags

`#HashMap` `#StringValidation` `#Sorting` `#C++` `#LeetCode`
