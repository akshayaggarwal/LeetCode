class Solution {
public:
    int countPrimeSetBits(int L, int R) {
        int i,j,bits,ret=0;
        set<int> myset = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101};
        for(i=L;i<=R;i++){
            bits=0;
            for(j=i;j>=1;j>>=1)
                bits+=j&1;
            ret+=myset.count(bits);
        }
        return ret;
    }
};
