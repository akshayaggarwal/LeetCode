class Solution {
public:
    int countSegments(string s) {
     
     if(s.size() == 0)
        return 0;
        
     int cnt = 0,i;
     i = 0;
     
    while(i<s.size() && s[i] == ' ')
        i++;
    
    if(i==s.size())
        return 0;
    
     for(;i<s.size();i++)
     {
        
         if(s[i] == ' '){
             cnt++;
            
             while(i<s.size() && s[i] == ' ')
                i++;
            i--;
         }
         else if((i == s.size()-1))
            cnt++;
     }
     
     return cnt;
    
        
    }
};
