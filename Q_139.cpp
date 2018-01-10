class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        map<string,int> mymap;
        vector<bool> vec(s.size()+1,false);
        int i,j;
        for(i=0;i<wordDict.size();i++)
            mymap[wordDict[i]]++;
        vec[0]=true;
        for(i=1;i<=s.size();i++){
            for(j=i-1;j>=0;j--){
                if(vec[j]==true){
                    if(mymap.find(s.substr(j,i-j))!=mymap.end()){
                        vec[i]=true;
                        break;
                    }
                }
            }
        }
        return vec[s.size()];
    }
};
