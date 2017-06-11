class Solution {
public:
    double myPow(double x, int n) {
        
     //   int i;
        double d;

        uint32_t p;

        if(n<0){
            x = 1/x;
            p = -n;
        }
        else
            p = n;

        d = 1;
        
        while(p){
            if(p&1)
                d = d*x;
                
            x = x*x;
            p >>= 1;
        }
        
        return d;
    }
};
