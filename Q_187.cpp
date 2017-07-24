class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        
        map<string,int> mymap;
        vector<string> ret;
        int i;
        string str = "";
        
        if(s.size()<=10)
            return ret;
        
        for(i=0;i<10;i++){
            str = str+s[i];
        }
        
        mymap[str]++;
        
        for(i=10;i<s.size();i++){
            str.erase(str.begin());
            str = str + s[i];
            mymap[str]++;
        }
        
        for(map<string,int>::iterator it = mymap.begin();it!=mymap.end();it++){
            if(it->second>1)
                ret.push_back(it->first);
        }
        
        return ret;
        
    }
};
