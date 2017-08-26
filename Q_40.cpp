class Solution {
public:
    vector<vector<int>> ret;
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>combination;
        combinationSum3(candidates,target,combination,0);
        return ret;
    }
    
    void combinationSum3(vector<int>& candidates,int target,vector<int>combination,int begin){
        if(target == 0){
            ret.push_back(combination);        
            return;
        }
        int i;
        for(i=begin;i<candidates.size();i++){
            if(target>=candidates[i]){
                
                if(i > begin && candidates[i] == candidates[i-1]) continue;     // nice
                combination.push_back(candidates[i]);
                combinationSum3(candidates,target-candidates[i],combination,i+1);
                combination.pop_back();
            }
        }
        
    }
};
