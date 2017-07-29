class Solution {
public:
    
    vector<string> ret;
    
    void find_range(vector<int>& nums, int lower, int upper,int start){
    
        if(lower>upper)
            return;
        
        if(start == nums.size()){
            if(start == 0){
                if(lower == upper)
                    ret.push_back(to_string(lower));
                else
                    ret.push_back(to_string(lower)+"->"+to_string(upper));
            }
            else{
                if(nums[start-1] == INT_MAX)
                    return;
                if(nums[start-1] == lower)
                    lower += 1;
                
                if(lower > upper)
                    return;
                else if(lower == upper)
                    ret.push_back(to_string(lower));
                else
                    ret.push_back(to_string(lower)+"->"+to_string(upper));
            }
            return;
        }
        
        int i;
        
        for(i=start;i<nums.size() && nums[i]<lower;i++);
        
        if(i == nums.size())
            find_range(nums,lower,upper,i);
        else if(nums[i] == lower)
            find_range(nums,lower+1,upper,i+1);
        else if(nums[i]>upper){
                ret.push_back(to_string(lower)+"->"+to_string(upper));
                return;
        }
        else if(nums[i] - lower == 1){
            if(i == start){
                ret.push_back(to_string(lower));
               // find_range(nums,lower,upper,i);
            }
            if(nums[i] == INT_MAX)
                return;
            find_range(nums,nums[i]+1,upper,i+1);
        }
        else{
       //     printf("we are here \n");
            ret.push_back(to_string(lower)+"->"+to_string(nums[i]-1));
            if(nums[i] == INT_MAX)
                return;
            find_range(nums,nums[i]+1,upper,i+1);
        }
        
    }
    
    vector<string> findMissingRanges(vector<int>& nums, int lower, int upper) {
        find_range(nums,lower,upper,0);
        return ret;
    }
};
