class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int j,temp,n=cost.size();
        int f0,f1,i;
        f1=cost[n-1];
        f0=cost[n-2];
        if(n==2)
            return(min(f0,f1));
        for(j=n-3;j>=0;j--){
            temp=f0;
            f0=cost[j]+min(f0,f1);
            f1=temp;
        }
        return min(f0,f1);
    }
};
