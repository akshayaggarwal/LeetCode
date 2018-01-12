class Solution {
public:
    bool isValid(string s) {
        if(s.size()<=1)
            return false;
        vector<char> myvec;
        int i;
        char c;
        for(i=0;i<s.size();i++){
            if(s[i]=='{'||s[i]=='('||s[i]=='[')
                myvec.push_back(s[i]);
            else{
                c=s[i];
                if(myvec.size()==0)
                    return false;
                if(c==']'&&myvec.back()!='[')
                    return false;
                if(c==')'&&myvec.back()!='(')
                    return false;
                if(c=='}'&&myvec.back()!='{')
                    return false;
                myvec.pop_back();
            }
        }
        if(myvec.size()!=0)
            return false;
        return true;
    }
};
