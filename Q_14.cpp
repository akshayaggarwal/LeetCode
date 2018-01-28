class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string temp="";
        if(strs.size()==0)
            return temp;
        int i=0,j;
        char ch;
        while(1){
            if(i>=strs[0].size())
                break;
            ch=strs[0][i];
            for(j=1;j<strs.size();j++){
                if(i>=strs[j].size() || strs[j][i]!=ch)
                    break;
            }
            if(j<strs.size())
                break;
            temp+=ch;
            i++;
        }
        return temp;
    }
};
