class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        if(k<0)
            return 0;
        
        int i,cnt;
        map<int,int> mymap;
        
        for(i=0;i<nums.size();i++)
            mymap[nums[i]]++;
            
        cnt = 0;
        
        if(k!=0){
        for(map<int,int>::iterator it = mymap.begin();it!=mymap.end();it++){
            if(mymap.find(it->first + k) != mymap.end())
                cnt++;
        }
        
        }
        else{
        for(map<int,int>::iterator it = mymap.begin();it!=mymap.end();it++){
        
            if(it->second > 1)
                cnt++;
        }
        }
        
        return cnt;
    }
};
