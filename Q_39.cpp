class Solution {
public:
    vector<vector<int>> ret;
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>combination;
        combinationSum2(candidates,target,combination,0);
        return ret;
    }
    
    void combinationSum2(vector<int>& candidates,int target,vector<int>combination,int begin){
        if(target == 0){
            ret.push_back(combination);        
            return;
        }
        int i;
        for(i=begin;i<candidates.size();i++){
            if(target>=candidates[i]){
                combination.push_back(candidates[i]);
                combinationSum2(candidates,target-candidates[i],combination,i);
                combination.pop_back();
            }
        }
        
    }
};
