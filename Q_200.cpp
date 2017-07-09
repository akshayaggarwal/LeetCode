class Solution {
public:
    
    void mark_grid(vector<vector<char>>& grid,int r,int c,vector<vector <bool>> &visited){
        
        visited[r][c] = true;
        int i,j;
        
        i = r;
        j = c;
        
                if(i-1 >=0 && grid[i-1][j] == '1' && visited[i-1][j] == false)
                    mark_grid(grid,i-1,j,visited);
        
                if(j-1 >=0 && grid[i][j-1] == '1' && visited[i][j-1] == false)
                    mark_grid(grid,i,j-1,visited);
        
                if(i+1<grid.size() && grid[i+1][j] == '1' && visited[i+1][j] == false)
                    mark_grid(grid,i+1,j,visited);
                
                if(j+1 <grid[0].size() && grid[i][j+1] == '1' && visited[i][j+1] == false)
                    mark_grid(grid,i,j+1,visited);
        
        
    }
    
    int numIslands(vector<vector<char>>& grid) {
        
        if(grid.size() == 0 || grid[0].size() == 0)
            return 0;
        
        vector<vector <bool>> visited(grid.size(),vector<bool>(grid[0].size(),false));
        int i,j,count = 0;
        
        for(i=0;i<grid.size();i++){
            for(j=0;j<grid[0].size();j++){
                
                if(grid[i][j] == '1' && visited[i][j] == false){
                    mark_grid(grid,i,j,visited);
                    count++;
                }
                
            }
        }
        
        return count;
    }
};
