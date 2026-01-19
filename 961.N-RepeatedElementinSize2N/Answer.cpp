#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            mp[nums[i]]++;
            if (mp[nums[i]] == n / 2) return nums[i];
        }
        return 0;
    }
};