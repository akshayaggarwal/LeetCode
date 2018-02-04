class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> setx;   
        set<int> sety;
        int i,j;
        for(i=0;i<matrix.size();i++){
            for(j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    setx.insert(i);
                    sety.insert(j);
                }
            }
        }
        set<int>::iterator it=setx.begin();
        while(it!=setx.end()){
            for(i=0;i<matrix[0].size();i++)
                matrix[*it][i]=0;
            it++;
        }
        it=sety.begin();
        while(it!=sety.end()){
            for(i=0;i<matrix.size();i++)
                matrix[i][*it]=0;
            it++;
        }
        //return matrix;
    }
};
