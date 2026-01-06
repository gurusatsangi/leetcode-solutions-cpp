#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minimumSum(int num) {
        string snum = to_string(num);
        sort(snum.begin(),snum.end());
        int new1 = (snum[0] - '0') * 10 + snum[2] - '0';
        int new2 = (snum[1] - '0') * 10 + snum[3] - '0';
        return new1 + new2;
         

    }
};