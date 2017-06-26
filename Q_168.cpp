class Solution {
public:
    string convertToTitle(int n) {
        
        string str = "";
        char ch;
        
        while(n>0){
            
            n--;
            ch = ((n)%26) + 65;
            
            str = ch + str;
    
            n /= 26;
            
        }
        
        return str;
    }
};
