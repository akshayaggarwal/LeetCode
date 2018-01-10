class Solution {
public:
    int hammingDistance(int x, int y) {
        int c=x^y;
        int count=0;
        while(c!=0){
            count+=c%2;
            c/=2;
        }
        return count;
    }
};
