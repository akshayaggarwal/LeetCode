class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ret;
        vector<int> mymap1(26,0);
        vector<int> mymap2(26,0);
        int i,j;
        if(s.size()<p.size())
            return ret;
        for(i=0;i<p.size();i++){
            mymap1[s[i]-'a']++;
            mymap2[p[i]-'a']++;
        }
        if(mymap1==mymap2)
            ret.push_back(0);
        
        for(i=0,j=p.size();j<s.size();i++,j++){
            mymap1[s[i]-'a']--;
            mymap1[s[j]-'a']++;
            if(mymap1==mymap2)
                ret.push_back(j-p.size()+1);
        }
        return ret;
    }
};
