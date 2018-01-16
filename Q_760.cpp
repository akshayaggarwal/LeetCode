class Solution {
public:
    vector<int> anagramMappings(vector<int>& A, vector<int>& B) {
        map<int,int> mymap;
        vector<int> ret;
        int i;
        for(i=0;i<B.size();i++)
            mymap[B[i]]=i;
        for(i=0;i<A.size();i++)
            ret.push_back(mymap[A[i]]);
        return ret;
    }
};
