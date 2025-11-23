class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
       int sum=0;
        vector<int> mod1, mod2;

        for (int x : nums) {
            sum +=x;
            if(x % 3 == 1) mod1.push_back(x);
            else if(x % 3 == 2) mod2.push_back(x);
        }
        sort(mod1.begin(),mod1.end());
        sort(mod2.begin(),mod2.end());

        if(sum % 3 == 0) return sum;
        int rm1=INT_MAX,rm2=INT_MAX;
        if(sum % 3 ==1){
            if(mod1.size()) rm1=mod1[0];
            if(mod2.size()>=2) rm2=mod2[0]+mod2[1];
        }
        if(sum % 3 == 2){
             if(mod2.size()) rm1=mod2[0];
            if(mod1.size()>=2) rm2=mod1[0]+mod1[1];
        }
        return sum - min(rm1,rm2);
           
    }
};