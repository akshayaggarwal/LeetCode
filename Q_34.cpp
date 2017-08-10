class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int flag = 1,i,st,en;
        vector<int> ret;
        
        for(i=0;i<nums.size();i++){
            if(nums[i] == target){
                if(flag == 1){
                    st = i;
                    flag = 0;
                    en = i;
                }
                else
                    en = i;
                    
            }
        }
        
        if(flag == 1){
            ret.push_back(-1);
            ret.push_back(-1);
        }
        else{
            ret.push_back(st);
            ret.push_back(en);
        }
        
        return ret;
        
    }
};
