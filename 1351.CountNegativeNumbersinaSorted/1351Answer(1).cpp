#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size();
        int count = 0;
        int n = grid[0].size();
        for(int j = 0; j < m;j++){
            for(int i = 0; i < n; i++){
                if(grid[j][i] < 0) count++;
            } 

        }
        return count;
    }
};