#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int originalsiz = original.size();
        if ( m * n != originalsiz) return {};

        vector<vector<int>> ans(m, vector<int>(n));

        int index = 0;

       
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                ans[i][j] = original[index];
                index++;
            }
        }

        return ans;
    }
};