class Solution {
public:
    bool validWordSquare(vector<string>& words) {
        
        int i,j,len,k;
        
        for(i=0;i<words.size();i++){
            if(words.size() < words[i].size())
                return false;
            len = words[i].size();
            for(k=0;k<len;k++){
                if(words[k].size()<i+1)
                    return false;
            }
            for(;k<words.size();k++){
                if(words[k].size()>i+1)
                    return false;
            }
            for(j=0;j<words[i].size();j++){
                if(words[i][j]!=words[j][i])
                    return false;
            }
        
            
        }
            
        return true;
    }
};
