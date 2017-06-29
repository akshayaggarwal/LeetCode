class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size() == 0)
            return 0;
        
        sort(nums.begin(),nums.end());
        int a,i,count;
        int maxn = 1;
        
        count = 1;
        
        a = nums[0];
        i = 0;
        
        
        
        while(i<nums.size() && nums[i] == a)
            i++;
        
        for(;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1)
                count++;
            else{
                if(count>maxn)
                    maxn = count;
                count = 1;
            }
            a = nums[i];
            while(i<nums.size() && nums[i] == a)
                i++;
            i--;
        }
        
        return count>maxn?count:maxn;
    }
};
