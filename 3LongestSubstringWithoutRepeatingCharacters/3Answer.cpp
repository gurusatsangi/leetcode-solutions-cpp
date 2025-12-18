#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //intialse set and variable l
        unordered_set<char> st;
        int l = 0,ans = 0;
        //loop in s 
        for(int i = 0; i < s.size(); i++){
            //check s[i] is persent in set
            while(st.count(s[i])){
                //if true l++ and erase from start
                st.erase(s[l]);
                l++; 
            }
            //in for loop every time insert 
            st.insert(s[i]);
            int curans = (i - l) +1;
            ans = max(ans,curans);
            // current ans is big then old if t then rewrite ans 
        }
        return ans;
    }
};
//pwwkew
// if loop
//insert p [p,w] ans = 2
//erase p 
//insert w [w,w] ans = (2-1)+1=2
//while loop
//insert p [p,w] ans = 2
//erase p  [w]
//erase w  []
//insert w,k,e; [w,k,e] ans = 3
//erase w



