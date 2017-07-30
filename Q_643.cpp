class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int i;
        double sum = 0,sum2;
        
        if(nums.size()<k)
            return -1;
        
        for(i=0;i<k;i++)
            sum+=nums[i];
        sum2 = sum;
        for(i=k;i<nums.size();i++){
            sum2 = (sum2 + nums[i]) - nums[i-k];
            if(sum2>sum)
                sum = sum2;
        }
        return sum/k;
    }
};
