#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        
        unordered_map<int, int> map;
        vector<int>ans;
        for(char num : nums){
            map[num]++;
            if(map[num]==2) ans.push_back(num);
        }
        return ans;
    }
};