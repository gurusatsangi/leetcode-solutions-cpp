#include <Bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        // make a key vale pair for brackets
        unordered_map<char,char> map = {
            {'(',')'},
            {'{','}'},
            {'[',']'}
            };
        // intalese stack
        stack<char> st;
        //check index 1  if key then push in s
        for (char n : s){
            if (map.count(n)) st.push(n);
            else {
                if (st.empty()) return false;
                
                if (map[st.top()] == n) st.pop();
                else return false;
            }
        }
        return st.empty();
   }
};
//