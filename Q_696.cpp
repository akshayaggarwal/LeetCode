class Solution {
public:
    int countBinarySubstrings(string s) {
        vector<int> myvec;
        int i,count=1;
        for(i=1;i<s.size();i++){
            if(s[i]==s[i-1])
                count++;
            else{
                myvec.push_back(count);
                count=1;
            }
        }
        myvec.push_back(count);
        count=0;
        for(i=1;i<myvec.size();i++){
            count+=min(myvec[i],myvec[i-1]);
        }
        return count;
    }
};
