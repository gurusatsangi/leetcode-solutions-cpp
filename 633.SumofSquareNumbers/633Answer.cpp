#include<bitsstdc++.h>

using namespace std;

class Solution {
public:
    bool judgeSquareSum(int c) {
        long long i = 0;
        long long j = sqrt(c);

        while(i <= j){
            long long lhs = i*i + j*j;
            if (lhs == c) return true;
            else if(lhs < c) i++;
            else j--;
        }
        return false;
    }
};