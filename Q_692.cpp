class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        map<string,int> mymap1;
        map<int,vector<string>> mymap2;
        int i,j,count=0;
        vector<string> temp;
        vector<string> ret;
        
        if(k==0)
            return ret;
        
        for(i=0;i<words.size();i++)
            mymap1[words[i]]++;
        
        map<string,int>::iterator it=mymap1.begin();
        while(it!=mymap1.end()){
            mymap2[it->second].push_back(it->first);
            it++;
        }
        
        map<int,vector<string>>::iterator itr=mymap2.end();
        itr--;
        for(j=0;j<mymap2.size();j++){
            temp=itr->second;
            sort(temp.begin(),temp.end());
            for(i=0;i<temp.size();i++){
                ret.push_back(temp[i]);
                count++;
                if(count==k)
                    return ret;
            }
            itr--;
            if(count==k)
                return ret;
        }
        return ret;
    }
};
