class Solution {
public:
    
    int arrayNesting(vector<int>& nums) {
        set<int> temp;
        set<int> temp2;
        int i,j,index = 0;
        for(i=0;i<nums.size();i++){
            if(temp2.find(nums[i]) != temp2.end())
                continue;
            
            temp.clear();
            j = i;
            while(temp.find(nums[j]) == temp.end()){
                temp.insert(nums[j]);
                temp2.insert(nums[j]);
                j = nums[j];
            }
            if(temp.size()>index)
                index = temp.size();
        }
        return index;
    }
};
