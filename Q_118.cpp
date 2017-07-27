class Solution {
public:
    
    int fac(double n,double k){
    
        double a = 1;
        double b = 1;
        double c = n-k;
        c++;
        
        while(n>=c){
            a = a*n;
            n--;
        }
        
        while(k>0){
            b = b*k;
            k--;
        }
        
        a =  a/b;
        return (int)(a+0.1);
        
    }

    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> ret;
        vector<int> vec;
        
        int32_t i,j,k,m;
        
        for(i=0;i<numRows;i++){
            
            for(j=0;j<=i;j++)
            {
                if(j>i/2)
                    m = i-j;
                else
                    m = j;
                    
                k = fac((double)i,(double)m);

                vec.push_back(k);
            }
            ret.push_back(vec);
            vec.clear();
            
        }
        return ret;
    }
};
