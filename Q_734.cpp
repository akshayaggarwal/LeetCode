class Solution {
public:
    bool areSentencesSimilar(vector<string>& words1, vector<string>& words2, vector<pair<string, string>> pairs) {
        
        if(words1.size()!=words2.size())
            return false;
        
        map<string,vector<string>> mymap;
        int i,j;
        
        vector<string> vec;
        
        for(i=0;i<pairs.size();i++)
            mymap[pairs[i].first].push_back(pairs[i].second);
        
        for(i=0;i<words1.size();i++){
           if(words1[i]==words2[i])
               continue;
            vec=mymap[words1[i]];    
            for(j=0;j<vec.size();j++){
                if(words2[i]==vec[j])
                    break;
            }
            if(j<vec.size())
                continue;
            
            vec=mymap[words2[i]];    
            for(j=0;j<vec.size();j++){
                if(words1[i]==vec[j])
                    break;
            }
            if(j<vec.size())
                continue;
            return false;
            
        }
        
        return true;
    }
};
