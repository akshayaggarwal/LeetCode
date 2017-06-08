class Solution {
public:
    
    int findnum1(int(n))
    {
        if(n == 1)
            return 0;
        else{
            if(n%2 == 0)
                return 1 + findnum1(n/2);
            else
                return min(1 + findnum1(n-1),1 + findnum1(n+1));
        }
    }
    /*
    int findnum2(int(n))
    {
        if(n == 1)
            return 0;
        else{
            if(n%2 == 0)
                return 1 + findnum2(n/2);
            else
                return 1 + findnum2(n+1);
        }
    }*/
    
    int integerReplacement(int n) {
        
        if(n<=1)
            return 0;
        if(n == INT_MAX)
            return 32;
        int a = findnum1(n);
       // int b = findnum2(n);
        
        return a;//min(a,b);
    }
};
