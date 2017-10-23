class Solution {
public:
    int myAtoi(string str) {
        if(str.size()==0)
            return 0;
        int st=0,i=0,flag = 0;
        double num = 0;
        
        while(i<str.size() && str[i] == ' ')
            i++;
        
        while(i<str.size() && str[i] == '0')
            i++;

        if(str[i] == '-'){
            flag = 1;
            i++;
        }
        else if(str[i] == '+')
            i++;
        
        while(str[i] == '0')
            i++;
        
        for(;i<str.size();i++){
            if(str[i]<'0' || str[i]>'9')
                break;
            num = (num*10) + (str[i]-48);
            
            if(flag == 1 && (num*(-1)) < INT_MIN)
                return INT_MIN;
            if(flag == 0 && num>INT_MAX)
                return INT_MAX;
        }
        if(flag == 1)
            num *= -1;
        return (int)num;
    }
};
