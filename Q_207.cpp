class Solution {
public:
    
    bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites) {
        
        vector<int> visited(numCourses,0);  // All unvisited initially
        bool cycle = false;
        int i;
        vector<vector<int>> myvec(numCourses);
        
        for(i=0;i<prerequisites.size();i++){
            myvec[prerequisites[i].second].push_back(prerequisites[i].first);
        }
        
        for(i=0;i<numCourses;i++){
     
            if(visited[i] == 0)
            {
                check_dfs(i,visited,cycle,myvec);
            }
             
            if(cycle)
                return false;
            
        }
        
        return true;
        
    }
    
    void check_dfs(int node,vector<int> &visited,bool &cycle,vector<vector<int>> &myvec){
    
        if(visited[node] == 1){
            cycle = true;
            return;
        }
        visited[node] = 1;
        for(int i=0;i<myvec[node].size();i++){
            
            check_dfs(myvec[node][i],visited,cycle,myvec);
            if(cycle)
                return;
        }        
        visited[node] = 2;
        return;
    }
    
};
