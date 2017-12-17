class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(nums.size()<=1)
            return nums;
        map<int,int> mymap;
        vector<int> ret;
        int i,j;
        for(i=0;i<k;i++)
            mymap[nums[i]]++;
        map<int,int>::reverse_iterator it=mymap.rbegin();
        ret.push_back(it->first);
        for(j=0;j<nums.size()-k;j++){
            mymap[nums[j]]--;
            mymap[nums[j+k]]++;
            if(mymap[nums[j]] == 0)
                mymap.erase(nums[j]);
            it=mymap.rbegin();
            ret.push_back(it->first);
        }
        return ret;
    }
};
