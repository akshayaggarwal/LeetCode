class Solution {
public:
    
    vector<vector<int>> ret;
    int si;
    vector<vector<int>> combinationSum3(int k, int n) {
        
        int target = n;
        si = k;
        vector<int> candidates;
        candidates.push_back(1);
        candidates.push_back(2);
        candidates.push_back(3);
        candidates.push_back(4);
        candidates.push_back(5);
        candidates.push_back(6);
        candidates.push_back(7);
        candidates.push_back(8);
        candidates.push_back(9);
        vector<int>combination;
        combinationSum2(candidates,target,combination,0);
        return ret;
    }
    
        void combinationSum2(vector<int>& candidates,int target,vector<int>combination,int begin){
        if(target == 0){
            if(combination.size() == si)
                ret.push_back(combination);        
            return;
        }
        int i;
        for(i=begin;i<candidates.size();i++){
            if(target>=candidates[i]){
                if(i > begin && candidates[i] == candidates[i-1]) continue;     // nice
                combination.push_back(candidates[i]);
                combinationSum2(candidates,target-candidates[i],combination,i+1);
                combination.pop_back();
            }
        }
        
    }
};
