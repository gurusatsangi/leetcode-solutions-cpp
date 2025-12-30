#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        int ans = INT_MIN;
        for(int i = 0; i < n; i++){
            int m = accounts[i].size();
            int currbal = 0;
            for(int j = 0; j < m; j++){
                currbal += accounts[i][j];
            }
            ans = max(ans,currbal);
        }
        return ans;
    }
};