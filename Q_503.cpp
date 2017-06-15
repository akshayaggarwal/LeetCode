class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        int i,j,k,flag;
        vector<int> ret(nums.size(),0);
        
        for(i=0;i<nums.size();i++){
         
        k = 0;
        if(i == nums.size()-1)
            j = 0;
        else
            j = i+1;
        flag = 0;
        
        while(k<nums.size()){
        
        if(nums[j]>nums[i]){
            flag = 1;
            ret[i] = nums[j];
            break;
        }    
            
        if(j == nums.size()-1)
            j = 0;
        else
            j++;
        
            k++;
            
        }
        
        if(flag == 0)
            ret[i] = -1;
            
        }
        
        return ret;
    }
};
