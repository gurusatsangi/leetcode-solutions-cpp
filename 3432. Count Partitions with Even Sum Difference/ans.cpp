class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n= nums.size();
        int sum=0;
        int lsum=0;
        int ans=0;
        for(int num : nums){
            sum+=num;
        }
        if(sum % 2 != 0) return 0;

        for(int i=0;i<n-1;i++){
            lsum+=nums[i];
            sum-=nums[i];
            if((sum-lsum)%2==0) ans++;
        }
        return ans;
    }
};