class Solution {
public:
    
    vector<vector<int>> ret;
    
    void permute(vector<int> &nums, int l, int r)
    {
       int i;
        
       if (l == r)
         ret.push_back(nums);
       else
       {
           for (i = l; i <= r; i++)
           {
              swap((nums[l]), (nums[i]));
              permute(nums, l+1, r);
              swap((nums[l]), (nums[i])); //backtrack
           }
       }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        permute(nums,0,nums.size()-1);
        return ret;
    }
};
