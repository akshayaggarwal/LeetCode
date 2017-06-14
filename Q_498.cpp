class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
    
        vector<int> ret;
    
    
     vector<vector<int>> vec;
     int i,j,k,m,n;
     
     if(matrix.size()==0)// || matrix[0].size()==0)
        return ret;
     
     m = matrix.size();
     n = matrix[0].size();
     
     k = m+n;
    // k++;
     //k++;
     while(k>=0){
         vec.push_back(vector<int>());
         k--;
     }
        
     //vec.push_back(matrix[0][0]);
     
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            k = i+ j;
            vec[k].push_back(matrix[i][j]);
        }
    }
    
    for(i=0;i<vec.size();i++){
        if(i%2==0)
            reverse(vec[i].begin(),vec[i].end());
    }
        
        for(i=0;i<vec.size();i++){
        
            for(j=0;j<vec[i].size();j++){
                ret.push_back(vec[i][j]);
            }
            
        }
    
        return ret;
        
    }
    
};
