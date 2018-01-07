class Solution {
public:
    vector<vector<int>> multiply(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int>> ret;
        vector<int> temp;
        int i,j,k,sum,count;
        for(i=0;i<A.size();i++){
            temp.clear();
            for(k=0;k<B[0].size();k++){
                sum=0;
                count=0;
                for(j=0;j<A[0].size();j++){
                    if(A[i][j]==0)
                        count++;
                    sum+=A[i][j]*B[j][k];
                }
                temp.push_back(sum);
                if(count==A[0].size()){
                    k++;
                    while(k<B[0].size()){
                        temp.push_back(0);
                        k++;
                    }
                    break;
                }
            }
            ret.push_back(temp);
        }
        return ret;
    }
};
