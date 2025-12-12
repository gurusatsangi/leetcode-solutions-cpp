#include <BITS/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int high = numbers.size() - 1, low = 0;
        while (low < high){
            if ((numbers[low] + numbers[high]) > target) high--;
            else if ((numbers[low] + numbers[high]) < target) low++;
            else return {low+1,high+1};
        }
        return {low+1, high+1};
    }
};