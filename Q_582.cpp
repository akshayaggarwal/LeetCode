class Solution {
public:

    map<int,vector<int>> mymap; 

    vector<int> killProcess(vector<int>& pid, vector<int>& ppid, int kill) {
        
        vector<int> ret;
        stack<int> qu;
        
        int i;
        
        for(i=0;i<ppid.size();i++){
            mymap[ppid[i]].push_back(pid[i]);
        }
        
        qu.push(kill);
        ret.push_back(kill);
        
        while(qu.size() != 0){
            
            kill = qu.top();
            qu.pop();
            
            for(i=0;i<mymap[kill].size();i++){
                
                ret.push_back(mymap[kill][i]);
                qu.push(mymap[kill][i]);
                
            }
            
        }
        
        return ret;
    }
};
