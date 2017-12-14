class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i,j,flag=0,count=0;
        string temp="";
        
        char ch;
        
        if(strs.size()<=0||strs[0].size()==0)
            return temp;
        
        printf("here\n");
        
        for(i=0;;i++){
            if(strs[0].size()<=i)
                return temp;
            ch = strs[0][i];
            
            for(j=1;j<strs.size();j++){
                if(strs[j].size()<=i)
                    return temp;
                if(strs[j][i]!=ch)
                    break;
            }
            if(j>=strs.size())
                temp+=ch;
            else
                break;
        }
        return temp;
    }
};
