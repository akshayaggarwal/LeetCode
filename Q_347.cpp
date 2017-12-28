class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mymap1;
        map<int,vector<int>> mymap2;
        int i,j,count=0;
        vector<int> ret;
        if(k==0)
            return ret;
        for(i=0;i<nums.size();i++)
            mymap1[nums[i]]++;
        unordered_map<int,int>::iterator it=mymap1.begin();
        while(it!=mymap1.end()){
            mymap2[it->second].push_back(it->first);
            it++;
        }
        
        map<int,vector<int>>::iterator it2=mymap2.end();
        it2--;
        while(1){
            vector<int> temp=it2->second;
            for(j=0;j<temp.size();j++){
                printf("here\n");
                if(count==k)
                    break;
                ret.push_back(temp[j]);
                count++;
                
            }
            if(it2==mymap2.begin())
                break;
            it2--;
        }

    return ret;
    }
    };
