#include<its/stdc++.h>

using namespace std;
class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int l = 0, r = l + k - 1;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int minx = INT_MAX;
        while(r < n){
          minx = min(minx,nums[r] - nums[l]);
          l++;
          r++;
        } 
        return minx;
    }
};