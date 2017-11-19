class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int i,int_max = INT_MIN,count = 1;
        for(i=1;i<nums.size();i++){
            if(nums[i]<=nums[i-1]){
                int_max = count>int_max?count:int_max;
                count = 1;
                continue;
            }
            count++;
        }
        return int_max>count?int_max:count;
    }
};
