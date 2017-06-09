class Solution {
public:
    int arrangeCoins(int n) {
        
        double k,a1,a2;
        
        k = 0.25;
        k = k+((2*(double)n));
        
        k = sqrt(k);
        
        k = -0.5 + k;
        
        return floor(k);
        
    }
};
