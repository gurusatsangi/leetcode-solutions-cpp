#include<bits/stdc++.h>

using namespace std;

\class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> sum;

        int top = 0, bottom = m - 1;
        int l = 0, r = n - 1;

        while (top <= bottom && l <= r) {

        
            for (int j = l; j <= r; j++)
                sum.push_back(matrix[top][j]);
            top++;

            for (int i = top; i <= bottom; i++)
                sum.push_back(matrix[i][r]);
            r--;

            if (top <= bottom) {
                for (int j = r; j >= l; j--)
                    sum.push_back(matrix[bottom][j]);
                bottom--;
            }
            if (l <= r) {
                for (int i = bottom; i >= top; i--)
                    sum.push_back(matrix[i][l]);
                l++;
            }
        }

        return sum;
    }
};

//[00,01,02]
//[10,11,12]
//[20,21,22]