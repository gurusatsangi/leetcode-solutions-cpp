#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prev(n,1);
        vector<int> ahead(n,1);
        vector<int> ans(n);

        prev[0] = 1;
        for( int i = 1; i < n; i++){
            prev[i] = prev[i-1] * nums[i-1];
        }
        ahead[n-1]=1; 
        for(int i = n-2; i >= 0; i--){
            ahead[i] = ahead[i+1] * nums[i+1];
        }
        for(int i = 0; i < n; i++){
            ans[i] = prev[i] * ahead[i];
        }
        return ans;
    }
};