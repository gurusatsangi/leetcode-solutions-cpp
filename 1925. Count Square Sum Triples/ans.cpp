class Solution {
public:
    int countTriples(int n) {
        int ans = 0;

        for (int i = 2; i < n -1; i++){
            double c;

            for (int j = i + 1; j < n; j++){
                int z = (i * i) + (j * j);
                c = sqrt(z);
                if (c == int(c) && c <= n) ans += 2;
            }
        }
        return ans;
    }
};