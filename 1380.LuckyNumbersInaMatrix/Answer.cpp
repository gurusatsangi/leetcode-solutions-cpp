#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int l = 0; 
        unordered_set<int> s;
        while(l < n){
            int minr = INT_MAX;
            for(int num : matrix[l]){
                 minr = min(minr,num);
            }
            s.insert(minr);
            l++;
        }
        for(int j = 0; j < m; j++){
            int maxc = INT_MIN;
            for(int i = 0; i < n; i++){
                maxc = max(matrix[i][j],maxc);
            }
            if (s.count(maxc)) return {maxc};
        }
        return { };

    }
};
//00 01 02
//10 11 12
//20 21 22