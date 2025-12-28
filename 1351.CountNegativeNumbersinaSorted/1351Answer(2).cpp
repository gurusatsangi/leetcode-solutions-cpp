#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;

        for (int j = 0; j < m; j++) {
            int l = 0, r = n - 1;

            while (l <= r) {
                int mid = l + (r - l) / 2;

                if (grid[j][mid] < 0) {
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }

            count += (n - l);
        }

        return count;
    }
};
