class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ret;
        sort(nums.begin(),nums.end());
        int i,j,front,back,sum2,target2,target3;
        for(i=0;i<nums.size();i++){
            target3 = target-nums[i];
                for(j = i+1;j<nums.size();j++){
                    target2 = target3-nums[j];
                    front = j+1;
                    back = nums.size()-1;
                    while(front<back){
                        sum2 = nums[front] + nums[back]; 
                        if(sum2 < target2)
                            front++;
                        else if(sum2 > target2)
                            back--;
                        else{
                            vector<int> myvec;
                            myvec.push_back(nums[i]);
                            myvec.push_back(nums[j]);
                            myvec.push_back(nums[front]);
                            myvec.push_back(nums[back]);
                            while(front<back && nums[front]==myvec[2])
                                front++;
                            while(front<back && nums[back]==myvec[3])
                                back--;
                            ret.push_back(myvec);
                        }
                    }
                     while(j + 1 < nums.size() && nums[j + 1] == nums[j]) ++j;
                }
             while (i + 1 < nums.size() && nums[i + 1] == nums[i]) ++i;
        }
        
        return ret;
    }
};
