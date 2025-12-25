#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        int left = 0;
        long long mul = 1;
        if(k<=1) return 0;
        for(int i = 0; i < n; i++){
             mul = mul * nums[i];

            while(mul >= k){
                mul = mul/ nums[left];
                left++;
            }
            count += i - left + 1;
            
        }
        return count;
    }
};