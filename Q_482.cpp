class Solution {
public:
    string licenseKeyFormatting(string S, int K) {
        
        int i,count = 0;
        string str = "";
        
        for(i=0;i<S.size();i++){
        
            if(S[i] == '-')
                continue;
            
            if(S[i] >=97 && S[i] <= 122)
                str = str + char((S[i]-32));
            else
                str = str + S[i];
        
        }
        
        count = 0;
        
        for(i=str.size()-1;i>=0;i--){
            if(count == K){
                str.insert(i+1,"-");
                count = 0;
                i++;
                continue;
            }
            
            count++;
        }
        
        return str;
        
    }
};
