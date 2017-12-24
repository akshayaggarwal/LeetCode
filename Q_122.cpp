class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i,retval=0;
        for(i=1;i<prices.size();i++)
            retval+=max(prices[i]-prices[i-1],0);
        return retval;
    }
};
