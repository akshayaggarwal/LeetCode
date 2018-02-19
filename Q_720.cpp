class Solution {
public:
    string longestWord(vector<string>& words) {
        unordered_set<string> myset;
        sort(words.begin(),words.end());
        int i;
        string ret;
        for(i=0;i<words.size();i++){
            if(words[i].size()==1||myset.find(words[i].substr(0,words[i].size()-1))!=myset.end()){
                ret=ret.size()>=words[i].size()?ret:words[i];
                myset.insert(words[i]);
            }
        }
        return ret;
    }
};
