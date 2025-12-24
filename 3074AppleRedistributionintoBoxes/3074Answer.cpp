#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(),capacity.end(),greater<int>());
        int sum = 0;
        for(int k : apple){
            sum += k;
        }
        int count =0;
        int i = 0;
        while(sum > 0 && i < capacity.size()){
            sum -= capacity[i];
            i++;
        }
        return i;
    }
};