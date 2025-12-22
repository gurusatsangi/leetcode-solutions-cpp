#include<bits/stdc++.h>

Using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        //intialse map and left
        unordered_map<char,int> freq;
        int left = 0;
        int ans = 0;
        //loop in s to calculate freq
        for(int r = 0;r < s.size();r++){
            freq[s[r]]++;
            int major = max(major,freq[s[r]]);
            int minor = (r - left + 1) - major;
            if (minor > k){
                freq[s[left]]--;
                left++;
            }
            ans = max(ans,r - left + 1);
        }
        return ans;
        //check the remain element except one high freq is grater then k slide  window
        //calculate length of widow each time 
    }
};