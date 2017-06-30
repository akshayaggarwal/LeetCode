class Solution {
public:
    bool isNumber(string s) {
        
        int i,flag,flag2,flag3,flag4,flag5;
        flag = 0;
        flag2 = 0;
        flag3 = 0;
        flag4 = 0;
        flag5 = 0;
        i = 0;
        while(s[i] == ' ')
            i++;
        
        if(i == s.size())
            return false;
            
        for(;i<s.size();i++){
            
            if(s[i] == ' '){
                while(s[i] == ' ')
                    i++;
                if(i == s.size() && flag2 == 1)
                    return true;
                else
                    return false;
            }
            
            if(flag3 == 1 && s[i] == '.')
                return false;
            
            if(flag == 0 && s[i] == '.'){
                if(flag2 == 0 && s.size() == i+1)
                    return false;
                flag = 1;
                continue;
            }
            else if(flag == 1 && s[i] == '.')
                return false;
            else 
                
            if(s[i] == 'e'){
                
                if(flag3 == 1)
                    return false;
                
                if(i == s.size()-1 || flag2 == 0 || s[i+1] == ' '){
                    printf("here\n");
                    return false;
                }
                
                flag3 = 1;
                continue;
                
            }
            
            if(!(((s[i]=='-'|| s[i]=='+')&&flag2==0 && flag == 0)||(s[i]>='0'&&s[i]<='9'))){
                if(flag2 == 1 && flag3 == 1 && (s[i]=='-'|| s[i]=='+') && i+1!=s.size() && s[i+1] != ' '){
                    if(flag5 == 1)
                        return false;
                    flag5 = 1;
                    continue;
                }
                return false;
            }
            
            if(s[i]=='-'|| s[i]=='+'){
                if(flag4 == 1)
                    return false;
                    
                flag4 = 1;
            }
            else
            {
            flag2  = 1;
                
            }
        }
        
        return true;
    }
};
