class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        vector<vector<int>> ret = M;
        int i,j,sum_elem,count;
        for(i=0;i<M.size();i++){
            for(j=0;j<M[0].size();j++){
                sum_elem = 0;
                count = 0;
                
                sum_elem += M[i][j];
                    count++;
                
                if(i-1>=0){
                    sum_elem += M[i-1][j];
                    count++;
                }
                
                if(j-1>=0){
                    sum_elem += M[i][j-1];
                    count++;
                }
                
                if(i-1>=0 && j-1>=0){
                    count++;
                    sum_elem += M[i-1][j-1];
                }
                
                if(i+1<M.size()){
                    sum_elem += M[i+1][j];
                    count++;
                }
                
                if(j+1<M[0].size()){
                    count++;
                    sum_elem += M[i][j+1];
                }
                
                if(i+1<M.size() && j+1<M[0].size()){
                    sum_elem += M[i+1][j+1];
                    count++;
                }
                
                if(i+1<M.size() && j-1>=0){
                    sum_elem += M[i+1][j-1];
                    count++;
                }
                
                if(i-1>=0 && j+1<M[0].size()){
                    sum_elem += M[i-1][j+1];
                    count++;
                }
                ret[i][j] = (sum_elem/count);
            }
        }
        return ret;
    }
};
