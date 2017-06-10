class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        
        int i,j;
        
        if(r == nums.size() && c == nums[0].size())
            return nums;
        else if(r*c != nums.size()*nums[0].size())
            return nums;
        
        vector<vector<int>> vec;
        vector<int> ret;
        
        int k = 0;
        
        for(i=0;i<nums.size();i++){
            for(j=0;j<nums[0].size();j++){
                
                ret.push_back(nums[i][j]);
                k++;
                if(k == c){
                    k = 0;
                    vec.push_back(ret);
                    ret.clear();
                    
                }
                
                
            }
        }
        
        return vec;
        
    }
};
