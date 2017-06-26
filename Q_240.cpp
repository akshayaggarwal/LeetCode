class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int i,j;
        
        for(i=0;i<matrix.size();i++){
            for(j=0;j<matrix[0].size();j++){
                if(matrix[i][j] == target)
                    return true;
            }
        }
        
        return false;
    }
};
