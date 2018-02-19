class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int i,j=0,count,flag;
        for(i=0;i<abbr.size();i++){
            if(abbr[i]>='0'&&abbr[i]<='9'){
                count=0;
                flag=0;
                while(abbr[i]>='0'&&abbr[i]<='9'){
                    if(abbr[i]=='0' && flag==0)
                        return false;
                    flag=1;
                    count=count*10+abbr[i]-48;
                    i++;
                }
                i--;
                j+=count;
                    continue;
            }    
            else if(abbr[i]!=word[j])
                return false;
            j++;
        }
        if(j<word.size()||j>word.size())
            return false;
        return true;
    }
};
