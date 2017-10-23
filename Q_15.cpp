class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ret;
        if(nums.size()<3)
            return ret;
        sort(nums.begin(),nums.end());
        
        vector<int> myvec;
        int i,j,target,a,front,back;
        for(i=0;i<nums.size()-1;i++){
            front = i+1;
            back = nums.size()-1;
            target = -nums[i];
            while(front<back){
                myvec.clear();
                a = nums[front]+nums[back];
                if(a<target)
                    front++;
                else if(a>target)
                    back--;
                else{
                    myvec.push_back(nums[i]);
                    myvec.push_back(nums[front]);
                    myvec.push_back(nums[back]);
                    ret.push_back(myvec);
                    while(front<back&&nums[front] == myvec[1])
                        front++;
                    while(front<back&&nums[back] == myvec[0])
                        back--;
                }
            }
            while(i<nums.size()&&nums[i]==-target)
                i++;
            i--;
        }
        return ret;
    }
};
