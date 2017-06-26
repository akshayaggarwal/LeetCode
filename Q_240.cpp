class Solution {
public:

   /* int findrow(vector<vector<int>>& matrix, int target){
        
        for(int i=0;i<matrix.size();i++){
            if(target>=matrix[i][0] && target<=matrix[i][matrix[0].size()-1])
                return i;
        }
        
        return -1;
        
    }*/

    bool findelem(vector<int> vec,int target){
        
        for(int i = 0;i<vec.size();i++){
            if(vec[i] == target)
                return true;
        }
        
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        if(matrix.size() == 0 || matrix[0].size() == 0)
            return false;
        
        int i,j;
        
        
        for(i=0;i<matrix.size();i++){
        
        if(target>=matrix[i][0] && target<=matrix[i][matrix[0].size()-1]){
            
            if(findelem(matrix[i],target) == true)
                return true;
            
        }
            
            
        }
        
        return false;
    }
};
