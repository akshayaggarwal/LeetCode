class Solution {
public:
    int findLHS(vector<int>& nums) {
        
        map<int,int> mymap;
        int i,ret,count,temp1,flag = 0;
        
        ret = INT_MIN;
        
        for(i=0;i<nums.size();i++){
            mymap[nums[i]]++;
        }
        
        for(map<int,int>::iterator it = mymap.begin();it!=mymap.end();it++){
        
            temp1 = it->first;
            //temp2 = it->second;
            
            if(mymap.find(temp1+1) != mymap.end()){
                flag = 1;
                count = mymap[temp1]+mymap[temp1+1];
                ret = max(ret,count);
            }
            
        }
        
        if(flag == 0)
            return 0;
        return ret;
    }
};
