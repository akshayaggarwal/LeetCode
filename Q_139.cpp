class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        
        vector<bool> myvec(s.size()+1,false);
        myvec[0] = true;
        
        int i,j;
        string str;
        
        for(i=1;i<=s.size();i++){
            
            for(j=i-1;j>=0;j--){
                
                if(myvec[j] == true){
                    
                    str = s.substr(j,i-j);      // remeber the definition of substr(start_point,len);
                    if(find(wordDict.begin(),wordDict.end(),str)!=wordDict.end()){
                        myvec[i] = true;
                        break;
                    }
                }
            }
            
        }
        
        return myvec[s.size()];
    }
};
