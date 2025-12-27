// first ans that i tried;//
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(),nums.end());
        for (int num : nums){
            if (num == original) original *= 2;
        }

        return original;
    }
};

//second try optimal soln//
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int> mp(nums.begin(),nums.end());
        
        while(mp.count(original)) original *= 2;
        return original;
    }
};