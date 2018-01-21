class Solution {
public:
    int climbStairs(int n) {
        if(n<=2)
            return n;
        int a1=1,a2=2,ret=0;
        n-=2;
        while(n>0){
            ret=a1+a2;
            a1=a2;
            a2=ret;
            n--;
        }
        return ret;
    }
};
