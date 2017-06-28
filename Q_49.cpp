class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     
        map<string,vector<string>> mymap;
        string str;
        int i;
        vector<vector<string>> ret;
        for(i=0;i<strs.size();i++){
            str = strs[i];
            sort(str.begin(),str.end());
            
            mymap[str].push_back(strs[i]);
        }
        
        for(map<string,vector<string>>::iterator it = mymap.begin();it!=mymap.end();it++){
            ret.push_back(it->second);
        }
        return ret;
    }
};
