class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0,i;
        for(i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        for(i=0;i<count;i++)
            nums.push_back(0);
    }
};
