class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        
        string str = "";
        int a,i,j;
        
        uint32_t ret;
        ret = 0;
        
        char ch;
        
        while(n!=0)
        {
            a = n%2;
            
            if(a==1)
                str = '1' + str;// + a;
            else    
                str = '0' + str;
                
            n = n/2;
        }
        
        if(str.size() < 32)
            {
                while(str.size()<32)
                {
                    str = '0' + str;
                }
            }
        
        for(i=0;i<str.size()/2;i++)
        {
            ch = str[i];
            str[i] = str[str.size()-i-1];
            str[str.size()-i-1] = ch; 
        }
        
        j = 0;
        
        for(i=str.size()-1;i>=0;i--)
        {
            ret += pow(2,j) * (str[i]-48);
            j++;
        }
        
        cout<<str;
        return ret;
    }
};
