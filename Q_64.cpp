class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        
        //vector<vector<int>> ret(grid.size(),vector<int>(grid[0].size,0));
        vector<vector<int>> ret(grid.size(),vector<int>(grid[0].size(), 0));
        ret[grid.size()-1][grid[0].size()-1] = grid[grid.size()-1][grid[0].size()-1];
        
        int i,j;
        
        for(i=grid.size()-1;i>=0;i--){
            for(j=grid[0].size()-1;j>=0;j--){
                
                if(i < grid.size()-1 && j< grid[0].size()-1)
                    ret[i][j] = grid[i][j] + min(ret[i+1][j],ret[i][j+1]);
                else if(i < grid.size() - 1)
                    ret[i][j] = grid[i][j] + (ret[i+1][j]);
                else if(j < grid[0].size() - 1)
                    ret[i][j] = grid[i][j] + (ret[i][j+1]);
                else
                    ret[i][j] = grid[i][j];
                
                //printf(" %d ",ret[i][j]);
                
            }
            //printf("\n\n");
        }
        
        return ret[0][0];
        
    }
};
