class Solution {
public:
    int nthUglyNumber(int n) {
        
        vector<int> ret(1,1);
        
        int i=0,j=0,k=0;
    
        n--;
        while(n>0){
            ret.push_back(min(2*ret[i],min(3*ret[j],5*ret[k])));
            
            if(ret.back() == 2*ret[i])
                i++;
            if(ret.back() == 3*ret[j])
                j++;
            if(ret.back() == 5*ret[k])
                k++;
            n--;
        }
        
        return ret.back();
        
    }
};
