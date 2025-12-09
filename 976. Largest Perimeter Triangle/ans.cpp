#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        
        for (int i=n; i>=2; i--){
            int x = nums[i], y = nums[i-1], z = nums[i-2];

            if (y+z > x) return x+y+z;
        }

        return 0;
    }
   
};