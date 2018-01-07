class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i,j,cap=nums.size();
        for(j=0,i=0;i<cap;){
            while(i<cap&&nums[i]==0)
                i++;
            if(i==cap)
                break;
            nums[j++]=nums[i++];
        }
        while(j<cap)
            nums[j++]=0;
    }
};
