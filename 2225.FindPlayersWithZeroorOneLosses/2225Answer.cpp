#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {

        vector<int> ans0;
        vector<int> ans1;
        unordered_map<int, int> loser;
        unordered_map<int, int> winner;
        int n = matches.size();

        for (int i = 0; i < n; i++) {
            int win = matches[i][0];
            int lose = matches[i][1];
            winner[win]++;      
            loser[lose]++;       
        }
        for (const auto& pair : loser) {
            if (pair.second == 1) {
                ans1.push_back(pair.first);
            }
        }
        for (const auto& pair : winner) {
            if (!loser.count(pair.first)) {
                ans0.push_back(pair.first);
            }
        }
        sort(ans0.begin(), ans0.end());
        sort(ans1.begin(), ans1.end());

        return {ans0, ans1};
    }
};
