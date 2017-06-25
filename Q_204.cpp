class Solution {
public:
    int countPrimes(int n) {
        
        if(n == 0 || n==1)
            return 0;
            
        vector<bool> myvec(n,true);
        int i,j,count = 0;
        
        for(i=2;i<sqrt(n);i++){
            if(myvec[i] == true){
                
                for(j=i*i;j<n;j+=i){
                    myvec[j] = false;
        //            count--;
                }
                
            }
        }
        
        for(i=2;i<myvec.size();i++){
            if(myvec[i] == true)
                count++;
        }
            
        
        return count;
        
    }   
};
