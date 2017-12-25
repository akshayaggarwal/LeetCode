class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        map <int,int> mymap;
        int i;
        for(i=0;i<nums.size();i++)
            mymap[nums[i]]=i;
        
        map<int,int>::iterator it=mymap.end();
        it--;
        map<int,int>::iterator it2=mymap.begin();
        while(it2!=mymap.end()){
            if(it2==it)
                break;
            if(it2->first*2>it->first)
                return -1;
            it2++;
        }
        return it->second;
    }
};
