class Solution {
public:
    int longestSubstring(string s, int k) {
        if(s.size()==0 || k>s.size())
            return 0;
        
        map<char,int> mymap;
        int i,j;
        
        for(i=0;i<s.size();i++)
            mymap[s[i]]++;
        
        j = 0;
        while(j<s.size() && mymap[s[j]]>=k)
            j++;
        
        if(j==s.size())
            return s.size();
        
        int left = longestSubstring(s.substr(0,j),k);
        int right = longestSubstring(s.substr(j+1),k);
        
        return max(left,right);
        
    }
};
