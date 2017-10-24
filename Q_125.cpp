class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> myvec;
        int i,j;
        for(i=0;i<s.size();i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i] <='9'))
                myvec.push_back(s[i]);
            else if(s[i]>='A' && s[i]<='Z')
                myvec.push_back(s[i]+32);
        }
        for(i=0,j=myvec.size()-1;i<j;i++,j--){         
            if(myvec[i]!=myvec[j])
                return false;
        }
        return true;
    }
};
