class Solution {
public:
    int numJewelsInStones(string J, string S) {
        set<char> myset;
        int i,count=0;
        for(i=0;i<J.size();i++)
            myset.insert(J[i]);
        for(i=0;i<S.size();i++)
            if(myset.find(S[i])!=myset.end())
                count++;
        return count;
    }
};
