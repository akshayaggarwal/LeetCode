class Solution {
public:
    int countSubstrings(string s) {
        int n=s.size();
        int i,j,ret=0;
        for(i=0;i<n;i++){
            for(j=0;i-j>=0 &&j+i<n&&s[i-j]==s[i+j];j++)
                ret++;
            for(j=0;i-j-1>=0 &&j+i<n&&s[i-j-1]==s[i+j];j++)
                ret++;            

        }
        return ret;
    }
};
