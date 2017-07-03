class Solution {
public:
    int maximumGap(vector<int>& nums) {
        
        if(nums.size()<2)
            return 0;
        
        sort(nums.begin(),nums.end());
        int i,maxn = INT_MIN;
        
        for(i=1;i<nums.size();i++){
            
            if(abs(nums[i]-nums[i-1]) > maxn)
                maxn = abs(nums[i]-nums[i-1]);
            
        }
        
        return maxn;
    }
};
