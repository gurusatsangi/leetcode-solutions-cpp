#include<Bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int> set(nums.begin(), nums.end());

        if (set.count(0))
            return set.size() - 1;
        else
            return set.size();
    }
};