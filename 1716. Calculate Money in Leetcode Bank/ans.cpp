#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int totalMoney(int n) {
        int week=n/7;
        int days=n%7;
        int sum=0;
        for(int i=0; i<week; i++){
            sum+=28+7*i;
        }
        int start=week+1;
        for(int i=0; i<days;i++){
            sum+=start+i;
        }
        return sum;
    }
};