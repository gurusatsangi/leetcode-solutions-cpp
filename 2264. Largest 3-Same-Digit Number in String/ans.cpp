class Solution {
public:
    string largestGoodInteger(string num) {
        string ans;
        for(int i=0;i<num.size()-2;i++){
            if(num[i]==num[i+1] && num[i]==num[i+2]) {
                if (ans.empty() || num[i] > ans[0]) {
                    ans.resize(3);
                    ans[0]=num[i];
                    ans[1]=num[i];
                    ans[2]=num[i];
                }
            }
     
      }
       return ans ;
    }
};