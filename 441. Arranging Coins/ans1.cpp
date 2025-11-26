#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int arrangeCoins(int n) {
        // We will use binary search to find the largest k
        // such that 1 + 2 + 3 + ... + k <= n
        // which is: k*(k+1)/2 <= n

        long long low = 0, high = n;  // search space for possible rows

        while (low <= high) {
            // avoid overflow: mid = (low + high) / 2
            long long mid = low + (high - low) / 2;

            // total coins needed to form mid rows
            long long coins = mid * (mid + 1) / 2;

            // if exactly equal → we can form mid full rows
            if (coins == n) return mid;

            // if coins needed is less than available coins
            // we can try building more rows
            else if (coins < n) 
                low = mid + 1;

            // if coins needed is more than available
            // reduce number of rows
            else 
                high = mid - 1;
        }

        // high will point to the last valid full row count
        return high;
    }
};
