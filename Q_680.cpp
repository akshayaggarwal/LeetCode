class Solution {
public:
    int flag=0;
    bool validPalindrome(string s) {
        int i, si = s.size();
        printf("si is %d \n",si);
        for(i=0;i<si/2;i++){
            if(s[i]!=s[si-i-1]){
                if(flag == 1)
                    return false;
                else{
                    flag = 1;
                    return validPalindrome(s.substr(i,si-i-i-1)) | validPalindrome(s.substr(i+1,si-i-i-1)); 
                }
            }
        }
        return true;
    }
};
