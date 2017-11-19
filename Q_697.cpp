class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        map<int,vector<int>> mymap;
        map<int,int> mymap2;
        int st,en,i,int_min = INT_MAX,int_max=INT_MIN;
        for(i=0;i<nums.size();i++){
            mymap[nums[i]].push_back(i);
            mymap2[nums[i]]++;
            if(mymap2[nums[i]]>int_max)
                int_max = mymap2[nums[i]];
        }
        map<int,vector<int>>::iterator it = mymap.begin();
        printf("int_max is %d \n",int_max);
        while(it!=mymap.end()){
            if(mymap2[it->first]==int_max){
                if(it->second[it->second.size()-1]-it->second[0]+1 < int_min)
                    int_min = it->second[it->second.size()-1]-it->second[0]+1;
            }
            it++;
        }
        return int_min;
    }
};
