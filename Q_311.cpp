class Solution {
public:
    vector<vector<int>> multiply(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int>> ret;
        
        int i,j,k,num;
        
        for(i=0;i<A.size();i++){
            
            ret.push_back(vector<int>());
            
            for(k=0;k<B[0].size();k++){
                num = 0;
            for(j=0;j<B.size();j++){
                    num += A[i][j]*B[j][k];
                }
                
                ret[i].push_back(num);
            }
        }
        
        return ret;
    }
};
