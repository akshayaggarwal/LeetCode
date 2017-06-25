class Solution {
public:

    int ret_row(vector<vector<int>>& matrix, int target){
        
        int i;
        for(i=0;i<matrix.size();i++){
            if(matrix[i][matrix[0].size()-1]>=target)
                return i;
        }
        return -1;
    }
    
    bool searching(vector<int> myvec,int target){
        
        int a,b,c;
        
        a = 0;
        b = myvec.size()-1;
        c = a+(b-a)/2;
        while(a<=b){
            if(myvec[c] == target)
                return true;
            else{
                if(target>myvec[c]){
                    a = c+1;
                    c = a+(b-a)/2;
                }
                else{
                    b = c-1;
                    c = a+(b-a)/2;
                }
            }
        }
        
        return false;
        
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        if(matrix.size() == 0 || matrix[0].size()==0)
            return false;
            
        int a = ret_row(matrix,target);
        
        if(a == -1)
            return false;
        vector<int> myvec = matrix[a];
        
        return  searching(myvec,target);
        
    }
};
