class Solution {
public:
    vector<string> ret;
    void newstring(string s,int i){
        if(i== s.size()){
            ret.push_back(s);
            return;
        }
        newstring(s,i+1);
        if(s[i]>='a'&&s[i]<='z'){
            s[i]-=32;
            newstring(s,i+1);
            s[i]+=32;
        }
        else if(s[i]>='A'&&s[i]<='Z'){
            s[i]+=32;
            newstring(s,i+1);
            s[i]-=32;
        }
    }
    vector<string> letterCasePermutation(string S) {
        newstring(S,0);
        return ret;
    }
};
