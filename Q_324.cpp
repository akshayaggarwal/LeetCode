class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        
        if(nums.size()<=1)
            return;
        
        sort(nums.begin(),nums.end());
        int i,j;
        
        //vector<int> revnum = nums;
        reverse(nums.begin(),nums.end());
        
        vector<int> ret;
                
        j = 0;
        
        for(i=nums.size()/2,j=0;i<nums.size() && j<nums.size()/2;i++,j++){
        
                ret.push_back(nums[i]);
                ret.push_back(nums[j]);

        }
        
        if(j+1<nums.size()/2)
            ret.push_back(nums[j]);
        if(i<nums.size())
            ret.push_back(nums[i]);
        
        if(i == j)
            ret.push_back(nums[i]);
        nums = ret;
        
    }
};
