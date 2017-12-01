class Solution {
public:
    int reverse(int x) {
        int flag = 0;
        double d = 0;
 
        if(x<0){
            flag = 1;
            x*=-1;
        }
        while(x>0){
            d = d*10 + (x%10);
            x/=10;
        }
        if(flag==1)
            d*=-1;
        if(d>INT_MAX || d<INT_MIN)
            return 0;
        return d;
    }
};
