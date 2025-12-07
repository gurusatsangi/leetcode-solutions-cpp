class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles;
        while(numBottles / numExchange > 0){
            int lr=(numBottles / numExchange);
            int leftb=(numBottles % numExchange) + lr;
            ans += lr;
            numBottles=leftb;
        }
        return ans;
        
    }
};