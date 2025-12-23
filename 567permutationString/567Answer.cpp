#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int left = 0;
        int sizes1 = s1.size(),sizes2 = s2.size();
        vector<int>arr1(26,0);
        vector<int>arr2(26,0);
        for(char k : s1){
            arr1[k - 'a']++;
        }

        for(int  i = 0; i < sizes2;i++){
            arr2[s2[i] - 'a']++;
            
            if (i-left+1 > sizes1){
                arr2[s2[left] - 'a']--;
                left++;
            }
            bool isSame = true;
            for (int i = 0; i < 26; i++){
                if(arr1[i] != arr2[i]){
                    isSame = false;
                    break;
                }
            }
            if (isSame) return true;
        }
        return false;;
    }
};