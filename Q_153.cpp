class Solution {
public:
    int findMin(vector<int>& nums) {
        
        if(nums.size() == 1)
            return nums[0];
        else if(nums.size() == 2)
            return min(nums[0],nums[1]);
        
        //a = 0;
        //b = nums.size()-1;
        
        int next = 1;
        int prev = nums.size()-1;
        
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]<nums[next] && nums[i]<nums[prev]){
                return nums[i];
            }
            
            if(next+1 == nums.size())
                next = 0;
            else
                next++;
            if(prev+1 == nums.size())
                prev = 0;
            else
                prev++;
        }
        
        return nums[0];
    }
};
