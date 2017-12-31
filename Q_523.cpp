class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int i,j;
        if(n<2)
            return false;
        if(k==0){
        for(i=0;i<n;i++)
             if(nums[i]!=0)
                return false;
             return true;
        }
        unordered_set<int> myset;
        int mod,pre=0,sum=0;
        
        for(j=0;j<n;j++){
            sum+=nums[j];
            mod=sum%k;
            if(myset.find(mod)!=myset.end())
                return true;
            else
                myset.insert(mod);   
            if(j==0)
                myset.insert(pre);
        }
        
        return false;
    }
};
