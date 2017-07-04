class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int i,j = 0;
        
        for(i=0;i<nums.size();i++){
            if(nums[i] == 0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
        
         //       j = 0;
        for(i=0;i<nums.size();i++){
            if(nums[i] == 1){
                swap(nums[i],nums[j]);
                j++;
            }
        }
        
           //     j = 0;
        /*for(i=0;i<nums.size;i++){
            if(nums[i] == 0){
                swap(nums[i],nums[j]);
                j++;
            }
        }*/
        
    }
};
