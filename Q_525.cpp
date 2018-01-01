class Solution {
public:
    
    int mSLen(vector<int>& nums, int k) {
        map<int,int> mymap;
        mymap[0]=-1;
        int i,sum=0, retlen=0;
        for(i=0;i<nums.size();i++){
            sum+=nums[i];
            if(mymap.find(sum)==mymap.end())
                mymap[sum]=i;
            if(mymap.find(sum-k)!=mymap.end())
                retlen = max(retlen,i-mymap[sum-k]);
        }
        return retlen;
    }
    
    int findMaxLength(vector<int>& nums) {
        int i,n=nums.size();
        for(i=0;i<n;i++){
            if(nums[i]==0)
                nums[i]=-1;
        }
        return mSLen(nums,0);
    }
};
