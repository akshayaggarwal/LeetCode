class Solution {
public:
    bool canPermutePalindrome(string s) {
        sort(s.begin(),s.end());
        int count,i,odd=0;
        char c;
        for(i=0;i<s.size();){
            count=0;
            c=s[i];
            while(i<s.size()&&s[i]==c){
                count++;
                i++;
            }
            if(count%2!=0)
                odd++;
            if(odd>1)
                return false;
        }
        return true;
    }
};
