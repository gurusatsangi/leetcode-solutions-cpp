#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n = strs.size();
        int l = strs[0].size();
        int count = 0;
        for(int i = 0; i < l; i++){
            for(int j = 1; j < n; j++){
                if (strs[j][i] < strs[j - 1][i]){
                    count ++;
                    break;
                }
                 
            }
        }
        return count;
    }
};