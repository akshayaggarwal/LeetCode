class Solution {
public:
    int maxRotateFunction(vector<int>& A) {
        if(A.size() == 0)
            return 0;
        int ret,i,sumo,allsum;
        sumo = 0;
        allsum = 0;
        ret = INT_MIN;
        
        for(i=0;i<A.size();i++){
            sumo += A[i];
            allsum += i*A[i]; 
        }
        
        for(i=0;i<A.size();i++){
            allsum -= sumo;
            allsum += A[i];
            allsum += A[i]*(A.size()-1);
            ret = max(ret,allsum);
        }
        
        return ret;
    }
};
