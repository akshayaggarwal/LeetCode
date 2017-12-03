class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int i,si = nums.size();
        if(si<2)
            return true;
        int dip=0;
        int a = nums[0];
        for(i=1;i<si;i++){
            if(nums[i]<a){
                if(dip==1)
                    return false;
                dip++;
                if(i-2>=0 && nums[i-2]<nums[i])
                    nums[i-1]=nums[i];
                else if(i-2<0)
                    nums[i-1]=nums[i];
                else
                    nums[i]=nums[i-1];
            }
            a = nums[i];
        }
        return true;
    }
};
