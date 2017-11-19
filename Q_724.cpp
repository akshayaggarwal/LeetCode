class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int arr_sum=0,i,new_sum=0;
        for(i=0;i<nums.size();i++)
            arr_sum+=nums[i];
        for(i=0;i<nums.size();i++){
            if(new_sum == arr_sum-new_sum-nums[i])
                break;
            new_sum+=nums[i];
        }
        if(i==nums.size())
            return -1;
        else
            return i;
    }
};
