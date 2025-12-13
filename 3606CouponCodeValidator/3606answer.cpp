#include<Bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        // initialization
        int n = code.size();
        unordered_map<string, vector<string>> mp;
        unordered_set<string> set = {"electronics", "grocery", "pharmacy", "restaurant"};
        vector<string> order = {"electronics", "grocery", "pharmacy", "restaurant"};

        // conditions
        for (int i = 0; i < n; i++){

            if (!isActive[i] || code[i].empty()) continue;

            bool valid = true;
            for (char c : code[i]){
                if (!isalnum(c) && c != '_'){
                    valid = false;
                    break;
                }
            }

            if (!valid) continue;

            string business = businessLine[i];
            if (set.count(business)) mp[business].push_back(code[i]);
        }

        // result build
        vector<string> ans;

        for (auto &b : order){
            auto &p = mp[b];
            sort(p.begin(),p.end()); // ["..",".."]

            ans.insert(ans.end(),p.begin(),p.end());
        }
        return ans;
    }
};