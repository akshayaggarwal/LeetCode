class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int i,j,k,flag;
        set<int> mysetr,mysetc;
        int m = matrix[0].size();
        
        for(i=0;i<matrix.size();i++){
            flag = 0;
            for(j=0;j<m;j++){
            
                if(matrix[i][j] == 0){
                    mysetr.insert(i);
                    mysetc.insert(j);
                }
                
            }
        }
        
        set<int>::iterator it;
        
        
        for(it = mysetr.begin();it!=mysetr.end();it++){
            for(i=0;i<m;i++){
                matrix[*it][i] = 0;
            }
        }
        
        if(mysetr.size()!=matrix.size()){
            
        for(it = mysetc.begin();it!=mysetc.end();it++){
            for(i=0;i<matrix.size();i++){
                matrix[i][*it] = 0;
            }
        }
        
            
        }
        
        
    }
};
