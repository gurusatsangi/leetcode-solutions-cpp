#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        int n = prices.size();
        long long ans = n;
        int count = 0;
        for(int i = 1; i < n; i++){
            if (prices[i-1] - prices[i] == 1) count++;
            else count = 0;
            ans += count; 
        }
        return ans;
    }
};