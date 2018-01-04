class Solution {
public:
    
    int max_area=0;
    
    int findmax(vector<vector<int>>& grid,int sti,int stj){
        if(sti<grid.size()&&stj<grid[0].size()&&grid[sti][stj]==1){
            grid[sti][stj]=0;
            return 1+findmax(grid,sti+1,stj)+findmax(grid,sti,stj+1)+findmax(grid,sti-1,stj)+findmax(grid,sti,stj-1);
        }
        else
            return 0;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int i,j;
        for(i=0;i<grid.size();i++){
            for(j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    max_area=max(max_area,findmax(grid,i,j));
                }
            }
        }
        return max_area;
    }
};
