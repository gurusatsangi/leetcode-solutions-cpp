#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // intialise
        int n = nums.size();
        int left = 0;
        int sum = 0;
        int minLen = n + 1;
        // loop 0-n
        for (int i = 0; i < n; i++) {
            // sum+=i;
            sum += nums[i];
            // loop sum >= t
            while(sum >= target){
                // cal lenth
                minLen = min(minLen,i - left+1);
                // sum-=left most until less then target
                sum -= nums[left++];
            }
            
        }
        // retun min len == n -1 retun 0 else maxlen
        return minLen == n + 1 ? 0 : minLen;
    }
};