class Solution {
public:
    int threeSumSmaller(vector<int>& nums, int target) {
        
        if(nums.size()<3){
            return 0;
        }
        
        sort(nums.begin(),nums.end());
        
        int i,j,k,count = 0,front,back;
        
        for(i=0;i<nums.size();i++){
            
            
            front = i+1;
            back = nums.size()-1;
            while(front<back){
            
            if(nums[i]+nums[front]+nums[back] < target){
                count += back - front;
                front++;
            }
            else
                back--;
        }
            
        }
        return count;
    }
};
