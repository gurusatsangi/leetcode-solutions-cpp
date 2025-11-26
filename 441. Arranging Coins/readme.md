### 🧩 LeetCode 441 – Arrange Coins

## This problem asks us to determine how many **complete rows** of a staircase we can build using `n` coins.

Each row requires:
Row 1 → 1 coin
Row 2 → 2 coins
Row 3 → 3 coins
...
Row k → k coins


We must return the number of **full rows** that can be completed.

---

## ✅ Example

Input:
n = 8


Staircase formed:

1
1 1
1 1 1
1 1 1 ?



Full rows = `3`

Output:
3



---

## ✅ Approach 1: Brute Force (Simulation)

- We try to build rows one by one and reduce coins.

### ✅ C++ Code (Brute Force)

```cpp
class Solution {
public:
    int arrangeCoins(int n) {

        // i represents the number of coins required for the current row
        int i = 1;

        // count stores how many FULL rows we are able to build
        int count = 0;

        // Keep building rows as long as we have enough coins
        while (n >= i) {

            // subtract coins used for current row
            n -= i;

            // one full row completed
            count++;

            // move to next row (requires i+1 coins)
            i++;
        }

        // return number of fully completed rows
        return count;
    }
};

✅ Approach 2: Binary Search (Optimized)
We find the largest k such that:


1 + 2 + 3 + ... + k = k(k+1)/2 ≤ n
✅ C++ Code (Binary Search)
```cpp

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {

        long long low = 0, high = n;

        while (low <= high) {

            long long mid = low + (high - low) / 2;

            long long coins = mid * (mid + 1) / 2;

            if (coins == n)
                return mid;
            else if (coins < n)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return high;
    }
};
```cpp
✅ Complexity Analysis
Approach	Time Complexity	Space Complexity
Brute Force	O(√n)	O(1)
Binary Search	O(log n)	O(1)

✅ Why Binary Search is Better?
The brute force method keeps subtracting:

nginx
Copy code
n - 1 - 2 - 3 - ...
While binary search quickly narrows the answer using math.

✅ Faster for large inputs
✅ No looping through many rows

✅ Conclusion
Both solutions work, but:

✅ Brute force → simple and easy
✅ Binary search → faster and optimal
