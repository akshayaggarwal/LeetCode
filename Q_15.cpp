class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ret;
        vector<int> myvec;
        int i,j,target,front,back,temp;
        for(i=0;i<nums.size();){
            target = nums[i];
            target*=-1;
            front=i+1;
            back=nums.size()-1;
            while(front<back){
                temp=nums[front]+nums[back];
                if(temp<target)
                    front++;
                else if(temp>target)
                    back--;
                else{
                    myvec.clear();
                    myvec.push_back(nums[i]);
                    myvec.push_back(nums[front]);
                    myvec.push_back(nums[back]);
                    j=front;
                    while(front<back&&nums[j]==nums[front])
                        front++;
                    j=back;
                    while(back>front&&nums[j]==nums[back])
                        back--;
                    ret.push_back(myvec);
                }
            }
            j=i;
            while(i<nums.size()&&nums[i]==nums[j])
                i++;
        }
        return ret;
    }
};
