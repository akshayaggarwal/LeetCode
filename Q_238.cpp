class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> myvec(nums.size(),0);
        int count=0,sum=1,i,j;
        for(i=0;i<nums.size();i++){
            if(nums[i]==0){
                j=i;
                count++;
            }
            if(count>1)
                break;
            if(nums[i]!=0)
                sum*=nums[i];
        }
        if(count>1)
            return myvec;
        else if(count==1){
            myvec[j]=sum;
            return myvec;
        }
        for(i=0;i<myvec.size();i++)
            myvec[i]=sum/nums[i];
        return myvec;
    }
};
