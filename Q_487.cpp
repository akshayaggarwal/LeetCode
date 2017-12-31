class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i,cur=0,prev=-1,res=0;
        for(i=0;i<nums.size();i++){
            if(nums[i]==1)
                cur++;
            else{
                if(cur==0)
                    prev=0;
                else{
                    prev=cur;
                    cur=0;
                }
            }
            res=max(res,prev+cur+1);
        }
        return res;
    }
};
