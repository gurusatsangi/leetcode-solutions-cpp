#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {

        long long sum = 0;

        // Calculate total sum of the array
        // (Use int num, not char num)
        for (int num : nums) {
            sum += num;
        }

        // If we want the sum to be divisible by k,
        // we must remove exactly (sum % k) from the total.
        //
        // Each operation reduces ANY element by 1,
        // so each operation reduces total sum by 1.
        //
        // Therefore: minimum operations required = sum % k
        return sum % k;
    }
};
