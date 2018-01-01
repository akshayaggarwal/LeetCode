class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        vector<int> dp(amount+1,amount+1);
        int i,j;
        dp[0] = 0;
        for(i=1;i<=amount;i++){
            for(j=0;j<coins.size();j++){
                if(coins[j]<=i){
                    dp[i] = min(dp[i],dp[i-coins[j]]+1);
                }
            }
        }
        return dp[amount]>amount?-1:dp[amount];
    }
};
