class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int i,prod=1,n=nums.size();
        vector<int> ret(n,0);
        if(n==0)
            return ret;
        int temp,count=0;
        for(i=0;i<n;i++){
            if(nums[i]==0){
                if(count==1){
                    prod=0;
                    break;
                }
                else{
                    count++;
                    temp=i;
                    continue;
                }
            }
            prod*=nums[i];
        }
        
        if(prod==0)
            return ret;
        
        if(count==1){
            ret[temp]=prod;
            return ret;
        }
        
        for(i=0;i<n;i++){
            if(nums[i]==0)
                ret[i]=prod;
            else
                ret[i]=prod/nums[i];
        }
        return ret;
    }
};
