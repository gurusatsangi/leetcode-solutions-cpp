#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int smallestRepunitDivByK(int k) {
        // If k is divisible by 2 or 5, then a number made only of 1's
        // can NEVER be divisible by k
        // (because repunit numbers end with 1, not 0 or 5)
        if (k % 2 == 0 || k % 5 == 0) 
            return -1;

        // count stores the length of repunit (number of 1's)
        int count = 1;

        // rem stores remainder of current repunit when divided by k
        // starting with "1"
        int rem = 1 % k;

        // Keep generating next repunit remainder:
        // next number: previous * 10 + 1
        // but instead of forming full number (very large)
        // we only use remainder property: (rem*10 + 1) % k
        while (rem != 0) {
            rem = (rem * 10 + 1) % k;
            count++;   // increase length of repunit
        }

        // When remainder becomes 0, we found divisible repunit
        return count;
    }
};
