class Solution {
public:
    int strStr(string haystack, string needle) {
        
        if(needle.size()>haystack.size())
            return -1;
        
        if(needle.size() == 0)
            return 0;
        
        int i,k,j;
        
        for(i=0;i<haystack.size();i++){

            if(haystack.size()-i<needle.size()){
                return -1;
            }
            
            if(haystack[i] == needle[0]){
    
                k = i;
                i++;
                for(j=1;j<needle.size();j++,i++){
                    if(haystack[i] != needle[j])
                        break;
                }
                if(j == needle.size())
                    return k;
                else i = k;
            }
        }
        return -1;
    }
};
