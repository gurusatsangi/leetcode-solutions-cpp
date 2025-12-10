#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int n = timePoints.size();

        //check time > 1440 out 0;
        if (n > 1440) return 0;
        
        vector<int>minutes(n);
        //convert -> minutes;
        for (int i = 0; i < n; i++){
            minutes[i] = stoi(timePoints[i].substr(3,2)) + stoi(timePoints[i].substr(0,2)) * 60;
        }

        //sort minutes;
        sort(minutes.begin(),minutes.end());

        //calc(first+1440)-last for day change
        int minTime = (minutes[0] + 1440) - minutes[n-1];

        //calc min diff of time b/w
        for (int i = 0; i<n-1; i++){
            int curMin = minutes[i+1] - minutes[i];
            minTime = min(curMin,minTime);
        }
       return minTime;
    }
};