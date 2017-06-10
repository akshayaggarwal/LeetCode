class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> vec1(nums.size());   
        
        vec1[0] = 1;
        vec1[nums.size()-1] = 1;
        
        int mul,i;
        
        mul = 1;
        
        for(i=1;i<nums.size();i++){
            mul *= nums[i-1];
            vec1[i] = mul;
        }
        
        mul = 1;
        
        for(i=nums.size()-2;i>=0;i--){
            mul *= nums[i+1];
            vec1[i] *= mul;
        }
        
        mul = 1;
        
        return vec1;
        
    }
};
