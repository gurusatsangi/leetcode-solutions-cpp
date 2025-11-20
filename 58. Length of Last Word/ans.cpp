class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length()-1;
        int count = 0;
        while(n >= 0 && s[n] == ' ') n--;
        for (int i = n; i>=0; i--){
            if(s[i] == ' '){
                break;
            }
            else{
                count++;
            }
        }
        return count;
    }
};