class Solution {
public:
    int numSub(string s) {
        long long ans =0,count =0;
        long long mod=1e9+7;
        for (char c:s){
            if(c=='1'){
                count++;
                ans=ans+count;
            }
            else{
                count=0;
            }

        }
        return ans % mod;
    }
};
//i1-1,i2-1,i4-1,i5-1,i6-1
//c=i1 count=1 ans=1
//c=i2 count=2 ans=3
//c=i3 count=0 ans=3
//c=i4 count=1 ans=4
//c=i5 count=2 ans=6
//c=i6 count=3 ans=9