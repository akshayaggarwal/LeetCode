class Solution {
public:
    int maxSubArrayLen(vector<int>& nums, int k) {
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
};
