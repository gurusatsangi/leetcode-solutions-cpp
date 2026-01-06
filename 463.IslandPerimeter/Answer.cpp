#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int perimeter = 0;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == 1) {
                    perimeter += 4;

                    if (i > 0 && grid[i-1][j] == 1)
                        perimeter -= 2;

                    if (j > 0 && grid[i][j-1] == 1)
                        perimeter -= 2;
                }
            }
        }
        return perimeter;
    }
};
//[00,01,03,04]  [0,1,0,0]
//[10,11,13,14]  [1,1,1,0]
//[20,21,22,24]  [0,1,0,0]
//[30,31,32,33]  [1,1,0,0]