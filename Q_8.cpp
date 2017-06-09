class Solution {
public:
    int myAtoi(string str) {
        
        if(str.size() == 0)
            return 0;
            
        double a = 0;
        
        int flag = 0,i;
        
        i = 0;
        
        while(str[i] == ' '){
            i++;
        }
            
        if(str[i] == '-'){
            flag = 1;
            i++;
        }
        else if(str[i] == '+'){
            flag = 0;
            i++;
        }
        
        for(;i<str.size();i++)
        {
            if(str[i]<48 || str[i] > 57)
                break;
            a = a*10 + str[i]-48;
        }
        
        if(flag == 1)
            a*=-1;
            
        if(a>INT_MAX)
            return INT_MAX;
            
        if(a<INT_MIN)
            return INT_MIN;    
        
        return a;
    }
};
