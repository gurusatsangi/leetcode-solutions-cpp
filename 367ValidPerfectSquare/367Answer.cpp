#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        long long low  = 0,high = num - 1;
        if (num == 1) return true;
        while(low < high){
            long long mid = low + (high - low)/2;
            long long sq = mid * mid;
            if(sq == num) {
                return true;
            }
            else if( sq < num){
                low = mid + 1;
            }
            else high = mid ;
        }
        return false;
    }
};