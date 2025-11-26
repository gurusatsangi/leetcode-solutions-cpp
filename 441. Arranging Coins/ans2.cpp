include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int arrangeCoins(int n) {

        // i represents the number of coins required for the current row
        int i = 1;

        // count stores how many FULL rows we are able to build
        int count = 0;

        // Keep building rows as long as we have enough coins
        // Example: need 1 coin → then 2 coins → then 3 coins ...
        while (n >= i) {

            // subtract coins used for current row
            n -= i;

            // one full row completed
            count++;

            // move to next row (requires i+1 coins)
            i++;
        }

        // when we no longer have enough coins for the next row,
        // return number of fully completed rows
        return count;
    }
};
