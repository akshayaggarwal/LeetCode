class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        if(nums.size() == 0)
            return 1;
        else if(nums.size() == 1){
            if(nums[0] == 1)
                return 2;
            else
                return 1;
        }
        
        int i = 1;
        sort(nums.begin(),nums.end());
        int flag = 0,num = 1;
        
        for(i=0;i<nums.size();i++){
            if(nums[i]>0){
                if(flag == 0){
                    flag = 1;
                    if(nums[i] == 1)
                        num = -1;
                    else
                        return 1;
                }
                else{
                    if(nums[i] - nums[i-1] > 1 && num == -1)
                        return nums[i-1]+1;
                }
            }    
        }
        return nums[i-1]+1;
    }
};
