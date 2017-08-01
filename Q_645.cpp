class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        set<int> myset;
        int newnum,i,pos,sum;
        
        sum = 0;
        
        vector<int> ret;
        
        for(i=0;i<nums.size();i++){
            if(myset.find(nums[i]) != myset.end())
                pos = i;
            else
                myset.insert(nums[i]);
            sum += nums[i];
        }
        
        newnum = (nums.size()*(nums.size()+1))/2;
        sum -= nums[pos];
        
        ret.push_back(nums[pos]);
        
        newnum = newnum - sum;
        ret.push_back(newnum);
        
        return ret;
    }
};
