class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ret;
        if(strs.size()==0)
            return ret;
        map<string,vector<string>> mymap;
        string temp;
        int i;
        for(i=0;i<strs.size();i++){
            temp=strs[i];
            sort(temp.begin(),temp.end());
            mymap[temp].push_back(strs[i]);
        }
        map<string,vector<string>>::iterator it=mymap.begin();
        while(it!=mymap.end()){
            ret.push_back(it->second);
            it++;
        }
        return ret;
    }
};
