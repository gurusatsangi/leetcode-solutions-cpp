#include<bits/stdc++.h>
using namespace std;
// LeetCode 977. Squares of a Sorted Array
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        // Step 1: Square every element in the array
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = nums[i] * nums[i];   // square the number
        }

        // Step 2: Sort the squared array in non-decreasing order
        sort(nums.begin(), nums.end());

        // Step 3: Return the result
        return nums;
    }
};
