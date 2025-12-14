#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";

        int n = num1.size();
        int m = num2.size();

        vector<int> result(n + m, 0);

        for (int i = n - 1; i >= 0; i--){
            int k1 = num1[i] - '0';

            for (int j = m - 1; j >= 0; j--){
                int k2 = num2[j] - '0';

                int prod = (k1 * k2) + result[i + j + 1];

                result[i + j] += prod / 10;
                result[i + j + 1] = prod % 10;
            }
        }

        string ans;
        for (int num : result){
            if (!(ans.empty() && num == 0)) ans.push_back(num + '0');
        }
        return ans;
    }
};