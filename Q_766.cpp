class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int i,num,a,b;
        for(i=0;i<matrix[0].size();i++){
            num=matrix[0][i];
            for(a=1,b=i+1;a<matrix.size()&&b<matrix[0].size();a++,b++){
                if(matrix[a][b]!=num)
                    return false;;
            }
        }
        
        for(i=1;i<matrix.size();i++){
            num=matrix[i][0];
            for(a=i+1,b=1;a<matrix.size()&&b<matrix[0].size();a++,b++){
                if(matrix[a][b]!=num)
                    return false;
            }
        }
        return true;
    }
};
