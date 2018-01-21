class Solution {
public:
    void reverseWords(string &s) {
        if(s.size()==0)
            return;
        reverse(s.begin(),s.end());
        string str="";
        int i=0,j=0;
        while(i<s.size()&&s[i]==' ')
                i++;
        j=i;
        for(;i<s.size();){
            while(i<s.size()&&s[i]!=' ')
                i++;
            reverse(s.begin()+j,s.begin()+i);
            str+=s.substr(j,i-j);
            while(i<s.size()&&s[i]==' ')
                i++;
            if(i<s.size())
                str+=' ';
            j=i;
        }
        s=str;
    }
};
