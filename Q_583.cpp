class Solution {
public:
    int minDistance(string word1, string word2) {
        
        vector<vector<int>> ret(word1.size()+1,vector<int>(word2.size()+1, 0));
        int i,j;
        
        //printf("row is %d \n",ret.size());
        //printf("col is %d \n",ret[0].size());
        
        for(i=0;i<=word1.size();i++){
            for(j=0;j<=word2.size();j++){
                
                if(i==0 || j==0)
                    ret[i][j] = 0;
                else{
                    
                    ret[i][j] = word1[i-1] == word2[j-1] ? ret[i-1][j-1]+1 : max(ret[i-1][j],ret[i][j-1]);
                    
                }
            }
        }
        
        //printf("et is %d\n",ret[i-1][j-1]);
        return word1.size() + word2.size() - 2*ret[i-1][j-1];
        
        
        
    }
};
