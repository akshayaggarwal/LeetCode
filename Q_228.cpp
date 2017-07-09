class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        string str = "";
        vector<string> ret;
        
        if(nums.size() == 0)
            return ret;
        
        str = str + to_string(nums[0]);
        
        int i,prev = 0;
        
        for(i=1;i<nums.size();i++){
            if(nums[i] != nums[i-1]+1 && i-1 != prev){
                
                str = str + "->";
                str = str + to_string(nums[i-1]);
                
                ret.push_back(str);
                
                str = "";
                prev = i;

                str = str + to_string(nums[i]);
                
            }
            else if(nums[i] != nums[i-1]+1 && i-1 == prev){
                
                ret.push_back(str);
                
                str = "";
                prev = i;
                
                str = str + to_string(nums[i]);
                
            }
        }
        
        if(str != ""){
            if(prev == i-1){
                ret.push_back(str);
            }
            else{
                str = str + "->";
                str = str + to_string(nums[i-1]);
                
                ret.push_back(str);
            }
        }
        
        return ret;
        
    }
};
